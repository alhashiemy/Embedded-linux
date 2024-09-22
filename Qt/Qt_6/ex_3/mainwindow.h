#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <Server.h>

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
    void on_pbStart_clicked();

    void on_pbSend_clicked();

public slots:
    void receiveConsole(QString info);
    void receiveReadyRead(QString data);
    void receiveDisconnect();

private:
    Ui::MainWindow *ui;
    Server server;
};
#endif // MAINWINDOW_H
