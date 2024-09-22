#ifndef PRIMECLASS_H
#define PRIMECLASS_H

#include <QObject>
#include <QRunnable>
#include <QVector>

class PrimeClass : public QObject , public QRunnable
{
    Q_OBJECT
public:
    explicit PrimeClass(qint32 num1,qint32 num2,QVector<qint32> &vec,QObject *parent = nullptr);
    void run() override;

private:
    qint32 num1;
    qint32 num2;
    QVector<qint32> &result;
};

#endif // PRIMECLASS_H
