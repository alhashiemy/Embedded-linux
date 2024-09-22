#ifndef CLIENT_H
#define CLIENT_H

#include <QObject>
#include <QTcpSocket>
#include <QDebug>
#include <QJsonDocument>
#include <QJsonArray>
#include <QJsonObject>

class Client : public QObject
{
    Q_OBJECT
public:
    explicit Client(QObject *parent = nullptr);
    void ConnectToHost(QString ip,qint32 port);
    void DisconnectFromHost();
    void SendData(QString data);

public slots:
    void onConnected();
    void onDisconnected();
    void onReadyRead();
    void onErrorOccurred(QAbstractSocket::SocketError error);
    void onStateChanged(QAbstractSocket::SocketState state);

signals:
    void sendConnected();
    void sendDisconnected();
    void sendReadyRead(QString data);
    void sendErrorOccurred(QAbstractSocket::SocketError error);
    void sendStateChanged(QAbstractSocket::SocketState state);

private:
    QTcpSocket *socket;
    QString ip;
    qint32 port;
};

#endif // CLIENT_H
