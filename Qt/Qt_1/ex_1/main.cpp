#include <QCoreApplication>
#include <QTextStream>

// int main(int argc, char *argv[])
// {
//     QCoreApplication a(argc, argv);

//     QTextStream qout(stdout);
//     QTextStream qin(stdin);

//     qout << "Welcome from Qt application" << Qt::endl;

//     qout << "Enter you name => ";
//     qout.flush();

//     QString name = qin.readLine();

//     qout << "Enter your age => ";
//     qout.flush();

//     bool OK;
//     qint32 age = qin.readLine().toInt(&OK);
//     if(OK)
//     {
//         qout << "Your name is "<<name<<" and your age is "<<age<<Qt::endl;
//     }
//     else
//     {
//         qout << "Invalid input for age....." << Qt::endl;
//     }

//     return a.exec();
// }
// int main(int argc, char *argv[])
// {
//     QCoreApplication a(argc, argv);

//     QTextStream qout(stdout);
//     QTextStream qin(stdin);

//     QString str;
//     QTextStream ss(&str);

//     qint32 num = 12;

//     ss << "Hello all hope you are doing well" << "\n";
//     ss << "This is my first Qt application" << "\n";
//     ss << "This is my string stream" << "\n";
//     ss << num << "\n";

//     qout << ss.readAll() << Qt::endl;
//     return a.exec();
// }
// int main(int argc, char *argv[])
// {
//     QCoreApplication a(argc, argv);

//     QTextStream qout(stdout);
//     QTextStream qin(stdin);

//     qint32 num = 12;
//     QString str = QString::number(num);

//     qout << str << Qt::endl;

//     return a.exec();
// }
// }
// int main(int argc, char *argv[])
// {
//     QCoreApplication a(argc, argv);

//     QTextStream qout(stdout);
//     QTextStream qin(stdin);

//     QString str = "12";
//     QTextStream ss(&str);

//     qint32 num;

//     ss >> num;

//     qout << num << Qt::endl;
//     return a.exec();
// }
// // }
// int main(int argc, char *argv[])
// {
//     QCoreApplication a(argc, argv);

//     QTextStream qout(stdout);
//     QTextStream qin(stdin);

//     QByteArray byteArray1 = "Ahmed";
//     QString str = QString(byteArray1);
//     QByteArray byteArray2 = str.toUtf8();


//     qout << byteArray2 << Qt::endl;
//     return a.exec();
// }


