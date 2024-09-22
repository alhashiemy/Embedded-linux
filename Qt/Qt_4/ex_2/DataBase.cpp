#include "DataBase.h"

DataBase::DataBase(QObject *parent)
    : QObject{parent},path("D:/B/Ex_Files_Learning_Embedded/Embedded_Linux./2-Qt/Qt_4/ex_2/DataBase.txt")
{
    Refresh();
}

DataBase& DataBase::getInstance()
{
    static DataBase instance;
    return instance;
}

void DataBase::Refresh()
{
    _DataBase.clear();
    _DataBase.resize(0);
    _DataBase.shrink_to_fit();

    QFile file(path);
    QTextStream ss(&file);
    if(file.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        while(!ss.atEnd())
        {
            QString line = ss.readLine();
            _DataBase << line;
        }
        file.close();
    }
    else
    {
        qDebug() << "Can't open data base file....." << Qt::endl;
    }
}

void DataBase::Apply()
{
    QFile file(path);
    QTextStream ss(&file);
    if(file.open(QIODevice::WriteOnly | QIODevice::Text | QIODevice::Truncate))
    {
        for(auto& line : _DataBase)
        {
            ss << line << "\n";
        }
        file.close();
    }
    else
    {
        qDebug() << "Can't open data base file....." << Qt::endl;
    }
}

bool DataBase::isRepeated(QString element)
{
    for(auto& line : _DataBase)
    {
        if(line.contains(element))
        {
            return true;
        }
    }
    return false;
}
//"element = amount"
void DataBase::AddElement(QString element, qint32 amount)
{
    if(!isRepeated(element))
    {
        Refresh();
        QString newElement = QString("%1 = %2").arg(element).arg(amount);
        _DataBase << newElement;
    }
    Apply();
}

void DataBase::UpdateElement(QString element, qint32 amount)
{
    if(isRepeated(element))
    {
        Refresh();
        for(auto& line : _DataBase)
        {
            if(line.contains(element))
            {
                line = QString("%1 = %2").arg(element).arg(amount);
                break;
            }
        }
        Apply();
    }
}

void DataBase::DeleteElement(QString element)
{
    if(isRepeated(element))
    {
        Refresh();
        for(int i=0 ; i<_DataBase.size() ; i++)
        {
            if(_DataBase[i].contains(element))
            {
                _DataBase.erase(_DataBase.begin() + i);
                break;
            }
        }
        Apply();
    }
}

void DataBase::ShowDataBase()
{
    Refresh();
    for(int i=0 ; i<_DataBase.size() ; i++)
    {
        qDebug() << _DataBase[i] << Qt::endl;
    }
}
