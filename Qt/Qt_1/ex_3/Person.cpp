#include "Person.h"

qint32 Person::ID = 0;
Person::Person(QString cp_name,qint32 cp_age,QObject *parent)
    : QObject{parent},name(cp_name),age(cp_age),qout(stdout)
{
    ID++;
    serial = ID;
}

void Person::Display()
{
    qout << "Name => " << name << "   Age => " << age << Qt::endl;
}

Person::~Person()
{
    qout << "Person "<<serial<<" has gone..." << Qt::endl;
}
