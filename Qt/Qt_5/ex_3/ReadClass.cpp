#include "ReadClass.h"

bool SlotFinish = false;
extern QMutex mux;
extern bool WriteFlag;


ReadClass::ReadClass(QObject *parent)
    : QObject{parent}
{
    this->setAutoDelete(true);
}

ReadClass::~ReadClass()
{
    emit sendConsole("Read task has gone.....");
}

void ReadClass::run()
{
    mux.lock();
    while(!WriteFlag)
    {
        mux.unlock();
        QThread::usleep(10);
        mux.lock();
    }
    WriteFlag = false;
    emit sendConsole(QString("Read thread id => %1").arg((quint64)QThread::currentThreadId()));
    emit sendConsole("Read thread has locked the mutex......");
    while(!SlotFinish);
    SlotFinish = false;
    emit sendConsole(QString("Received data => %1").arg(data));
    emit sendLCD(data);
    emit sendConsole("Read thread has unlocked the mutex......");
    mux.unlock();
}

void ReadClass::receiveData(QString data)
{
    this->data = data;
    SlotFinish = true;
}
