#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
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
    void on_pushButton_clicked();

    void on_progressBar_valueChanged(int value);

    void on_pbStop_clicked();

    void on_pbResume_clicked();

private:
    Ui::MainWindow *ui;
    Worker worker;
};
#endif // MAINWINDOW_H
