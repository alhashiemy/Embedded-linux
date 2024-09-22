#include "Factorial.h"

Factorial::Factorial(QObject *parent)
    : QThread{parent},busy(false)
{}

void Factorial::setNumber(int number)
{
    this->number = number;
}

void Factorial::run()
{
    if(busy){return;}
    busy = true;

    int result = 1;
    for(int i=1 ; i<=number ; i++)
    {
        result *= i;
    }

    emit ComputeFinished(number,result);
    busy = false;
}
