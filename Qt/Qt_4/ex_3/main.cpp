#include <QCoreApplication>
#include <DataBase.h>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    DataBase data_base;

    data_base.AddPerson("Hamdy",50,60);

    data_base.ShowDataBase();
    return a.exec();
}
