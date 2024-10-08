#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <WriteClass.h>
#include <ReadClass.h>
#include <QThreadPool>

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

    void on_pbClear_clicked();

public slots:
    void receiveConsole(QString info);
    void receiveLCD(QString data);

private:
    Ui::MainWindow *ui;
    QThreadPool pool;

};
#endif // MAINWINDOW_H
