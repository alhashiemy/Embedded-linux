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
    QWidget *widget;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *lIP;
    QLineEdit *leIP;
    QHBoxLayout *horizontalLayout_2;
    QLabel *lPort;
    QLineEdit *lePort;
    QPushButton *pbConnect;
    QPushButton *pbDisconnect;
    QWidget *widget1;
    QVBoxLayout *verticalLayout_3;
    QLabel *lIP_3;
    QPushButton *pbSendData;
    QLineEdit *leData;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QListWidget *lwConsole;
    QPushButton *pbClearConsole;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_2;
    QListWidget *lwReceived;
    QPushButton *pbClearReceived;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1096, 765);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        gbSystem = new QGroupBox(centralwidget);
        gbSystem->setObjectName("gbSystem");
        gbSystem->setGeometry(QRect(40, 10, 421, 421));
        gbSystem->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 0, 255);"));
        widget = new QWidget(gbSystem);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(20, 40, 391, 201));
        verticalLayout_2 = new QVBoxLayout(widget);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        lIP = new QLabel(widget);
        lIP->setObjectName("lIP");
        lIP->setStyleSheet(QString::fromUtf8("font: 700 14pt \"Segoe UI\";\n"
"color: rgb(85, 255, 127);\n"
"background-color: rgb(255, 0, 0);"));

        horizontalLayout->addWidget(lIP);

        leIP = new QLineEdit(widget);
        leIP->setObjectName("leIP");
        leIP->setStyleSheet(QString::fromUtf8("font: 14pt \"Segoe UI\";\n"
"color: rgb(255, 0, 0);\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(255, 255, 255, 255));"));

        horizontalLayout->addWidget(leIP);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        lPort = new QLabel(widget);
        lPort->setObjectName("lPort");
        lPort->setStyleSheet(QString::fromUtf8("font: 700 14pt \"Segoe UI\";\n"
"color: rgb(85, 255, 127);\n"
"background-color: rgb(255, 0, 0);"));

        horizontalLayout_2->addWidget(lPort);

        lePort = new QLineEdit(widget);
        lePort->setObjectName("lePort");
        lePort->setStyleSheet(QString::fromUtf8("font: 14pt \"Segoe UI\";\n"
"color: rgb(255, 0, 0);\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(255, 255, 255, 255));"));

        horizontalLayout_2->addWidget(lePort);


        verticalLayout->addLayout(horizontalLayout_2);


        verticalLayout_2->addLayout(verticalLayout);

        pbConnect = new QPushButton(widget);
        pbConnect->setObjectName("pbConnect");
        pbConnect->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 255, 0);\n"
"color: rgb(85, 0, 0);\n"
"font: 20pt \"Simplified Arabic Fixed\";"));

        verticalLayout_2->addWidget(pbConnect);

        pbDisconnect = new QPushButton(widget);
        pbDisconnect->setObjectName("pbDisconnect");
        pbDisconnect->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 255, 0);\n"
"font: 20pt \"Simplified Arabic Fixed\";\n"
"background-color: rgb(255, 0, 0);"));

        verticalLayout_2->addWidget(pbDisconnect);

        widget1 = new QWidget(gbSystem);
        widget1->setObjectName("widget1");
        widget1->setGeometry(QRect(20, 260, 381, 149));
        verticalLayout_3 = new QVBoxLayout(widget1);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        lIP_3 = new QLabel(widget1);
        lIP_3->setObjectName("lIP_3");
        lIP_3->setStyleSheet(QString::fromUtf8("font: 700 14pt \"Segoe UI\";\n"
"color: rgb(85, 255, 127);\n"
"background-color: rgb(255, 0, 0);"));

        verticalLayout_3->addWidget(lIP_3);

        pbSendData = new QPushButton(widget1);
        pbSendData->setObjectName("pbSendData");
        pbSendData->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 255, 0);\n"
"color: rgb(85, 0, 0);\n"
"font: 20pt \"Simplified Arabic Fixed\";"));

        verticalLayout_3->addWidget(pbSendData);

        leData = new QLineEdit(widget1);
        leData->setObjectName("leData");
        leData->setStyleSheet(QString::fromUtf8("font: 14pt \"Segoe UI\";\n"
"color: rgb(255, 0, 0);\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(255, 255, 255, 255));"));

        verticalLayout_3->addWidget(leData);

        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(480, 10, 601, 401));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName("gridLayout");
        lwConsole = new QListWidget(groupBox);
        lwConsole->setObjectName("lwConsole");
        lwConsole->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(255, 178, 102, 255), stop:0.55 rgba(235, 148, 61, 255), stop:0.98 rgba(0, 0, 0, 255), stop:1 rgba(0, 0, 0, 0));\n"
"font: 700 14pt \"Segoe UI\";"));
        lwConsole->setVerticalScrollMode(QAbstractItemView::ScrollMode::ScrollPerPixel);
        lwConsole->setHorizontalScrollMode(QAbstractItemView::ScrollMode::ScrollPerPixel);
        lwConsole->setWordWrap(true);

        gridLayout->addWidget(lwConsole, 0, 0, 1, 1);

        pbClearConsole = new QPushButton(groupBox);
        pbClearConsole->setObjectName("pbClearConsole");
        pbClearConsole->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 255, 0);\n"
"font: 20pt \"Simplified Arabic Fixed\";\n"
"background-color: rgb(255, 0, 0);"));

        gridLayout->addWidget(pbClearConsole, 1, 0, 1, 1);

        groupBox_2 = new QGroupBox(centralwidget);
        groupBox_2->setObjectName("groupBox_2");
        groupBox_2->setGeometry(QRect(40, 430, 1041, 281));
        gridLayout_2 = new QGridLayout(groupBox_2);
        gridLayout_2->setObjectName("gridLayout_2");
        lwReceived = new QListWidget(groupBox_2);
        lwReceived->setObjectName("lwReceived");
        lwReceived->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(255, 178, 102, 255), stop:0.55 rgba(235, 148, 61, 255), stop:0.98 rgba(0, 0, 0, 255), stop:1 rgba(0, 0, 0, 0));\n"
"font: 700 14pt \"Segoe UI\";"));
        lwReceived->setVerticalScrollMode(QAbstractItemView::ScrollMode::ScrollPerPixel);
        lwReceived->setHorizontalScrollMode(QAbstractItemView::ScrollMode::ScrollPerPixel);
        lwReceived->setWordWrap(true);

        gridLayout_2->addWidget(lwReceived, 0, 0, 1, 1);

        pbClearReceived = new QPushButton(groupBox_2);
        pbClearReceived->setObjectName("pbClearReceived");
        pbClearReceived->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 255, 0);\n"
"font: 20pt \"Simplified Arabic Fixed\";\n"
"background-color: rgb(255, 0, 0);"));

        gridLayout_2->addWidget(pbClearReceived, 1, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1096, 25));
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
        lIP->setText(QCoreApplication::translate("MainWindow", "IP :-", nullptr));
        leIP->setInputMask(QCoreApplication::translate("MainWindow", "000.000.000.000", nullptr));
        lPort->setText(QCoreApplication::translate("MainWindow", "Port :-", nullptr));
        lePort->setInputMask(QString());
        pbConnect->setText(QCoreApplication::translate("MainWindow", "Connect", nullptr));
        pbDisconnect->setText(QCoreApplication::translate("MainWindow", "Disconnect", nullptr));
        lIP_3->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:22pt; font-style:italic;\">Enter Message</span></p></body></html>", nullptr));
        pbSendData->setText(QCoreApplication::translate("MainWindow", "Send", nullptr));
        leData->setInputMask(QString());
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
