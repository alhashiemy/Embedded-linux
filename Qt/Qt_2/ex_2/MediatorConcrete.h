#ifndef MEDIATORCONCRETE_H
#define MEDIATORCONCRETE_H

#include <QObject>
#include <MediatorAbstract.h>
#include <QVector>
#include <QDebug>
#include <ColleagueAbstract.h>

class MediatorConcrete : public MediatorAbstract
{
    Q_OBJECT
public:
    explicit MediatorConcrete(QObject *parent = nullptr);
    void AddColleague(QSharedPointer<ColleagueAbstract> colleague) override;
    void SendMessage(QSharedPointer<ColleagueAbstract> sender, QString message) override;

private:
    QVector<QSharedPointer<ColleagueAbstract>> Colleagues;
};

#endif // MEDIATORCONCRETE_H
