#include <QCoreApplication>
#include <Action.h>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Action action;

    return a.exec();
}
