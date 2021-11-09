#include "TpCamera.h"

//*********************************************************************************************
//* Programme : TPCamera.cpp date : 09/11/2021
//*---------------------------------------------------------------------------------------------------------
//* dernière mise a jour : 
//*
//*Programmeurs : Febvin Grégory / Bernard Lea classe : BTSSN2
//*--------------------------------------------------------------------------------------------------------
//* BUT : Piloter une caméra via une aplication C++
//*Programmes associés : AUCUN
//**

TpCamera::TpCamera(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);

	timer = new QTimer(this);
	QObject::connect(timer, SIGNAL(timeout()), this, SLOT(onTimerTick()));
	balayage = false;
	balayageState = 0;
	timer->setInterval(250);
	timer->start();

	port = new QSerialPort(this);

	port->setPortName("COM1");
	port->setBaudRate(QSerialPort::Baud9600);
	port->setDataBits(QSerialPort::DataBits::Data8);
	port->setParity(QSerialPort::Parity::NoParity);
	port->setStopBits(QSerialPort::StopBits::OneStop);
	port->setFlowControl(QSerialPort::NoFlowControl);
	port->open(QIODevice::ReadWrite);

	onButtonRemiseZero();
}

void TpCamera::EnvoiCamera(const QByteArray function)
{
	port->write(function);
	port->flush();
}

void TpCamera::onButtonAllumer()
{
	QByteArray function = QByteArray::fromHex("81 01 04 00 02 FF");

	EnvoiCamera(function);
}

void TpCamera::onButtonEteindre()
{
	QByteArray function = QByteArray::fromHex("81 01 04 00 03 FF");
	
	EnvoiCamera(function);
}

void TpCamera::onButtonZoom()
{
	QByteArray function = QByteArray::fromHex("81 01 04 07 02 FF");

	EnvoiCamera(function);
}

void TpCamera::onButtonDeZoom()
{
	QByteArray function = QByteArray::fromHex("81 01 04 07 03 FF"); 

	EnvoiCamera(function);
}

void TpCamera::onButtonStopZoom()
{
	QByteArray function = QByteArray::fromHex("81 01 04 07 00 FF"); 

	EnvoiCamera(function);
}

void TpCamera::onButtonGauche()
{
	QByteArray function = QByteArray::fromHex("81 01 06 01 08 08 01 03 FF");

	EnvoiCamera(function);
}

void TpCamera::onButtonDroite()
{
	QByteArray function = QByteArray::fromHex("81 01 06 01 08 08 02 03 FF");

	EnvoiCamera(function);
}

void TpCamera::onButtonBas()
{
	QByteArray function = QByteArray::fromHex("81 01 06 01 08 08 03 02 FF");

	EnvoiCamera(function);
}

void TpCamera::onButtonHaut()
{
	QByteArray function = QByteArray::fromHex("81 01 06 01 08 08 03 01 FF");

	EnvoiCamera(function);
}

void TpCamera::onButtonStopMouvement()
{
	QByteArray function = QByteArray::fromHex("81 01 06 01 03 03 03 03 FF"); 

	EnvoiCamera(function);
}

void TpCamera::onButtonRemiseZero()
{
	QByteArray function = QByteArray::fromHex("81 01 06 04 FF");

	EnvoiCamera(function);
}

void TpCamera::onButtonBalayage()
{
	if (!balayage)
	{
		balayage = true;
		balayageState = 0;
	}
}

void TpCamera::onTimerTick()
{
	if (balayage)
	{
		switch (balayageState)
		{
		case 0:
			ButtonOff();
			onButtonGauche();
			balayageState = 1;
			waitCount = 0;
			break;

		case 1:
			waitCount++;
			if (waitCount >= 32)	// Timer appelé toute les 250ms, pour 8 secondes, il faut attendre 32 cycles de timer.
			{
				onButtonDroite();
				balayageState = 2;
				waitCount = 0;
			}
			break;

		case 2:
			waitCount++;
			if (waitCount >= 52)
			{
				onButtonGauche();
				balayageState = 3;
				waitCount = 0;
			}
			break;

		case 3:
			waitCount++;
			if (waitCount >= 52)
			{
				onButtonDroite();
				balayageState = 4;
				waitCount = 0;
			}
			break;

		case 4:
			waitCount++;
			if (waitCount >= 52)
			{
				onButtonRemiseZero();
				waitCount = 0;
				balayage = false;
				ButtonOn();
			}
			break;
		}
	}
}

void TpCamera::ButtonOff()
{
	ui.pushButton->setEnabled(false);
	ui.pushButton_2->setEnabled(false);
	ui.pushButton_3->setEnabled(false);
	ui.pushButton_4->setEnabled(false);
	ui.pushButton_5->setEnabled(false);
	ui.pushButton_6->setEnabled(false);
	ui.pushButton_7->setEnabled(false);
	ui.pushButton_8->setEnabled(false);
	ui.pushButton_9->setEnabled(false);
	ui.pushButton_10->setEnabled(false);
	ui.pushButton_11->setEnabled(false);
}

void TpCamera::ButtonOn()
{
	ui.pushButton->setEnabled(true);
	ui.pushButton_2->setEnabled(true);
	ui.pushButton_3->setEnabled(true);
	ui.pushButton_4->setEnabled(true);
	ui.pushButton_5->setEnabled(true);
	ui.pushButton_6->setEnabled(true);
	ui.pushButton_7->setEnabled(true);
	ui.pushButton_8->setEnabled(true);
	ui.pushButton_9->setEnabled(true);
	ui.pushButton_10->setEnabled(true);
	ui.pushButton_11->setEnabled(true);
}

