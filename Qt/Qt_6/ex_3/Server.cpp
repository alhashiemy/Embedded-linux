#include "Server.h"

Server::Server(QObject *parent)
    : QTcpServer{parent}
{}

void Server::incomingConnection(qintptr handle)
{
    QTcpSocket *newSocket = new QTcpSocket();
    newSocket->open(QIODevice::ReadWrite);
    newSocket->setSocketDescriptor(handle);

    connect(newSocket,&QTcpSocket::disconnected,this,&Server::onDisconnect);
    connect(newSocket,&QTcpSocket::readyRead,this,&Server::onReadyRead);

    static qint32 counter = 0;
    counter++;
    QString name = QString("Client_%1").arg(counter);
    clients[name] = newSocket;

    sendMessage(name,QString("Welcome from server dear %1").arg(name));
}

void Server::StartServer(qint32 port)
{
    if(this->listen(QHostAddress::Any,port))
    {
        emit sendConsole(QString("Server is up and listenning to port => %1").arg(port));
    }
    else
    {
        emit sendConsole(QString("Server can't listen to port => %1").arg(port));
    }
}

void Server::sendMessage(QString name, QString message)
{
    if(clients[name]->isOpen())
    {
        clients[name]->write(message.toUtf8());
        clients[name]->flush();
    }
}

void Server::onReadyRead()
{
    QTcpSocket* socket = qobject_cast<QTcpSocket*>(sender());
    QByteArray byteArray = socket->readAll();
    QJsonDocument jsonDoc = QJsonDocument::fromJson(byteArray);
    QJsonObject jsonObject = jsonDoc.object();
    QString type = jsonObject["type"].toString();
    qint32 size = jsonObject["size"].toInt();
    QString data = jsonObject["data"].toString();

    if(size == data.size())
    emit sendReadyRead(data);
}

void Server::onDisconnect()
{
    QTcpSocket* socket = qobject_cast<QTcpSocket*>(sender());
    if(socket->isOpen())
        socket->close();
    emit sendDisconnect();
}
