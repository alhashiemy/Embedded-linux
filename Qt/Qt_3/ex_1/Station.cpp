#include "Station.h"

Station::Station(QObject *parent)
    : StationAbstract{parent}
{
    serial.setPortName("COM4");
    serial.setBaudRate(QSerialPort::Baud115200);
    serial.setDataBits(QSerialPort::Data8);
    serial.setParity(QSerialPort::NoParity);
    serial.setStopBits(QSerialPort::OneStop);
    serial.setFlowControl(QSerialPort::NoFlowControl);

    serial.open(QIODevice::ReadOnly);

    connect(&serial,&QSerialPort::readyRead,this,&Station::getData);
}

void Station::Register(QSharedPointer<SensorAbstract> observer)
{
    observers << observer;
}

void Station::Notifiy()
{
    for(auto& observer : observers)
    {
        observer->Update(data);
    }
}

void Station::getData()
{
    data = QString(serial.readAll());
    Notifiy();
}

Station::~Station()
{
    if(serial.isOpen())
    {
        serial.close();
    }
}
