#include <QCoreApplication>
#include <QThreadPool>
#include <QTextStream>
#include <PrimeClass.h>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QTextStream qout(stdout);
    QTextStream qin(stdin);

    QThreadPool pool;

    qout << "Enter first number => ";
    qout.flush();
    qint32 num1 = qin.readLine().toInt();

    qout << "Enter second number => ";
    qout.flush();
    qint32 num2 = qin.readLine().toInt();

    qout << "Enter number of threads => ";
    qout.flush();
    qint32 ThreadNo = qin.readLine().toInt();

    pool.setMaxThreadCount(ThreadNo);

    qint32 step = ((num2-num1)+1)/ThreadNo;

    QVector<qint32> vec[ThreadNo];

    qint32 start,end;

    for(qint32 i=0 ; i<ThreadNo ;i++)
    {
        start = num1 + (step * i);
        end = (i == (ThreadNo - 1)) ? num2:(start + step - 1);

        PrimeClass *task = new PrimeClass(start,end,vec[i]);
        pool.start(task);
    }

    pool.waitForDone();

    for(qint32 i=0 ; i<ThreadNo ; i++)
    {
        for(qint32 j=0 ; j<vec[i].size() ; j++)
        {
            qout << vec[i][j] << " ";
            qout.flush();
        }
        qout << Qt::endl;
    }

    return a.exec();
}
