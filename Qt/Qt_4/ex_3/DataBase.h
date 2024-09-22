#ifndef DATABASE_H
#define DATABASE_H

#include <QObject>
#include <QDebug>
#include <QFile>
#include <QJsonDocument>
#include <QJsonArray>
#include <QJsonObject>
#include <QVector>

class DataBase : public QObject
{
    Q_OBJECT
public:
    explicit DataBase(QObject *parent = nullptr);
    void AddPerson(QString name,qint32 math,qint32 english);
    void Update(QString name,qint32 math,qint32 english);
    void Delete(QString name);
    void ShowDataBase();

private:
    void Refresh();
    void Apply();
    bool isRepeated(QString name);
    QString path;
    QVector<QJsonObject> _DataBase;
};

#endif // DATABASE_H
