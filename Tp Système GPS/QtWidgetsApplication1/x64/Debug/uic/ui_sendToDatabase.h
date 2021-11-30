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
#include <QtWidgets/QTextEdit>
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
    QLabel *coo;
    QLabel *label_2;
    QLabel *label_3;
    QTextEdit *textEdit;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *sendToDatabaseClass)
    {
        if (sendToDatabaseClass->objectName().isEmpty())
            sendToDatabaseClass->setObjectName(QString::fromUtf8("sendToDatabaseClass"));
        sendToDatabaseClass->resize(358, 318);
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
        coo = new QLabel(centralWidget);
        coo->setObjectName(QString::fromUtf8("coo"));
        coo->setGeometry(QRect(20, 90, 201, 16));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 70, 131, 16));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(20, 120, 161, 16));
        textEdit = new QTextEdit(centralWidget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(20, 150, 321, 101));
        sendToDatabaseClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(sendToDatabaseClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 358, 21));
        sendToDatabaseClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(sendToDatabaseClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        sendToDatabaseClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(sendToDatabaseClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        sendToDatabaseClass->setStatusBar(statusBar);

        retranslateUi(sendToDatabaseClass);
        QObject::connect(pushButton, SIGNAL(clicked()), sendToDatabaseClass, SLOT(bdd()));

        QMetaObject::connectSlotsByName(sendToDatabaseClass);
    } // setupUi

    void retranslateUi(QMainWindow *sendToDatabaseClass)
    {
        sendToDatabaseClass->setWindowTitle(QCoreApplication::translate("sendToDatabaseClass", "GPS", nullptr));
        label->setText(QCoreApplication::translate("sendToDatabaseClass", "Port :", nullptr));
        pushButton->setText(QCoreApplication::translate("sendToDatabaseClass", "Connecte-toi", nullptr));
        coo->setText(QCoreApplication::translate("sendToDatabaseClass", "...", nullptr));
        label_2->setText(QCoreApplication::translate("sendToDatabaseClass", "Latitude / Longitude :", nullptr));
        label_3->setText(QCoreApplication::translate("sendToDatabaseClass", "Trame Complete", nullptr));
    } // retranslateUi

};

namespace Ui {
    class sendToDatabaseClass: public Ui_sendToDatabaseClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SENDTODATABASE_H
