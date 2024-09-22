#ifndef TIMER_H
#define TIMER_H

#include <QObject>
#include <QDebug>
#include <QTimer>

class Timer : public QObject
{
    Q_OBJECT
public:
    explicit Timer(QObject *parent = nullptr);
    ~Timer();
    void Operations();
    void StopTimer();
private:
    QTimer *timer;
};

#endif // TIMER_H
