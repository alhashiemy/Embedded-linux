#ifndef WATERSENSOR_H
#define WATERSENSOR_H

#include <SensorAbstract.h>

class WaterSensor : public SensorAbstract
{
    Q_OBJECT
public:
    explicit WaterSensor(QObject *parent = nullptr);
    void Update(QString cp_data) override;
    void Operations();

private:
    QString data;

};

#endif // WATERSENSOR_H
