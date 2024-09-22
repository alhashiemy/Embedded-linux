#include <QCoreApplication>
#include <Factorial.h>
#include <QTextStream>

QTextStream qout(stdout);
QTextStream qin(stdin);

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Factorial *fact = new Factorial();
    QObject::connect(fact,&Factorial::ComputeFinished,[](int number,int result){
        qout << "Factorial of " << number << " => " << result << Qt::endl;
    });

    while(true)
    {
        qout << "Enter number => ";
        qout.flush();
        int number = qin.readLine().toInt();
        fact->setNumber(number);
        fact->start();
        QThread::usleep(10);
    }
    return a.exec();
}
