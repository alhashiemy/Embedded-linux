#ifndef FACTORIAL_H
#define FACTORIAL_H

#include <QObject>
#include <QThread>

class Factorial : public QThread
{
    Q_OBJECT
public:
    explicit Factorial(QObject *parent = nullptr);
    void setNumber(int number);

signals:
    void ComputeFinished(int number,int result);

private:
    bool busy;
    int number;

    // QThread interface
protected:
    void run() override;
};

#endif // FACTORIAL_H
