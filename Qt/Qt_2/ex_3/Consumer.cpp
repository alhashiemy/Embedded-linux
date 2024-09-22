#include "Consumer.h"

Consumer::Consumer(QObject *parent)
    : QObject{parent},qout(stdout),qin(stdin)
{
    producer = new Producer();
    connect(producer,&Producer::sendData,this,&Consumer::receiveData);
}

void Consumer::receiveData(QString data)
{
    qout << "----------- Welcome from Consumer -----------" << Qt::endl;
    qout << "Data Received => " << data << Qt::endl;
}
