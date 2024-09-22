#include "WaterSensor.h"

WaterSensor::WaterSensor(QObject *parent)
    : SensorAbstract{parent}
{}

//Update("Ahmed")
void WaterSensor::Update(QString cp_data)
{
    data = cp_data;
    Operations();
}

void WaterSensor::Operations()
{
    static QString old_data = "null";
    if(old_data != data)
    {
        if(data == "Water")
        {
            qDebug() << "Water detected........." << Qt::endl;
        }
        else if(data == "NoWater")
        {
            qDebug() << "No water detected......" << Qt::endl;
        }
        old_data = data;
    }
}
