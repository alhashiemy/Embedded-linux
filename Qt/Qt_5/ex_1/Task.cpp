#include "Task.h"

Task::Task(qint32 cp_id,QObject *parent)
    : QObject{parent},id(cp_id)
{
    this->setAutoDelete(true);
}

void Task::run()
{
    qDebug() << "Task " << id << " is running on thread => " << QThread::currentThreadId() << Qt::endl;
    QThread::sleep(1);
    qDebug() << "Task " << id << " has finished....." << Qt::endl;
}

Task::~Task()
{
    qDebug() << "Task " << id << " has gone...." << Qt::endl;
}
