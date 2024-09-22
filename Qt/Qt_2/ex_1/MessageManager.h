#ifndef MESSAGEMANAGER_H
#define MESSAGEMANAGER_H

#include <QObject>
#include <QSharedPointer>
#include <QVector>
#include <Message.h>

class MessageManager : public QObject
{
    Q_OBJECT
public:
    explicit MessageManager(QObject *parent = nullptr);
    void LogMessage(QString message);
    void DisplayMessages();
    void ClearLog();
    ~MessageManager();

private:
    QVector<QSharedPointer<Message>> MessageContainer;
};

#endif // MESSAGEMANAGER_H
