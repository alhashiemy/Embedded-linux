#ifndef COLLEAGECONCREATE_H
#define COLLEAGECONCREATE_H

#include <QObject>
#include <ColleagueAbstract.h>
#include <QDebug>

class ColleageConcreate : public ColleagueAbstract
{
    Q_OBJECT
public:
    explicit ColleageConcreate(QString cp_name,QSharedPointer<MediatorAbstract> cp_med,QObject *parent = nullptr);
    void receiveMessaage(QString message) override;
    void sendMessaage(QString message) override;
    QString getName() override;

private:
    QString name;

};

#endif // COLLEAGECONCREATE_H
