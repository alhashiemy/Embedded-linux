#include "MessageManager.h"

MessageManager::MessageManager(QObject *parent)
    : QObject{parent}
{}

void MessageManager::LogMessage(QString message)
{
    QSharedPointer<Message> msg_ptr(new Message(message));
    MessageContainer << msg_ptr;
}

void MessageManager::DisplayMessages()
{
    for(auto& message : MessageContainer)
    {
        message->Display();
    }
}

void MessageManager::ClearLog()
{
    MessageContainer.clear();
}

MessageManager::~MessageManager()
{
    qDebug() << "Manager has gone..." << Qt::endl;
}
