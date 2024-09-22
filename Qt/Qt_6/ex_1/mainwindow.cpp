#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(&worker,&Worker::sendprogressBar_valueChanged,this,&MainWindow::on_progressBar_valueChanged);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    worker.Operations();
}


void MainWindow::on_progressBar_valueChanged(int value)
{
    ui->progressBar->setValue(value);
}


void MainWindow::on_pbStop_clicked()
{
    worker.Stop();
}


void MainWindow::on_pbResume_clicked()
{
    worker.Resume();
}

