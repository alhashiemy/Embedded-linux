#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(&client,&Client::sendConnected,this,&MainWindow::receiveConnected);
    connect(&client,&Client::sendDisconnected,this,&MainWindow::receiveDisconnected);
    connect(&client,&Client::sendErrorOccurred,this,&MainWindow::receiveErrorOccurred);
    connect(&client,&Client::sendStateChanged,this,&MainWindow::receiveStateChanged);
    connect(&client,&Client::sendReadyRead,this,&MainWindow::receiveReadyRead);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pbConnect_clicked()
{
    QString ip = ui->leIP->text();
    qint32 port = ui->lePort->text().toInt();

    client.ConnectToHost(ip,port);
}

void MainWindow::on_pbDisconnect_clicked()
{
    client.DisconnectFromHost();
}


void MainWindow::on_pbSendData_clicked()
{
    QString data = ui->leData->text();
    client.SendData(data);
}

void MainWindow::receiveConnected()
{
    ui->lwConsole->addItem("Connected to server.....");
}

void MainWindow::receiveDisconnected()
{
    ui->lwConsole->addItem("Disconnect from server.....");
}

void MainWindow::receiveReadyRead(QString data)
{
    ui->lwReceived->addItem(data);
}

void MainWindow::receiveErrorOccurred(QAbstractSocket::SocketError error)
{
    QMetaEnum errorObject = QMetaEnum::fromType<QAbstractSocket::SocketError>();
    QString errorString = errorObject.valueToKey(error);
    ui->lwConsole->addItem(errorString);
}

void MainWindow::receiveStateChanged(QAbstractSocket::SocketState state)
{
    QMetaEnum stateObject = QMetaEnum::fromType<QAbstractSocket::SocketState>();
    QString stateString = stateObject.valueToKey(state);
    ui->lwConsole->addItem(stateString);
}

