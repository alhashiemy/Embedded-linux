#include <QCoreApplication>
#include <QDebug>
#include <QVector>
#include <QtConcurrent>
#include <QFuture>
#include <QFutureWatcher>
#include <QThread>

QString thread()
{
    qDebug() << "Side thread id => " << QThread::currentThreadId() << Qt::endl;
    qDebug() << "Thread started ......" << Qt::endl;
    QThread::sleep(2);
    qDebug() << "Thread ended....." << Qt::endl;

    return "finished...";
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    qDebug() << "Main thread id => " << QThread::currentThreadId() << Qt::endl;

    QFuture<QString> future = QtConcurrent::run([](){return thread();});
    QFutureWatcher<QString> watcher;
    watcher.setFuture(future);
    QObject::connect(&watcher,&QFutureWatcher<QString>::finished,[](){
        qDebug() << "Watcher says thread ended..." << Qt::endl;
    });

    future.waitForFinished();

    QString result = future.result();

    qDebug() << "Result => " << result << Qt::endl;

    return a.exec();
}

int square(int value)
{
    value *= value;
    return value;
}
void sum(int &result,const int &value)
{
    result += value;
}

// int main(int argc, char *argv[])
// {
//     QCoreApplication a(argc, argv);

//     qDebug() << "Main thread id => " << QThread::currentThreadId() << Qt::endl;

//     QVector<int> vec = {1,2,3,4,5};

//     QFuture<int> future = QtConcurrent::mappedReduced(vec,square,sum);

//     future.waitForFinished();

//     int result = future.result();

//     qDebug() << "Result => " << result << Qt::endl;

//     return a.exec();
// }

// bool isEven(int value)
// {
//     return (value % 2 == 0);
// }

// int main(int argc, char *argv[])
// {
//     QCoreApplication a(argc, argv);

//     qDebug() << "Main thread id => " << QThread::currentThreadId() << Qt::endl;

//     QVector<int> vec = {1,2,3,4,5};

//     QVector<int> result = QtConcurrent::blockingFiltered(vec,isEven);


//     qDebug() << "Result => " << result << Qt::endl;

//     return a.exec();
// }
