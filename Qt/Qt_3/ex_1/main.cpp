#include <QCoreApplication>
#include <WaterSensor.h>
#include <Station.h>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QSharedPointer<SensorAbstract>  water_sensor(new WaterSensor());
    QSharedPointer<StationAbstract> station(new Station());

    station->Register(water_sensor);

    return a.exec();
}
