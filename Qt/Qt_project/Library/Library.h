#ifndef LIBRARY_H
#define LIBRARY_H

#include <QCoreApplication>
#include <QObject>
#include <QString>
#include <QVector>
#include <QJsonObject>
#include <QJsonArray>
#include <QJsonDocument>
#include <QFile>

struct Book
{
    QString title;
    QString author;
    QString category;
    QString barcode;
    qint32 publicationYear;
    QString publisher;
};

class Library : public QObject
{
    Q_OBJECT
public:
    Library(QString cp_jsonFilePath = QCoreApplication::applicationDirPath(), QObject *parent = nullptr);
    ~Library();

    void addBook(const Book& book);
    void searchBooks(const QString& bookTitle);
    void removeBook(const QString& barcode);

private:
    void refresh();
    void apply();
    bool isRepeated(QString bookTitle);

    QVector<QJsonObject> books;
    QString jsonFilePath;
};

#endif // LIBRARY_H
