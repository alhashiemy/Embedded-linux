#include "ColleageConcreate.h"

ColleageConcreate::ColleageConcreate(QString cp_name,QSharedPointer<MediatorAbstract> cp_med,QObject *parent)
    : ColleagueAbstract{cp_med,parent},name(cp_name)
{}

void ColleageConcreate::receiveMessaage(QString message)
{
    qDebug() << "Received Message => " << message << Qt::endl;
}

void ColleageConcreate::sendMessaage(QString message)
{
    med->SendMessage(sharedFromThis(),message);
}

QString ColleageConcreate::getName()
{
    return name;
}
