#include "Action.h"

Action::Action(QObject *parent)
    : QObject{parent},qout(stdout),qin(stdin)
{
    traffic = new TrafficLight();
    connect(traffic,&TrafficLight::sendState,this,&Action::receiveState);

    serial.setPortName("COM3");
    serial.setBaudRate(QSerialPort::Baud115200);
    serial.setDataBits(QSerialPort::Data8);
    serial.setParity(QSerialPort::NoParity);
    serial.setStopBits(QSerialPort::OneStop);
    serial.setFlowControl(QSerialPort::NoFlowControl);

    serial.open(QIODevice::ReadWrite);
}

Action::~Action()
{
    if(serial.isOpen())
    {
        serial.close();
    }
}

void Action::receiveState(QString state_string)
{
    if(state_string == "red")
    {
        qout << "Stop..." << Qt::endl;
        serial.write("Stop\n");
        serial.flush();
        serial.waitForBytesWritten(1000);

    }
    else if(state_string == "yellow")
    {
        qout << "Get Ready..." << Qt::endl;
        serial.write("Ready\n");
        serial.flush();
        serial.waitForBytesWritten(1000);
    }
    else if(state_string == "green")
    {
        qout << "Go..." << Qt::endl;
        serial.write("Go\n");
        serial.flush();
        serial.waitForBytesWritten(1000);
    }
}
