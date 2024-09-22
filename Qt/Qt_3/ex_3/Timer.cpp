#include "Timer.h"

Timer::Timer(QObject *parent)
    : QObject{parent}
{
    timer = new QTimer(this);
    timer->setInterval(200);
    connect(timer,&QTimer::timeout,this,&Timer::Operations);

    timer->start();
    QTimer::singleShot(2000,this,&Timer::StopTimer);
}

Timer::~Timer()
{
    delete timer;
}

void Timer::Operations()
{
    qDebug() << "Hello from Qt timer application..." << Qt::endl;
}

void Timer::StopTimer()
{
    timer->stop();
}
