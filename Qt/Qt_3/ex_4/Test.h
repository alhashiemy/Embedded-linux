#ifndef TEST_H
#define TEST_H

#include <QObject>
#include <QDebug>
#include <QTimer>
#include <QProcess>

class Test : public QObject
{
    Q_OBJECT
public:
    explicit Test(QObject *parent = nullptr);
    void Operations();

private:
    QTimer timer;
    QProcess *process;
};

#endif // TEST_H
