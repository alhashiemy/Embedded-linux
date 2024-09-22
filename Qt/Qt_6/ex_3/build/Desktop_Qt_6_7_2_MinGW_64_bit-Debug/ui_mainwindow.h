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
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGroupBox *gbSystem;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *lPort;
    QLineEdit *lePort;
    QPushButton *pbStart;
    QLabel *lPort_2;
    QLineEdit *leData;
    QPushButton *pbSend;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_2;
    QListWidget *lwConsole;
    QPushButton *pbClearConsole;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_3;
    QListWidget *lwReceived;
    QPushButton *pbClearReceived;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(951, 808);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        gbSystem = new QGroupBox(centralwidget);
        gbSystem->setObjectName("gbSystem");
        gbSystem->setGeometry(QRect(20, 10, 384, 421));
        gbSystem->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 0, 255);"));
        gridLayout = new QGridLayout(gbSystem);
        gridLayout->setObjectName("gridLayout");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        lPort = new QLabel(gbSystem);
        lPort->setObjectName("lPort");
        lPort->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 127);\n"
"color: rgb(0, 0, 0);\n"
"font: 700 14pt \"Segoe UI\";"));

        horizontalLayout->addWidget(lPort);

        lePort = new QLineEdit(gbSystem);
        lePort->setObjectName("lePort");
        lePort->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(255, 0, 0);\n"
"font: 700 14pt \"Segoe Script\";"));

        horizontalLayout->addWidget(lePort);


        verticalLayout->addLayout(horizontalLayout);

        pbStart = new QPushButton(gbSystem);
        pbStart->setObjectName("pbStart");
        pbStart->setStyleSheet(QString::fromUtf8("font: 700 20pt \"Segoe UI\";\n"
"color: rgb(255, 0, 0);\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(255, 178, 102, 255), stop:0.55 rgba(235, 148, 61, 255), stop:0.98 rgba(0, 0, 0, 255), stop:1 rgba(0, 0, 0, 0));"));

        verticalLayout->addWidget(pbStart);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);

        lPort_2 = new QLabel(gbSystem);
        lPort_2->setObjectName("lPort_2");
        lPort_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 127);\n"
"color: rgb(0, 0, 0);\n"
"font: 700 14pt \"Segoe UI\";"));

        gridLayout->addWidget(lPort_2, 1, 0, 1, 1);

        leData = new QLineEdit(gbSystem);
        leData->setObjectName("leData");
        leData->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(255, 0, 0);\n"
"font: 700 14pt \"Segoe Script\";"));

        gridLayout->addWidget(leData, 2, 0, 1, 1);

        pbSend = new QPushButton(gbSystem);
        pbSend->setObjectName("pbSend");
        pbSend->setStyleSheet(QString::fromUtf8("font: 700 20pt \"Segoe UI\";\n"
"color: rgb(255, 0, 0);\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(255, 178, 102, 255), stop:0.55 rgba(235, 148, 61, 255), stop:0.98 rgba(0, 0, 0, 255), stop:1 rgba(0, 0, 0, 0));"));

        gridLayout->addWidget(pbSend, 3, 0, 1, 1);

        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(410, 10, 501, 431));
        gridLayout_2 = new QGridLayout(groupBox);
        gridLayout_2->setObjectName("gridLayout_2");
        lwConsole = new QListWidget(groupBox);
        lwConsole->setObjectName("lwConsole");
        lwConsole->setStyleSheet(QString::fromUtf8("font: 700 14pt \"Segoe UI\";\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(255, 178, 102, 255), stop:0.55 rgba(235, 148, 61, 255), stop:0.98 rgba(0, 0, 0, 255), stop:1 rgba(0, 0, 0, 0));\n"
"color: rgb(255, 0, 127);"));
        lwConsole->setVerticalScrollMode(QAbstractItemView::ScrollMode::ScrollPerPixel);
        lwConsole->setHorizontalScrollMode(QAbstractItemView::ScrollMode::ScrollPerPixel);
        lwConsole->setWordWrap(true);

        gridLayout_2->addWidget(lwConsole, 0, 0, 1, 1);

        pbClearConsole = new QPushButton(groupBox);
        pbClearConsole->setObjectName("pbClearConsole");
        pbClearConsole->setStyleSheet(QString::fromUtf8("font: 700 20pt \"Segoe UI\";\n"
"color: rgb(255, 0, 0);\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(255, 178, 102, 255), stop:0.55 rgba(235, 148, 61, 255), stop:0.98 rgba(0, 0, 0, 255), stop:1 rgba(0, 0, 0, 0));"));

        gridLayout_2->addWidget(pbClearConsole, 1, 0, 1, 1);

        groupBox_2 = new QGroupBox(centralwidget);
        groupBox_2->setObjectName("groupBox_2");
        groupBox_2->setGeometry(QRect(20, 450, 891, 301));
        gridLayout_3 = new QGridLayout(groupBox_2);
        gridLayout_3->setObjectName("gridLayout_3");
        lwReceived = new QListWidget(groupBox_2);
        lwReceived->setObjectName("lwReceived");
        lwReceived->setStyleSheet(QString::fromUtf8("font: 700 14pt \"Segoe UI\";\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(255, 178, 102, 255), stop:0.55 rgba(235, 148, 61, 255), stop:0.98 rgba(0, 0, 0, 255), stop:1 rgba(0, 0, 0, 0));\n"
"color: rgb(255, 0, 127);"));
        lwReceived->setVerticalScrollMode(QAbstractItemView::ScrollMode::ScrollPerPixel);
        lwReceived->setHorizontalScrollMode(QAbstractItemView::ScrollMode::ScrollPerPixel);
        lwReceived->setWordWrap(true);

        gridLayout_3->addWidget(lwReceived, 0, 0, 1, 1);

        pbClearReceived = new QPushButton(groupBox_2);
        pbClearReceived->setObjectName("pbClearReceived");
        pbClearReceived->setStyleSheet(QString::fromUtf8("font: 700 20pt \"Segoe UI\";\n"
"color: rgb(255, 0, 0);\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(255, 178, 102, 255), stop:0.55 rgba(235, 148, 61, 255), stop:0.98 rgba(0, 0, 0, 255), stop:1 rgba(0, 0, 0, 0));"));

        gridLayout_3->addWidget(pbClearReceived, 1, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 951, 25));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);
        QObject::connect(pbClearConsole, &QPushButton::clicked, lwConsole, qOverload<>(&QListWidget::clear));
        QObject::connect(pbClearReceived, &QPushButton::clicked, lwReceived, qOverload<>(&QListWidget::clear));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        gbSystem->setTitle(QCoreApplication::translate("MainWindow", "System", nullptr));
        lPort->setText(QCoreApplication::translate("MainWindow", "Port :-", nullptr));
        pbStart->setText(QCoreApplication::translate("MainWindow", "Listen", nullptr));
        lPort_2->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:20pt; font-style:italic;\">Enter Message</span></p></body></html>", nullptr));
        pbSend->setText(QCoreApplication::translate("MainWindow", "Send", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "Console Data", nullptr));
        pbClearConsole->setText(QCoreApplication::translate("MainWindow", "Clear", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("MainWindow", "Received Data", nullptr));
        pbClearReceived->setText(QCoreApplication::translate("MainWindow", "Clear", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
