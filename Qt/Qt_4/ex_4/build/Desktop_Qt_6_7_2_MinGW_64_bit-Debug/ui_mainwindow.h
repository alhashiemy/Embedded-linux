/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGroupBox *gbSystem;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pbGreen;
    QLabel *lGreen;
    QPushButton *pbCount;
    QHBoxLayout *horizontalLayout;
    QPushButton *pbRed;
    QLabel *lRed;
    QPushButton *pbStop;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(650, 370);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        gbSystem = new QGroupBox(centralwidget);
        gbSystem->setObjectName("gbSystem");
        gbSystem->setGeometry(QRect(50, 30, 561, 281));
        gbSystem->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 170, 255);\n"
"color: rgb(0, 0, 0);\n"
"font: 700 14pt \"Segoe UI\";"));
        gbSystem->setFlat(false);
        gridLayout = new QGridLayout(gbSystem);
        gridLayout->setObjectName("gridLayout");
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        pbGreen = new QPushButton(gbSystem);
        pbGreen->setObjectName("pbGreen");
        pbGreen->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 255, 127);"));

        horizontalLayout_2->addWidget(pbGreen);

        lGreen = new QLabel(gbSystem);
        lGreen->setObjectName("lGreen");
        lGreen->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        horizontalLayout_2->addWidget(lGreen);


        gridLayout->addLayout(horizontalLayout_2, 1, 0, 1, 1);

        pbCount = new QPushButton(gbSystem);
        pbCount->setObjectName("pbCount");
        pbCount->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(255, 178, 102, 255), stop:0.55 rgba(235, 148, 61, 255), stop:0.98 rgba(0, 0, 0, 255), stop:1 rgba(0, 0, 0, 0));\n"
"font: 700 20pt \"Segoe UI\";"));

        gridLayout->addWidget(pbCount, 2, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        pbRed = new QPushButton(gbSystem);
        pbRed->setObjectName("pbRed");
        pbRed->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 0, 0);"));

        horizontalLayout->addWidget(pbRed);

        lRed = new QLabel(gbSystem);
        lRed->setObjectName("lRed");
        lRed->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        horizontalLayout->addWidget(lRed);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);

        pbStop = new QPushButton(gbSystem);
        pbStop->setObjectName("pbStop");
        pbStop->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(255, 178, 102, 255), stop:0.55 rgba(235, 148, 61, 255), stop:0.98 rgba(0, 0, 0, 255), stop:1 rgba(0, 0, 0, 0));\n"
"font: 700 20pt \"Segoe UI\";\n"
"color: rgb(255, 0, 0);\n"
"font: 700 20pt \"Segoe UI\";"));

        gridLayout->addWidget(pbStop, 3, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 650, 25));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        gbSystem->setTitle(QCoreApplication::translate("MainWindow", "System", nullptr));
        pbGreen->setText(QCoreApplication::translate("MainWindow", "Green", nullptr));
        lGreen->setText(QString());
        pbCount->setText(QCoreApplication::translate("MainWindow", "Count", nullptr));
        pbRed->setText(QCoreApplication::translate("MainWindow", "Red", nullptr));
        lRed->setText(QString());
        pbStop->setText(QCoreApplication::translate("MainWindow", "Stop", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
