#include <QCoreApplication>
#include <MediatorConcrete.h>
#include <ColleageConcreate.h>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    QSharedPointer<MediatorAbstract>  med  (new MediatorConcrete());

    QSharedPointer<ColleagueAbstract> col_1(new ColleageConcreate("Ahmed",med));
    QSharedPointer<ColleagueAbstract> col_2(new ColleageConcreate("Essam",med));

    med->AddColleague(col_1);
    med->AddColleague(col_2);

    col_1->sendMessaage("Hello Essam");
    qDebug() << "---------------------------" << Qt::endl;
    col_2->sendMessaage("Hello Ahmed");

    return a.exec();
}
