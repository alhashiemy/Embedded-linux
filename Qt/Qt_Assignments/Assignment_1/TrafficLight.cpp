#include "TrafficLight.h"

TrafficLight::TrafficLight(QObject *parent)
    : QObject{parent}, qout(stdout), qin(stdin)
{}


void TrafficLight::getColor()
{
    QString color;
    qout << "Enter a color (Red, Green, Yellow): ";
    qout.flush();
    color = qin.readLine();
    emit sendColor(color);

}
