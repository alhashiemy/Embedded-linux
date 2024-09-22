#ifndef SENSORABSTRACT_H
#define SENSORABSTRACT_H

#include <QObject>
#include <QDebug>

class SensorAbstract : public QObject
{
    Q_OBJECT
public:
    explicit SensorAbstract(QObject *parent = nullptr):QObject{parent}{}
    virtual void Update(QString cp_data) = 0;
};

#endif // SENSORABSTRACT_H
