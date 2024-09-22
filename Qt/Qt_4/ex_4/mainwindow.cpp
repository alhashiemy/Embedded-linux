#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    qDebug() << "Main thread id => "<<QThread::currentThreadId()<<Qt::endl;
    ui->setupUi(this);
    ui->lRed->setStyleSheet("background-color : black");
    ui->lGreen->setStyleSheet("background-color : black");

    worker = new Worker();
    // thread = new QThread(this);

    // worker->moveToThread(thread);
    // connect(thread,&QThread::started,worker,&Worker::doWork);
    // connect(this,&MainWindow::StopSignal,worker,&Worker::StopThread,Qt::DirectConnection);

    // serial.setPortName("COM4");
    // serial.setBaudRate(QSerialPort::Baud115200);
    // serial.setDataBits(QSerialPort::Data8);
    // serial.setParity(QSerialPort::NoParity);
    // serial.setStopBits(QSerialPort::OneStop);
    // serial.setFlowControl(QSerialPort::NoFlowControl);

    // serial.open(QIODevice::WriteOnly);
}

MainWindow::~MainWindow()
{
    delete ui;
    delete worker;
}

void MainWindow::on_pbRed_clicked()
{
    static bool flag = false;
    if(flag == false)
    {
        ui->lRed->setStyleSheet("background-color : red");
        // serial.write("ro\n");
        // serial.flush();
        // serial.waitForBytesWritten();
        flag = true;
    }
    else if(flag == true)
    {
        ui->lRed->setStyleSheet("background-color : white");
        // serial.write("rf\n");
        // serial.flush();
        // serial.waitForBytesWritten();
        flag = false;
    }
}


void MainWindow::on_pbGreen_clicked()
{
    static bool flag = false;
    if(flag == false)
    {
        ui->lGreen->setStyleSheet("background-color : green");
        // serial.write("go\n");
        // serial.flush();
        // serial.waitForBytesWritten();
        flag = true;
    }
    else if(flag == true)
    {
        ui->lGreen->setStyleSheet("background-color : white");
        // serial.write("gf\n");
        // serial.flush();
        // serial.waitForBytesWritten();
        flag = false;
    }
}


void MainWindow::on_pbCount_clicked()
{
    static bool flag = false;
    if(flag == false)
    {
        worker->start();
        flag = true;
    }
    else if(flag == true)
    {
        worker->terminate();
        flag = false;
    }
}


void MainWindow::on_pbStop_clicked()
{
    emit StopSignal();
}

