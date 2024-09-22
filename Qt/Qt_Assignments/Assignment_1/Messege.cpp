#include "Messege.h"

Messege::Messege(QObject *parent)
    : QObject{parent}
{}

void Messege::sendMessege(QString color)
{
    if(color == "Red")
    {
        qDebug() << "Stop" << Qt::endl;
    }
    else if(color == "Green")
    {
        qDebug() << "Go" << Qt::endl;
    }
    else if(color == "Yellow")
    {
        qDebug() << "Get Ready" << Qt::endl;
    }
    else
    {
        qDebug() << "Invaled color..." << Qt::endl;
    }
}
