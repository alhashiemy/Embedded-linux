#include "Message.h"

Message::Message(QString cp_message,QObject *parent)
    : QObject{parent},time_stamp(QDateTime::currentDateTime()),message(cp_message)
{}

void Message::Display()
{
    qDebug() << "MSG => " << message << "  Time => " << time_stamp.toString() << Qt::endl;
}

