#include <QCoreApplication>
#include <MessageManager.h>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QObject *parent = new QObject();

    MessageManager *manager = new MessageManager(parent);

    manager->LogMessage("Hello from message 1");
    manager->LogMessage("Hello from message 2");
    manager->LogMessage("Hello from message 3");
    manager->LogMessage("Hello from message 4");

    manager->DisplayMessages();


    delete parent;
    return a.exec();
}
