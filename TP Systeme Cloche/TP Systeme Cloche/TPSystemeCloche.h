#pragma once

#include <QtWidgets/QMainWindow>
#include <QDebug>
#include <QMainWindow>
#include <QKeyEvent>
#include <qtcpsocket.h>
#include "ui_TPSystemeCloche.h"

class TPSystemeCloche : public QMainWindow
{
    Q_OBJECT

public:
    TPSystemeCloche(QWidget *parent = Q_NULLPTR);
	QTcpSocket * socket;
	void keyPressEvent(QKeyEvent *ev);

private:
    Ui::TPSystemeClocheClass ui;

public slots:
	void onSocketConnected();
	void onSocketDisconnected();
};
