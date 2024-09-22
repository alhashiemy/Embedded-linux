#ifndef WORKER_H
#define WORKER_H

#include <QObject>
#include <QDebug>
#include <QtConcurrent>
#include <QFuture>
#include <QFutureWatcher>
#include <QThread>
#include <QMutex>
#include <QWaitCondition>

class Worker : public QObject
{
    Q_OBJECT
public:
    explicit Worker(QObject *parent = nullptr);
    void Operations();
    void doWork();
    void Stop();
    void Resume();

signals:
    void sendprogressBar_valueChanged(qint32 value);

public slots:
    void onProgressValueChanged(qint32 value);

private:
    QFuture<void> future;
    QFutureWatcher<void> watcher;
};

#endif // WORKER_H
