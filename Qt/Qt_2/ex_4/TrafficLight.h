#ifndef TRAFFICLIGHT_H
#define TRAFFICLIGHT_H

#include <QObject>
#include <QPair>
#include <QMap>
#include <QVector>
#include <QTextStream>
#include <QTimer>
#include <QCoreApplication>

enum States
{
    Red,
    Yellow,
    Green
};
enum Triggers
{
    PressRed,
    PressYellow,
    PressGreen
};

class TrafficLight : public QObject
{
    Q_OBJECT
public:
    explicit TrafficLight(QObject *parent = nullptr);
    void CurrentState(States state);
    void Operations();

signals:
    void sendState(QString state_string);

private:
    QTextStream qout;
    QTextStream qin;
    QMap<States,QVector<QPair<Triggers,States>>> system;
    States current_state;
    qint32 choice;
    bool flag;
};

#endif // TRAFFICLIGHT_H
