#ifndef WORKER_H
#define WORKER_H

#include <QObject>
#include <QDebug>
#include <QThread>

class Worker : public QThread
{
    Q_OBJECT
public:
    explicit Worker(QObject *parent = nullptr);
    void doWork();

public slots:
    void StopThread();

private:
    bool flag;

    // QThread interface
protected:
    void run() override;
};

#endif // WORKER_H
