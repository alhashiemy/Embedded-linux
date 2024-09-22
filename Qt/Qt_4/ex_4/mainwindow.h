#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QSerialPort>
#include <QDebug>
#include <QThread>
#include <Worker.h>


QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pbRed_clicked();

    void on_pbGreen_clicked();

    void on_pbCount_clicked();

    void on_pbStop_clicked();

signals:
    void StopSignal();

private:
    Ui::MainWindow *ui;
    Worker  *worker;
    // QThread *thread;
    // QSerialPort serial;
};
#endif // MAINWINDOW_H
