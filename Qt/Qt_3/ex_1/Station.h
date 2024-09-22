#ifndef STATION_H
#define STATION_H

#include <StationAbstract.h>

class Station : public StationAbstract
{
    Q_OBJECT
public:
    explicit Station(QObject *parent = nullptr);
    void Register(QSharedPointer<SensorAbstract> observer) override;
    void Notifiy() override;
    void getData() override;
    ~Station();

private:
    QSerialPort serial;
    QString data;
};

#endif // STATION_H
