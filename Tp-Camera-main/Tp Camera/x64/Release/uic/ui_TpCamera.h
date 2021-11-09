/********************************************************************************
** Form generated from reading UI file 'TpCamera.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TPCAMERA_H
#define UI_TPCAMERA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TpCameraClass
{
public:
    QWidget *centralWidget;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QPushButton *pushButton_10;
    QPushButton *pushButton_11;
    QPushButton *pushButton_12;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *TpCameraClass)
    {
        if (TpCameraClass->objectName().isEmpty())
            TpCameraClass->setObjectName(QString::fromUtf8("TpCameraClass"));
        TpCameraClass->resize(600, 400);
        centralWidget = new QWidget(TpCameraClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(20, 20, 101, 41));
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(20, 70, 101, 41));
        pushButton_3 = new QPushButton(centralWidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(40, 160, 101, 41));
        pushButton_4 = new QPushButton(centralWidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(40, 250, 101, 41));
        pushButton_5 = new QPushButton(centralWidget);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(180, 130, 121, 61));
        pushButton_6 = new QPushButton(centralWidget);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setGeometry(QRect(320, 220, 121, 51));
        pushButton_7 = new QPushButton(centralWidget);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setGeometry(QRect(450, 130, 121, 61));
        pushButton_8 = new QPushButton(centralWidget);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        pushButton_8->setGeometry(QRect(320, 60, 121, 51));
        pushButton_9 = new QPushButton(centralWidget);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));
        pushButton_9->setGeometry(QRect(40, 210, 101, 31));
        pushButton_10 = new QPushButton(centralWidget);
        pushButton_10->setObjectName(QString::fromUtf8("pushButton_10"));
        pushButton_10->setGeometry(QRect(320, 130, 111, 41));
        pushButton_11 = new QPushButton(centralWidget);
        pushButton_11->setObjectName(QString::fromUtf8("pushButton_11"));
        pushButton_11->setGeometry(QRect(320, 170, 111, 41));
        pushButton_12 = new QPushButton(centralWidget);
        pushButton_12->setObjectName(QString::fromUtf8("pushButton_12"));
        pushButton_12->setGeometry(QRect(200, 310, 75, 23));
        TpCameraClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(TpCameraClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 21));
        TpCameraClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(TpCameraClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        TpCameraClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(TpCameraClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        TpCameraClass->setStatusBar(statusBar);

        retranslateUi(TpCameraClass);
        QObject::connect(pushButton, SIGNAL(clicked(bool)), TpCameraClass, SLOT(onButtonAllumer()));
        QObject::connect(pushButton_2, SIGNAL(clicked(bool)), TpCameraClass, SLOT(onButtonEteindre()));
        QObject::connect(pushButton_3, SIGNAL(clicked(bool)), TpCameraClass, SLOT(onButtonZoom()));
        QObject::connect(pushButton_4, SIGNAL(clicked(bool)), TpCameraClass, SLOT(onButtonDeZoom()));
        QObject::connect(pushButton_9, SIGNAL(clicked(bool)), TpCameraClass, SLOT(onButtonStopZoom()));
        QObject::connect(pushButton_5, SIGNAL(clicked(bool)), TpCameraClass, SLOT(onButtonGauche()));
        QObject::connect(pushButton_6, SIGNAL(clicked(bool)), TpCameraClass, SLOT(onButtonBas()));
        QObject::connect(pushButton_7, SIGNAL(clicked(bool)), TpCameraClass, SLOT(onButtonDroite()));
        QObject::connect(pushButton_8, SIGNAL(clicked(bool)), TpCameraClass, SLOT(onButtonHaut()));
        QObject::connect(pushButton_10, SIGNAL(clicked(bool)), TpCameraClass, SLOT(onButtonStopMouvement()));
        QObject::connect(pushButton_11, SIGNAL(clicked(bool)), TpCameraClass, SLOT(onButtonRemiseZero()));
        QObject::connect(pushButton_12, SIGNAL(clicked(bool)), TpCameraClass, SLOT(onButtonBalayage()));

        QMetaObject::connectSlotsByName(TpCameraClass);
    } // setupUi

    void retranslateUi(QMainWindow *TpCameraClass)
    {
        TpCameraClass->setWindowTitle(QCoreApplication::translate("TpCameraClass", "TpCamera", nullptr));
        pushButton->setText(QCoreApplication::translate("TpCameraClass", "Allumer", nullptr));
        pushButton_2->setText(QCoreApplication::translate("TpCameraClass", "Eteindre", nullptr));
        pushButton_3->setText(QCoreApplication::translate("TpCameraClass", "Zoom +", nullptr));
        pushButton_4->setText(QCoreApplication::translate("TpCameraClass", "Zoom -", nullptr));
        pushButton_5->setText(QCoreApplication::translate("TpCameraClass", "Gauche", nullptr));
        pushButton_6->setText(QCoreApplication::translate("TpCameraClass", "Bas", nullptr));
        pushButton_7->setText(QCoreApplication::translate("TpCameraClass", "Droite", nullptr));
        pushButton_8->setText(QCoreApplication::translate("TpCameraClass", "Haut", nullptr));
        pushButton_9->setText(QCoreApplication::translate("TpCameraClass", "Stop Zoom", nullptr));
        pushButton_10->setText(QCoreApplication::translate("TpCameraClass", "Stop D\303\251placement", nullptr));
        pushButton_11->setText(QCoreApplication::translate("TpCameraClass", "Remise position z\303\251ro", nullptr));
        pushButton_12->setText(QCoreApplication::translate("TpCameraClass", "Balayage", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TpCameraClass: public Ui_TpCameraClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TPCAMERA_H
