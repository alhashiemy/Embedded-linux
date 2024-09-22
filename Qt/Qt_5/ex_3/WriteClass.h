#ifndef WRITECLASS_H
#define WRITECLASS_H

#include <QObject>
#include <QRunnable>
#include <QMutex>
#include <QThread>

class WriteClass : public QObject , public QRunnable
{
    Q_OBJECT
public:
    explicit WriteClass(QObject *parent = nullptr);
    void run() override;
    ~WriteClass();

signals:
    void sendData(QString data);
    void sendConsole(QString info);

private:
    QString data;
};

#endif // WRITECLASS_H
