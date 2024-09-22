#ifndef MEDIATORABSTRACT_H
#define MEDIATORABSTRACT_H

#include <QObject>
#include <QSharedPointer>

class ColleagueAbstract;
class MediatorAbstract : public QObject
{
    Q_OBJECT
public:
    MediatorAbstract(QObject *parent = nullptr):QObject{parent}{}
    virtual void AddColleague(QSharedPointer<ColleagueAbstract> colleague) = 0;
    virtual void SendMessage(QSharedPointer<ColleagueAbstract> sender,QString message) = 0;
};
#endif // MEDIATORABSTRACT_H
