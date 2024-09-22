#ifndef ACTION_H
#define ACTION_H

#include <QObject>
#include <TrafficLight.h>
#include <QTextStream>
#include <QSerialPort>

class Action : public QObject
{
    Q_OBJECT
public:
    explicit Action(QObject *parent = nullptr);
    ~Action();
public slots:
    void receiveState(QString state_string);

private:
    TrafficLight *traffic;
    QTextStream qout;
    QTextStream qin;
    QSerialPort serial;
};

#endif // ACTION_H
