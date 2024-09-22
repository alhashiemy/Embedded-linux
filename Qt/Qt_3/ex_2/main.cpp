#include <QCoreApplication>
#include <QDir>
#include <QDebug>
#include <QFileInfo>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QDir dir("C://New folder (3)//ex_2");

    // dir.mkpath("Test/test1/test2/");
    // dir.rmpath("Test/test1/test2/");
    // dir.mkdir("test");

    // dir.rename("test","ahmedad");

    dir.cd("ahmed");
    // qDebug() << "current path => " << dir.currentPath() << Qt::endl;
    // qDebug() << "absoulte path => " << dir.absolutePath() << Qt::endl;
    // qDebug() << "home path => " << dir.homePath() << Qt::endl;
    // qDebug() << "root path => " << dir.rootPath() << Qt::endl;

    // QStringList files =  dir.entryList(QDir::Files);
    // for(auto& file : files)
    // {
    //     qDebug() << file << Qt::endl;
    // }

    QList files =  dir.entryInfoList(QDir::Files);
    for(auto& file : files)
    {
        qDebug() << "file name" << file.fileName() << Qt::endl;
        qDebug() << "file path" << file.absolutePath() << Qt::endl;
        qDebug() << "is file" << file.isFile() << Qt::endl;
        qDebug() << "is folder" << file.isDir() << Qt::endl;
        qDebug() << "suffix" << file.suffix() << Qt::endl;
        qDebug() << "file size" << file.size() << Qt::endl;
        qDebug() << "last modification" << file.lastModified() << Qt::endl;
        qDebug() << "last read" << file.lastRead() << Qt::endl;
        qDebug() << "is hidden" << file.isHidden() << Qt::endl;

        qDebug() << "----------------------------\n";
    }

    return a.exec();
}
