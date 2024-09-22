#ifndef TASK_H
#define TASK_H

#include <QObject>
#include <QRunnable>
#include <QDebug>
#include <QThread>

class Task : public QObject , public QRunnable
{
    Q_OBJECT
public:
    explicit Task(qint32 cp_id,QObject *parent = nullptr);
    void run() override;
    ~Task();

private:
    qint32 id;
};

#endif // TASK_H
