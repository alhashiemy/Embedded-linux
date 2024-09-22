#ifndef READCLASS_H
#define READCLASS_H

#include <QObject>
#include <QRunnable>
#include <QMutex>
#include <QThread>

class ReadClass : public QObject , public QRunnable
{
    Q_OBJECT
public:
    explicit ReadClass(QObject *parent = nullptr);
    ~ReadClass();
    void run() override;

signals:
    void sendConsole(QString info);
    void sendLCD(QString data);

public slots:
    void receiveData(QString data);

private:
    QString data;

};

#endif // READCLASS_H
