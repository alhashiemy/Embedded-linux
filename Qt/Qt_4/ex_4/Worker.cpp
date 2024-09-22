#include "Worker.h"

Worker::Worker(QObject *parent)
    : QThread{parent},flag(true)
{}

void Worker::doWork()
{
    qDebug() << "Side thread id => "<<QThread::currentThreadId()<<Qt::endl;
    static qint32 i = 0;
    while(flag)
    {
        qDebug() << i << Qt::endl;
        QThread::msleep(500);
        i++;
    }
}

void Worker::StopThread()
{
    qDebug() << "slot thread id => "<<QThread::currentThreadId()<<Qt::endl;
    flag = false;
}

void Worker::run()
{
    qDebug() << "Side thread id => "<<QThread::currentThreadId()<<Qt::endl;
    static qint32 i = 0;
    while(true)
    {
        qDebug() << i << Qt::endl;
        QThread::msleep(500);
        i++;
    }
}
