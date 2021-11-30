/********************************************************************************
** Form generated from reading UI file 'sendToDatabase.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SENDTODATABASE_H
#define UI_SENDTODATABASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_sendToDatabaseClass
{
public:
    QWidget *centralWidget;
    QComboBox *portComboBox;
    QLabel *label;
    QPushButton *pushButton;
    QLabel *label_2;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *sendToDatabaseClass)
    {
        if (sendToDatabaseClass->objectName().isEmpty())
            sendToDatabaseClass->setObjectName(QString::fromUtf8("sendToDatabaseClass"));
        sendToDatabaseClass->resize(267, 155);
        centralWidget = new QWidget(sendToDatabaseClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        portComboBox = new QComboBox(centralWidget);
        portComboBox->setObjectName(QString::fromUtf8("portComboBox"));
        portComboBox->setGeometry(QRect(50, 20, 69, 22));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 30, 47, 13));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(130, 20, 75, 23));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(130, 50, 71, 16));
        sendToDatabaseClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(sendToDatabaseClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 267, 21));
        sendToDatabaseClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(sendToDatabaseClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        sendToDatabaseClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(sendToDatabaseClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        sendToDatabaseClass->setStatusBar(statusBar);

        retranslateUi(sendToDatabaseClass);
        QObject::connect(pushButton, SIGNAL(clicked()), sendToDatabaseClass, SLOT(pute()));

        QMetaObject::connectSlotsByName(sendToDatabaseClass);
    } // setupUi

    void retranslateUi(QMainWindow *sendToDatabaseClass)
    {
        sendToDatabaseClass->setWindowTitle(QCoreApplication::translate("sendToDatabaseClass", "sendToDatabase", nullptr));
        label->setText(QCoreApplication::translate("sendToDatabaseClass", "Port :", nullptr));
        pushButton->setText(QCoreApplication::translate("sendToDatabaseClass", "Connecte-toi", nullptr));
        label_2->setText(QCoreApplication::translate("sendToDatabaseClass", "Offline...", nullptr));
    } // retranslateUi

};

namespace Ui {
    class sendToDatabaseClass: public Ui_sendToDatabaseClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SENDTODATABASE_H
