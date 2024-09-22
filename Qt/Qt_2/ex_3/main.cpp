#include <QCoreApplication>
#include <Consumer.h>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Consumer consumer;

    return a.exec();
}
