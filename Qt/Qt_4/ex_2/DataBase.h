#ifndef DATABASE_H
#define DATABASE_H

#include <QCoreApplication>
#include <QObject>
#include <QDebug>
#include <QVector>
#include <QTextStream>
#include <QFile>

//Tomato 50;
class DataBase : public QObject
{
    Q_OBJECT
public:
    DataBase(DataBase& obj) = delete;
    DataBase& operator=(DataBase& obj) = delete;
    static DataBase& getInstance();
    void AddElement(QString element,qint32 amount);
    void UpdateElement(QString element,qint32 amount);
    void DeleteElement(QString element);
    void ShowDataBase();

private:
    explicit DataBase(QObject *parent = nullptr);
    void Refresh();
    void Apply();
    bool isRepeated(QString element);
    QString path;
    QVector<QString> _DataBase;
};

#endif // DATABASE_H
