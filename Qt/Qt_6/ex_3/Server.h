#ifndef SERVER_H
#define SERVER_H

#include <QObject>
#include <QTcpSocket>
#include <QTcpServer>
#include <QMap>
#include <QJsonDocument>
#include <QJsonArray>
#include <QJsonObject>

class Server : public QTcpServer
{
    Q_OBJECT
public:
    explicit Server(QObject *parent = nullptr);
    void incomingConnection(qintptr handle) override;
    void StartServer(qint32 port);
    void sendMessage(QString name,QString message);

public slots:
    void onReadyRead();
    void onDisconnect();

signals:
    void sendConsole(QString info);
    void sendReadyRead(QString data);
    void sendDisconnect();

private:
    QMap<QString,QTcpSocket*> clients;
};

#endif // SERVER_H
