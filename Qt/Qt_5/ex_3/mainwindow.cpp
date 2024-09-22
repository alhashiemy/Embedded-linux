#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    pool.setMaxThreadCount(2);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pbStart_clicked()
{
    WriteClass *write_task = new WriteClass();
    ReadClass  *read_task  = new ReadClass();

    connect(write_task,&WriteClass::sendConsole,this,&MainWindow::receiveConsole,Qt::QueuedConnection);
    connect(read_task,&ReadClass::sendConsole,this,&MainWindow::receiveConsole,Qt::QueuedConnection);
    connect(write_task,&WriteClass::sendData,read_task,&ReadClass::receiveData,Qt::QueuedConnection);
    connect(read_task,&ReadClass::sendLCD,this,&MainWindow::receiveLCD,Qt::QueuedConnection);

    pool.start(write_task);
    pool.start(read_task);
}

void MainWindow::receiveConsole(QString info)
{
    ui->lwConsole->addItem(info);
}

void MainWindow::receiveLCD(QString data)
{
    ui->lcdData->display(data);
}


void MainWindow::on_pbClear_clicked()
{
    ui->lcdData->display(0);
}

