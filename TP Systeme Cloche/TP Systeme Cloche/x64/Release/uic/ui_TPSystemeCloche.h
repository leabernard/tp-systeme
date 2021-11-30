/********************************************************************************
** Form generated from reading UI file 'TPSystemeCloche.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TPSYSTEMECLOCHE_H
#define UI_TPSYSTEMECLOCHE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TPSystemeClocheClass
{
public:
    QWidget *centralWidget;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *TPSystemeClocheClass)
    {
        if (TPSystemeClocheClass->objectName().isEmpty())
            TPSystemeClocheClass->setObjectName(QString::fromUtf8("TPSystemeClocheClass"));
        TPSystemeClocheClass->resize(600, 400);
        centralWidget = new QWidget(TPSystemeClocheClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(110, 80, 111, 51));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(310, 80, 111, 41));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(120, 150, 121, 51));
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(310, 150, 121, 51));
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(146, 240, 251, 71));
        TPSystemeClocheClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(TPSystemeClocheClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 21));
        TPSystemeClocheClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(TPSystemeClocheClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        TPSystemeClocheClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(TPSystemeClocheClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        TPSystemeClocheClass->setStatusBar(statusBar);

        retranslateUi(TPSystemeClocheClass);

        QMetaObject::connectSlotsByName(TPSystemeClocheClass);
    } // setupUi

    void retranslateUi(QMainWindow *TPSystemeClocheClass)
    {
        TPSystemeClocheClass->setWindowTitle(QCoreApplication::translate("TPSystemeClocheClass", "TPSystemeCloche", nullptr));
        label->setText(QCoreApplication::translate("TPSystemeClocheClass", "Cloche 1 = Touche A", nullptr));
        label_2->setText(QCoreApplication::translate("TPSystemeClocheClass", "Cloche 2 = Touche Z", nullptr));
        label_3->setText(QCoreApplication::translate("TPSystemeClocheClass", "Cloche 3 = Touche E", nullptr));
        label_4->setText(QCoreApplication::translate("TPSystemeClocheClass", "Cloche 4 = Touche R", nullptr));
        label_5->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class TPSystemeClocheClass: public Ui_TPSystemeClocheClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TPSYSTEMECLOCHE_H
