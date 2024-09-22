#include <QCoreApplication>
#include <Timer.h>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Timer timer;

    return a.exec();
}
