#include <QCoreApplication>
#include <Task.h>
#include <QThreadPool>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    qDebug() << "Main thread is running on thread => " << QThread::currentThreadId() << Qt::endl;

    QThreadPool pool;

    pool.setMaxThreadCount(16);

    for(qint32 i=1 ; i<=100 ; i++)
    {
        Task *task = new Task(i);
        pool.start(task);
    }

    pool.waitForDone();

    /*
     * Rest of the code
    */


    return a.exec();
}
