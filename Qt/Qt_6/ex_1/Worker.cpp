#include "Worker.h"

bool ThreadFlag = true;
QMutex mux;
QWaitCondition cond;


Worker::Worker(QObject *parent)
    : QObject{parent}
{
    connect(&watcher,&QFutureWatcher<void>::finished,this,[](){
        qDebug() << "the watcher says thread has finished....." << Qt::endl;
    });
    connect(&watcher,&QFutureWatcher<void>::progressValueChanged,this,&Worker::onProgressValueChanged);
}

void Worker::Operations()
{
    qDebug() << "Main thread id => " << QThread::currentThreadId() << Qt::endl;
    future = QtConcurrent::run([this](){doWork();});
    watcher.setFuture(future);
}

void Worker::doWork()
{
    qDebug() << "Side thread id => " << QThread::currentThreadId() << Qt::endl;
    for(qint32 i=0 ; i<=100 ; i+=10)
    {
        mux.lock();
        if(!ThreadFlag)
        {
            cond.wait(&mux);
        }
        mux.unlock();
        emit watcher.progressValueChanged(i);
        QThread::sleep(1);
    }
}

void Worker::Stop()
{
    mux.lock();
    ThreadFlag = false;
    mux.unlock();
}

void Worker::Resume()
{
    mux.lock();
    ThreadFlag = true;
    cond.wakeAll();
    mux.unlock();
}

void Worker::onProgressValueChanged(qint32 value)
{
    emit sendprogressBar_valueChanged(value);
}
