#include <QCoreApplication>
#include <DataBase.h>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    DataBase &ref = DataBase::getInstance();
    ref.AddElement("potato",15);

    return a.exec();
}
