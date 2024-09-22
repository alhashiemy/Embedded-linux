#ifndef PERSON_H
#define PERSON_H

#include <QObject>
#include <QTextStream>

class Person : public QObject
{
    Q_OBJECT
public:
    Person(QString cp_name,qint32 cp_age,QObject *parent = nullptr);
    void Display();
    ~Person();

private:
    QString name;
    qint32 age;
    QTextStream qout;
    static qint32 ID;
    qint32 serial;
};

#endif // PERSON_H

/*
    MyString str2;
    str2 = MyString("Essam"); "Essam"
*/
