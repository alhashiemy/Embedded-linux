#include <QCoreApplication>
#include <Messege.h>
#include <TrafficLight.h>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Messege* messege = new Messege;
    TrafficLight* trafficLight = new TrafficLight;
    QObject::connect(trafficLight,&TrafficLight::sendColor,messege,&Messege::sendMessege);
    trafficLight->getColor();

    return a.exec();
}
