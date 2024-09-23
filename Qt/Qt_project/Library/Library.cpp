#include "Library.h"

Library::Library(QString cp_jsonFilePath, QObject *parent)
    : QObject{parent}
{
    jsonFilePath = cp_jsonFilePath.split("build")[0] + "Library.json";
    refresh();
}

Library::~Library() {
    apply();
}

void Library::addBook(const Book& book) {
    refresh();
    if(!isRepeated(book.title)) {
        QJsonObject newBook;
        QJsonObject publish;
        newBook["title"] = book.title;
        newBook["author"] = book.author;
        newBook["category"] = book.category;
        newBook["barcode"] = book.barcode;
        publish["year"] = book.publicationYear;
        publish["publisher"] = book.publisher;
        newBook["publish"] = publish;
        books.append(newBook);
        apply();
    }
}

void Library::searchBooks(const QString& bookTitle) {
    // Implement search logic based on user input
    bool bookSearch = false;
    for(auto& book : books) {
        if(book["title"] == bookTitle) {
            bookSearch = true;
            qDebug() << "Book author => "   << book["author"].toString();
            qDebug() << "Book category => " << book["category"].toString();

            QJsonObject publish = book["publish"].toObject();
            qDebug() << "Book publication year =>" << publish["year"].toInt();
            qDebug() << "Book publisher =>"       << publish["publisher"].toString();
            qDebug() << "Book barcode => "  << book["barcode"].toString();
            break;
        }
    }
    if(!bookSearch)
    {
        qDebug() << "Couldn't find book.." << '\n';
    }
}



void Library::removeBook(const QString& barcode) {

    refresh();
    bool bookSearch = false;
    for(int i = 0; i < books.size(); i ++)
    {
        if(books[i]["barcode"] == barcode)
        {
            bookSearch = true;
            books.erase(books.begin()+i);
            qDebug() << "Book removed.." << '\n';
        }
    }
    if(!bookSearch)
    {
        qDebug() << "Couldn't find book.." << '\n';
    }
    apply();
}

void Library::apply() {

    QFile file(jsonFilePath);
    if (file.open(QIODevice::WriteOnly | QIODevice::Text)) {
        QJsonArray booksArray;

        // Convert from vector of QJsonObject to QJsonArray
        for(auto& book : books)
        {
            booksArray.append(book);
        }

        // Convert from QJsonArray to QJsonDocument
        QJsonDocument doc(booksArray);

        // Convert from QJsonDocument to QByteArray so I can write on the json file
        file.write(doc.toJson());
        file.flush();
        file.close();
    }
}

bool Library::isRepeated(QString bookTitle) {

    for(auto& book : books)
    {
        if(book["title"] == bookTitle)
        {
            return true;
        }
    }
    return false;

}

void Library::refresh() {

    books.clear();
    books.resize(0);
    books.shrink_to_fit();

    QFile file(jsonFilePath);

    if (file.open(QIODevice::ReadOnly | QIODevice::Text)) {

        // Read from json file & convert date from QByteArray to QJsonDocument
        QJsonDocument doc = QJsonDocument::fromJson(file.readAll());
        // Convert QJsonDocument to QJsonArray
        QJsonArray booksArray = doc.array();
        // Convert QJsonArray into QJsonObjects
        for(int i = 0; i < booksArray.size(); i++)
        {
            books << booksArray[i].toObject();
        }

        file.close();
    }
    else{
        qDebug() << "Couldn't open the file.." << '\n' ;
    }
}
