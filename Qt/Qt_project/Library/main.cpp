#include <QCoreApplication>
#include <QTextStream>
#include <Library.h>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    QTextStream qin(stdin);
    QTextStream qout(stdout);

    Library library;
    QString user;

    while(true)
    {
        qout << "Enter 'Admin' for admin, 'User' for user: ";
        qout.flush();
        user = qin.readLine();

        if(user == "Admin") {
            for(int i = 0; i < 3; i++) {
                qint32 pass;
                qout << "Enter password: ";
                qout.flush();
                pass = qin.readLine().toInt();
                if(pass == 1234){

                    while(true){
                        QString operation;
                        qout << "Choose operation(add/search/remove): ";
                        qout.flush();
                        operation = qin.readLine();
                        if(operation == "add"){
                            Book newBook;
                            qout << "Enter book title: ";
                            qout.flush();
                            newBook.title = qin.readLine();
                            qout << "Enter book author: ";
                            qout.flush();
                            newBook.author = qin.readLine();
                            qout << "Enter book category: ";
                            qout.flush();
                            newBook.category = qin.readLine();
                            qout << "Enter book publication Year: ";
                            qout.flush();
                            newBook.publicationYear = qin.readLine().toInt();
                            qout << "Enter book publisher: ";
                            qout.flush();
                            newBook.publisher = qin.readLine();
                            qout << "Enter book barcode: ";
                            qout.flush();
                            newBook.barcode = qin.readLine();
                            library.addBook(newBook);
                        } else if(operation == "search") {
                            qout << "Enter book name: ";
                            qout.flush();
                            library.searchBooks(qin.readLine());
                        } else if(operation == "remove") {
                            qout << "Enter book barcode: ";
                            qout.flush();
                            library.removeBook(qin.readLine());
                        }
                        else qout << "Invalid operatoin" << Qt::endl;

                    }
                } else {
                    qout << "Wrong password.." << Qt::endl;
                }
                if(i == 2){
                    qout << "Try Again Later.." << Qt::endl;
                    exit(0);
                }
            }

        } else if(user == "User") {
            while(true){
                qout << "Enter book name to search a book: " << Qt::endl;
                qout.flush();
                library.searchBooks(qin.readLine());
            }
        }
        else
            qout << "Invalid user" <<Qt::endl;
    }
    return a.exec();

}
