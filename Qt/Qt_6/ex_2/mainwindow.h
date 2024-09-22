#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <Client.h>
#include <QMetaEnum>

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
    void on_pbConnect_clicked();

    void on_pbDisconnect_clicked();

    void on_pbSendData_clicked();

public slots:
    void receiveConnected();
    void receiveDisconnected();
    void receiveReadyRead(QString data);
    void receiveErrorOccurred(QAbstractSocket::SocketError error);
    void receiveStateChanged(QAbstractSocket::SocketState state);

private:
    Ui::MainWindow *ui;
    Client client;
};
#endif // MAINWINDOW_H
