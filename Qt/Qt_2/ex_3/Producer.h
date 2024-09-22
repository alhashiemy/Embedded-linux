#ifndef PRODUCER_H
#define PRODUCER_H

#include <QObject>
#include <QTextStream>
#include <QTimer>

class Producer : public QObject
{
    Q_OBJECT
public:
    explicit Producer(QObject *parent = nullptr);
    void Operation();

signals:
    void sendData(QString data);

private:
    QString data;
    QTextStream qout;
    QTextStream qin;
};

#endif // PRODUCER_H
