#include "TrafficLight.h"

TrafficLight::TrafficLight(QObject *parent)
    : QObject{parent},qout(stdout),qin(stdin),flag(false)
{
    current_state = States::Red;

    system[States::Red] = {
        {Triggers::PressYellow,States::Yellow},
    };
    system[States::Yellow] = {
        {Triggers::PressGreen,States::Green},
    };
    system[States::Green] = {
        {Triggers::PressRed,States::Red},
    };

    QTimer::singleShot(10,this,&TrafficLight::Operations);
}

void TrafficLight::CurrentState(States state)
{
    static States OldState = static_cast<States>(0xff);

    if(state != OldState)
    {
        switch(state)
        {
            case States::Red:
            {
                emit sendState("red");
                break;
            }
            case States::Yellow:
            {
                emit sendState("yellow");
                break;
            }
            case States::Green:
            {
                emit sendState("green");
                break;
            }
            default:
            {
                qout << "Invalid State....." << Qt::endl;
                break;
            }
        }
        OldState = state;
    }

}

void TrafficLight::Operations()
{
    flag = false;
    CurrentState(current_state);
    qout << "Enter '0' to turn on Red Light\n"
            "Enter '1' to turn on Yellow Light\n"
            "Enter '2' to turn on Green Light\n"
            "Enter '3' to close application Light\n"
            "==> ";
    qout.flush();
    choice = qin.readLine().toInt();

    if(choice == 3)
    {
        QCoreApplication::quit();
    }
    Triggers current_trigger = static_cast<Triggers>(choice);
    auto vec = system[current_state];
    for(auto& pair : vec)
    {
        if(pair.first == current_trigger)
        {
            flag = true;
            current_state = pair.second;
            break;
        }
    }
    if(!flag)
    {
        qout << "Invalid trigger please try again....." << Qt::endl;
    }
    QTimer::singleShot(10,this,&TrafficLight::Operations);
}
