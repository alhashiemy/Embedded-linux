#include "PrimeClass.h"

PrimeClass::PrimeClass(qint32 num1,qint32 num2,QVector<qint32> &vec,QObject *parent)
    : QObject{parent},result{vec}
{
    this->num1 = num1;
    this->num2 = num2;
}

void PrimeClass::run()
{
    bool NotPrime = false;
    for(qint32 i=num1 ; i<=num2 ; i++)
    {
        NotPrime = false;
        for(qint32 j=2 ; j<=i/2 ; j++)
        {
            if(i%j == 0)
            {
                NotPrime = true;
                break;
            }
        }
        if(!NotPrime)
        {
            result.push_back(i);
        }
    }
}
