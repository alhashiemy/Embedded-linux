#include <QCoreApplication>
#include <Person.h>
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);


    QObject *parent = new QObject();

    Person *person_1 = new Person("Ahmed",26,parent);
    Person *person_2 = new Person("Menna",20,parent);

    person_1->Display();
    person_2->Display();

    delete parent;
    return a.exec();
}
