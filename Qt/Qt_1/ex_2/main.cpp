#include <QCoreApplication>
#include <QTextStream>

// int main(int argc, char *argv[])
// {
//     QCoreApplication a(argc, argv);

//     QTextStream qout(stdout);
//     QTextStream qin(stdin);

//     QString str = "My name is Ahmed";
//     if(str.contains("Ahmed"))
//     {
//         str.replace("Ahmed","Mohamed");
//     }
//     qout << "New string => "<< str << Qt::endl;
//     return a.exec();
// }
// int main(int argc, char *argv[])
// {
//     QCoreApplication a(argc, argv);

//     QTextStream qout(stdout);
//     QTextStream qin(stdin);

//     QString str = "username:Mohanad,password:1596";

//     QString username = str.split(",")[0].split(":")[1];
//     qint32 password  = str.split(",")[1].split(":")[1].toInt();

//     qout << "UserName => "<< username << "  Password => "<< password <<Qt::endl;
//     return a.exec();
// }
QTextStream qout(stdout);
QTextStream qin(stdin);
void print(QString name,qint32 age)
{
    QString str = QString("My name is %1 and my age is %2 welcome me please").arg(name).arg(age);
    qout << str << Qt::endl;
}
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QString name = "Sara";
    qint32 age = 30;

    print(name,age);
    return a.exec();
}
