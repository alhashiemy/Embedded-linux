#include "Test.h"

Test::Test(QObject *parent)
    : QObject{parent}
{
    timer.setInterval(1000);
    connect(&timer,&QTimer::timeout,this,&Test::Operations);

    process = new QProcess(this);
    timer.start();
}

void Test::Operations()
{
    process->start("cmd.exe",QStringList() << "/c" << "notepad.exe C://New folder (3)//ex_2//ahmed//ss.txt");
    process->waitForFinished();
    QString str1 = process->readAllStandardOutput();
    qDebug().noquote() << str1 << Qt::endl;
}
