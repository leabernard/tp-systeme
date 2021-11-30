#include "TPSystemeCloche.h"

//*********************************************************************************************
//* Programme : TpSystemeCloche.cpp date : 30/11/2021
//*---------------------------------------------------------------------------------------------------------
//* Dernière mise a jour : 30/11/2021
//*
//*Programmeurs :  Bernard Léa Febvin Grégory classe : BTSSN2
//*
//*--------------------------------------------------------------------------------------------------------
//* BUT : Faire sonner les cloches à distance sur appuie d'une touche
//*Programmes associés : AUCUN
//*********************************************************************************************
//---------------------------------------------------------------------------------------------

TPSystemeCloche::TPSystemeCloche(QWidget *parent)
    : QMainWindow(parent)
{

	socket = new QTcpSocket(this);

	socket->connectToHost("192.168.64.124", 502);

	QObject::connect(socket, SIGNAL(connected()), this, SLOT(onSocketConnected()));
	QObject::connect(socket, SIGNAL(disconnected()), this, SLOT(onSocketDisconnected()));

	
    ui.setupUi(this);
}


void TPSystemeCloche::onSocketConnected() {
	qDebug() << "Connection Ok";
};

void TPSystemeCloche::onSocketDisconnected() {
	qDebug() << "Deconexion";
};

void TPSystemeCloche::keyPressEvent(QKeyEvent *ev)
{
	if (ev->key() == Qt::Key_A)
	{
		qDebug() << "Cloche 1";
		ui.label_5->setText("Vous avez active la cloche 1");

		char Cloche1Activation[12];
		Cloche1Activation[0] = 0x00;
		Cloche1Activation[1] = 0x01;
		Cloche1Activation[2] = 0x00;
		Cloche1Activation[3] = 0x00;
		Cloche1Activation[4] = 0x00;
		Cloche1Activation[5] = 0x06;
		Cloche1Activation[6] = 0x11;
		Cloche1Activation[7] = 0x06;
		Cloche1Activation[8] = 0x00;
		Cloche1Activation[9] = 0x02;
		Cloche1Activation[10] = 0x00;
		Cloche1Activation[11] = 0x01;

		QByteArray dataActive(Cloche1Activation, 12);
		socket->write(dataActive);

		char Cloche1Relache[12];
		Cloche1Relache[0] = 0x00;
		Cloche1Relache[1] = 0x01;
		Cloche1Relache[2] = 0x00;
		Cloche1Relache[3] = 0x00;
		Cloche1Relache[4] = 0x00;
		Cloche1Relache[5] = 0x06;
		Cloche1Relache[6] = 0x11;
		Cloche1Relache[7] = 0x06;
		Cloche1Relache[8] = 0x00;
		Cloche1Relache[9] = 0x02;
		Cloche1Relache[10] = 0x00;
		Cloche1Relache[11] = 0x00;

		QByteArray dataRelache(Cloche1Relache, 12);
		socket->write(dataRelache);
	}

	if (ev->key() == Qt::Key_Z)
	{
		qDebug() << "Cloche 2";
		ui.label_5->setText("Vous avez active la cloche 2");

		char Cloche2Active[12];
		Cloche2Active[0] = 0x00;
		Cloche2Active[1] = 0x01;
		Cloche2Active[2] = 0x00;
		Cloche2Active[3] = 0x00;
		Cloche2Active[4] = 0x00;
		Cloche2Active[5] = 0x06;
		Cloche2Active[6] = 0x11;
		Cloche2Active[7] = 0x06;
		Cloche2Active[8] = 0x00;
		Cloche2Active[9] = 0x02;
		Cloche2Active[10] = 0x00;
		Cloche2Active[11] = 0x02;

		QByteArray dataActive(Cloche2Active, 12);
		socket->write(dataActive);

		char Cloche2Relache[12];
		Cloche2Relache[0] = 0x00;
		Cloche2Relache[1] = 0x01;
		Cloche2Relache[2] = 0x00;
		Cloche2Relache[3] = 0x00;
		Cloche2Relache[4] = 0x00;
		Cloche2Relache[5] = 0x06;
		Cloche2Relache[6] = 0x11;
		Cloche2Relache[7] = 0x06;
		Cloche2Relache[8] = 0x00;
		Cloche2Relache[9] = 0x02;
		Cloche2Relache[10] = 0x00;
		Cloche2Relache[11] = 0x00;

		QByteArray dataRelache(Cloche2Relache, 12);
		socket->write(dataRelache);
	}

	if (ev->key() == Qt::Key_E)
	{
		qDebug() << "Cloche 3";
		ui.label_5->setText("Vous avez active la cloche 3");

		char Cloche3Active[12];
		Cloche3Active[0] = 0x00;
		Cloche3Active[1] = 0x01;
		Cloche3Active[2] = 0x00;
		Cloche3Active[3] = 0x00;
		Cloche3Active[4] = 0x00;
		Cloche3Active[5] = 0x06;
		Cloche3Active[6] = 0x11;
		Cloche3Active[7] = 0x06;
		Cloche3Active[8] = 0x00;
		Cloche3Active[9] = 0x02;
		Cloche3Active[10] = 0x00;
		Cloche3Active[11] = 0x04;

		QByteArray dataActive(Cloche3Active, 12);
		socket->write(dataActive);

		char Cloche3Relache[12];
		Cloche3Relache[0] = 0x00;
		Cloche3Relache[1] = 0x01;
		Cloche3Relache[2] = 0x00;
		Cloche3Relache[3] = 0x00;
		Cloche3Relache[4] = 0x00;
		Cloche3Relache[5] = 0x06;
		Cloche3Relache[6] = 0x11;
		Cloche3Relache[7] = 0x06;
		Cloche3Relache[8] = 0x00;
		Cloche3Relache[9] = 0x02;
		Cloche3Relache[10] = 0x00;
		Cloche3Relache[11] = 0x00;

		QByteArray dataRelache(Cloche3Relache, 12);
		socket->write(dataRelache);
	}

	if (ev->key() == Qt::Key_R)
	{
		qDebug() << "Cloche 4";
		ui.label_5->setText("Vous avez active la cloche 4");

		char Cloche4Active[12];
		Cloche4Active[0] = 0x00;
		Cloche4Active[1] = 0x01;
		Cloche4Active[2] = 0x00;
		Cloche4Active[3] = 0x00;
		Cloche4Active[4] = 0x00;
		Cloche4Active[5] = 0x06;
		Cloche4Active[6] = 0x11;
		Cloche4Active[7] = 0x06;
		Cloche4Active[8] = 0x00;
		Cloche4Active[9] = 0x02;
		Cloche4Active[10] = 0x00;
		Cloche4Active[11] = 0x08;

		QByteArray dataActive(Cloche4Active, 12);
		socket->write(dataActive);

		char Cloche4Relache[12];
		Cloche4Relache[0] = 0x00;
		Cloche4Relache[1] = 0x01;
		Cloche4Relache[2] = 0x00;
		Cloche4Relache[3] = 0x00;
		Cloche4Relache[4] = 0x00;
		Cloche4Relache[5] = 0x06;
		Cloche4Relache[6] = 0x11;
		Cloche4Relache[7] = 0x06;
		Cloche4Relache[8] = 0x00;
		Cloche4Relache[9] = 0x02;
		Cloche4Relache[10] = 0x00;
		Cloche4Relache[11] = 0x00;

		QByteArray dataRelache(Cloche4Relache, 12);
		socket->write(dataRelache);
	}
}