#ifndef CONSUMER_H
#define CONSUMER_H

#include <QObject>
#include <Producer.h>

class Consumer : public QObject
{
    Q_OBJECT
public:
    explicit Consumer(QObject *parent = nullptr);

public slots:
    void receiveData(QString data);

private:
    Producer *producer;
    QTextStream qout;
    QTextStream qin;
};

#endif // CONSUMER_H
