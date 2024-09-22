#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(&server,&Server::sendDisconnect,this,&MainWindow::receiveDisconnect);
    connect(&server,&Server::sendReadyRead,this,&MainWindow::receiveReadyRead);
    connect(&server,&Server::sendConsole,this,&MainWindow::receiveConsole);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pbStart_clicked()
{
    qint32 port = ui->lePort->text().toInt();
    server.StartServer(port);
}

//Client_1:Hello client
void MainWindow::on_pbSend_clicked()
{
    QString data = ui->leData->text();
    if(data.contains(":"))
    {
        QString name = data.split(":")[0];
        QString message = data.split(":")[1];

        server.sendMessage(name,message);
    }
}

void MainWindow::receiveConsole(QString info)
{
    ui->lwConsole->addItem(info);
}

void MainWindow::receiveDisconnect()
{
    ui->lwConsole->addItem("Server disconnected from client....");
}

void MainWindow::receiveReadyRead(QString data)
{
    ui->lwReceived->addItem(data);
}

