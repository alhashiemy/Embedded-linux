#ifndef STATIONABSTRACT_H
#define STATIONABSTRACT_H

#include <QObject>
#include <QSharedPointer>
#include <SensorAbstract.h>
#include <QVector>
#include <QSerialPort>

class StationAbstract : public QObject
{
    Q_OBJECT
public:
    StationAbstract(QObject *parent=nullptr):QObject{parent}{}
    virtual void Register(QSharedPointer<SensorAbstract> observer) = 0;
    virtual void Notifiy() = 0;
    virtual void getData() = 0;

protected:
    QVector<QSharedPointer<SensorAbstract>> observers;
};

#endif // STATIONABSTRACT_H
