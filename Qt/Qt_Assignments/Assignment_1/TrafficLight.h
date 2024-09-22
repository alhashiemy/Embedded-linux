#ifndef TRAFFICLIGHT_H
#define TRAFFICLIGHT_H

#include <QObject>
#include <Qtimer>
#include <QString>
#include <QTextStream>

class TrafficLight : public QObject
{
    Q_OBJECT
public:
    TrafficLight(QObject *parent = nullptr);
    void getColor();

private:
    QTextStream qout;
    QTextStream qin;

signals:
    void sendColor(QString data);
};

#endif // TRAFFICLIGHT_H
