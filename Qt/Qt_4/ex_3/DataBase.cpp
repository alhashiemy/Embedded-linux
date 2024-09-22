#include "DataBase.h"

DataBase::DataBase(QObject *parent)
    : QObject{parent},path("C://New folder (2)//ex_3//DataBase.json")
{
    Refresh();
}

void DataBase::Refresh()
{
    _DataBase.clear();
    _DataBase.resize(0);
    _DataBase.shrink_to_fit();

    QFile file(path);
    if(file.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        QByteArray byteArray = file.readAll();
        QJsonDocument jsonDoc = QJsonDocument::fromJson(byteArray);
        QJsonArray jsonArray = jsonDoc.array();
        for(int i=0 ; i<jsonArray.size() ; i++)
        {
            _DataBase << jsonArray[i].toObject();
        }
        file.close();
    }
    else
    {
        qDebug() << "Can't open data base file...." << Qt::endl;
    }
}

void DataBase::Apply()
{
    QJsonArray jsonArray;
    for(auto& object : _DataBase)
    {
        jsonArray.append(object);
    }

    QFile file(path);
    if(file.open(QIODevice::WriteOnly | QIODevice::Text | QIODevice::Truncate))
    {
        file.write(QJsonDocument(jsonArray).toJson());
        file.flush();
        file.close();
    }
    else
    {
        qDebug() << "Can't open data base file...." << Qt::endl;
    }
}

bool DataBase::isRepeated(QString name)
{
    for(auto& object : _DataBase)
    {
        if(object["Name"].toString() == name)
        {
            return true;
        }
    }
    return false;
}

void DataBase::AddPerson(QString name, qint32 math, qint32 english)
{
    Refresh();
    if(!isRepeated(name))
    {
        QJsonObject newJsonObj;
        newJsonObj["Name"] = name;

        QJsonArray newJsonArray;

        QJsonObject MATH;
        MATH["Math"] = math;

        QJsonObject ENGLISH;
        ENGLISH["English"] = english;

        newJsonArray.append(MATH);
        newJsonArray.append(ENGLISH);

        newJsonObj["Subjects"] = newJsonArray;

        _DataBase << newJsonObj;

        Apply();
    }
}

void DataBase::Update(QString name, qint32 math, qint32 english)
{
    Refresh();
    if(isRepeated(name))
    {
        for(auto& object : _DataBase)
        {
            if(object["Name"] == name)
            {
                QJsonArray jsonArray = object["Subjects"].toArray();

                QJsonObject MATH = jsonArray[0].toObject();
                MATH["Math"] = math;
                jsonArray[0] = MATH;

                QJsonObject ENGLISH = jsonArray[1].toObject();
                ENGLISH["English"] = english;
                jsonArray[1] = ENGLISH;

                object["Subjects"] = jsonArray;
                break;
            }
        }
        Apply();
    }
}

void DataBase::Delete(QString name)
{
    Refresh();
    if(isRepeated(name))
    {
        for(int i=0 ; i<_DataBase.size() ; i++)
        {
            if(_DataBase[i]["Name"] == name)
            {
                _DataBase.erase(_DataBase.begin()+i);
                break;
            }
        }
        Apply();
    }
}

void DataBase::ShowDataBase()
{
    Refresh();
    for(auto& object : _DataBase)
    {
        // QString objectString = QJsonDocument(object).toJson();
        // qDebug().noquote() << objectString << Qt::endl;
        qDebug().noquote() << object["Name"].toString() << Qt::endl;
    }
}
