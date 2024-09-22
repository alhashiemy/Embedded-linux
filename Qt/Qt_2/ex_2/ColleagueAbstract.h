#ifndef COLLEAGUEABSTRACT_H
#define COLLEAGUEABSTRACT_H

#include <QObject>
#include <MediatorAbstract.h>

class ColleagueAbstract : public QObject , public QEnableSharedFromThis<ColleagueAbstract>
{
    Q_OBJECT
public:
    ColleagueAbstract(QSharedPointer<MediatorAbstract> cp_med,QObject *parent = nullptr)
        :QObject{parent},med(cp_med){}
    virtual void receiveMessaage(QString message) = 0;
    virtual void sendMessaage   (QString message) = 0;
    virtual QString getName     ()                = 0;

protected:
    QSharedPointer<MediatorAbstract> med;
};
#endif // COLLEAGUEABSTRACT_H
