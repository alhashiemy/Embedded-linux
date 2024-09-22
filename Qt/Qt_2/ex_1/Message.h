#ifndef MESSAGE_H
#define MESSAGE_H

#include <QObject>
#include <QDebug>
#include <QDateTime>

class Message : public QObject
{
    Q_OBJECT
public:
    explicit Message(QString cp_message,QObject *parent = nullptr);
    void Display();

private:
    QDateTime time_stamp;
    QString message;
};

#endif // MESSAGE_H
