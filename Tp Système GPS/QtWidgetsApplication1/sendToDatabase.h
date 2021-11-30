#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_sendToDatabase.h"
#include <QSerialPortInfo>
#include <qserialport>

class sendToDatabase : public QMainWindow
{
    Q_OBJECT

public:
	sendToDatabase(QWidget *parent = Q_NULLPTR);
	QSerialPort *port;
	QString buffer;
	int count = 0;

private:
	Ui::sendToDatabaseClass ui;

public slots:
	void onSerialPortReadyRead();
	void bdd(); 
};
