#include "MediatorConcrete.h"

MediatorConcrete::MediatorConcrete(QObject *parent)
    : MediatorAbstract{parent}
{}

void MediatorConcrete::AddColleague(QSharedPointer<ColleagueAbstract> colleague)
{
    Colleagues << colleague;
}

void MediatorConcrete::SendMessage(QSharedPointer<ColleagueAbstract> sender, QString message)
{
    for(auto& colleague : Colleagues)
    {
        if(colleague != sender)
        {
            qDebug() << "Sender => " << sender->getName() << Qt::endl;
            colleague->receiveMessaage(message);
        }
    }
}
