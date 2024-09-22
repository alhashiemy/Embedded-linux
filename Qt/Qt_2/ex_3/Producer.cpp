#include "Producer.h"

Producer::Producer(QObject *parent)
    : QObject{parent},qout(stdout),qin(stdin)
{
    QTimer::singleShot(10,this,&Producer::Operation);

}

void Producer::Operation()
{
    qout << "----------- Welcome from Producer -----------" << Qt::endl;
    qout << "Enter Data => ";
    qout.flush();
    data = qin.readLine();
    emit sendData(data);
}
