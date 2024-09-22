#include "WriteClass.h"

QMutex mux;
bool WriteFlag = false;

WriteClass::WriteClass(QObject *parent)
    : QObject{parent}
{
    this->setAutoDelete(true);
}

void WriteClass::run()
{
    mux.lock();
    emit sendConsole(QString("Write thread id => %1").arg((quint64)QThread::currentThreadId()));
    emit sendConsole("Write thread has locked the mutex......");
    data = "12";
    emit sendData(data);
    emit sendConsole("Write thread has written data......");
    WriteFlag = true;
    emit sendConsole("Write thread has unlocked the mutex......");
    mux.unlock();
}

WriteClass::~WriteClass()
{
    emit sendConsole("Write thread has gone.....");
}
