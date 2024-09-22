#include "Client.h"

Client::Client(QObject *parent)
    : QObject{parent}
{
    socket = new QTcpSocket(this);

    connect(socket,&QTcpSocket::connected,this,&Client::onConnected);
    connect(socket,&QTcpSocket::disconnected,this,&Client::onDisconnected);
    connect(socket,&QTcpSocket::stateChanged,this,&Client::onStateChanged);
    connect(socket,&QTcpSocket::errorOccurred,this,&Client::onErrorOccurred);
    connect(socket,&QTcpSocket::readyRead,this,&Client::onReadyRead);
}

void Client::ConnectToHost(QString ip, qint32 port)
{
    if(socket->isOpen())
    {
        if((this->ip == ip)&&(this->port == port))
        {
            return;
        }
    }
    else
    {
        this->ip = ip;
        this->port = port;
        socket->open(QIODevice::ReadWrite);
        socket->connectToHost(ip,port);
    }
}

void Client::DisconnectFromHost()
{
    if(socket->isOpen())
        socket->close();
}

void Client::SendData(QString data)
{
    if(socket->isOpen())
    {
        QJsonObject jsonObject;
        jsonObject["type"] = "message";
        jsonObject["size"] = data.size();
        jsonObject["data"] = data;

        QByteArray byteArray = QJsonDocument(jsonObject).toJson();

        socket->write(byteArray);
        socket->flush();
    }
}



void Client::onConnected()
{
    emit sendConnected();
}

void Client::onDisconnected()
{
    if(socket->isOpen())
    socket->close();
    emit sendDisconnected();
}

void Client::onReadyRead()
{
    if(socket->isOpen())
    {
        QByteArray data = socket->readAll();
        emit sendReadyRead(QString(data));
    }
}

void Client::onErrorOccurred(QAbstractSocket::SocketError error)
{
    emit sendErrorOccurred(error);
}

void Client::onStateChanged(QAbstractSocket::SocketState state)
{
    emit sendStateChanged(state);
}
