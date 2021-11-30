#include "sendToDatabase.h"
#include <qserialportinfo>
#include <qserialport>
#include <qdebug>
#include <QRegExp>
#include <QtSql/QtSql>

//*********************************************************************************************
//* Programme : sendToDatabase.cpp date : 23/11/2021
//*---------------------------------------------------------------------------------------------------------
//* dernière mise a jour : 23/11/2021
//*
//*Programmeurs : Caruelle Jérémy Bernart Léa Febvin Grégory classe : BTSSN2
//*
//*--------------------------------------------------------------------------------------------------------
//* BUT : Récuperer et afficher des trames d'un GPS sur une IHM
//*Programmes associés : AUCUN
//*********************************************************************************************
//---------------------------------------------------------------------------------------------

sendToDatabase::sendToDatabase(QWidget *parent) : QMainWindow(parent) {

	ui.setupUi(this);

	ui.coo->setVisible(false);


	QList<QSerialPortInfo> availablePorts = QSerialPortInfo::availablePorts();

	for (int i = 0; i < availablePorts.size(); i++) {

		QSerialPortInfo info = availablePorts.at(i);
		ui.portComboBox->addItem(info.portName(), QVariant(info.portName()));

	}

}

void sendToDatabase::bdd() {

	// Etablie une nouvelle connection serial
	port = new QSerialPort( ui.portComboBox->currentText() );
	QObject::connect( port, SIGNAL( readyRead() ), this, SLOT(onSerialPortReadyRead()));
	port->setBaudRate( QSerialPort::Baud4800);
	port->setDataBits( QSerialPort::DataBits::Data8);
	port->setParity( QSerialPort::Parity::NoParity);
	port->setStopBits( QSerialPort::StopBits::OneStop);
	port->open( QIODevice::OpenModeFlag::ExistingOnly | QIODevice::OpenModeFlag::ReadWrite);

	if ( port->isOpen() ) {
		
		ui.coo->setVisible( true );

	}

}


/*
Découpe les trames reçues pour en extraire les coordonnées, la date, etc.
*/
void sendToDatabase::onSerialPortReadyRead() {

	// Reception des données
	QByteArray data = port->read(port->bytesAvailable());
	QString str(data);
	buffer += str;

	// Expression régulière pour découper les données
	QRegExp startMatch("GPGGA(.+)")
		, stopMatch("(\\*)");

	// Si on a trouvé une donnée
	int startByte = startMatch.indexIn(buffer);

	// Cherche une occurence dans la chaine pour trouver une trame
	if (startByte > -1 && startByte > 0 && stopMatch.indexIn(buffer, startByte + 1) > -1) {


		qDebug() << buffer;
		ui.textEdit->setText( buffer );

		QRegExp regex("GPGGA,(.+)(\\*)");
		int test = regex.indexIn(buffer);
		QStringList list = regex.capturedTexts();
		buffer.replace(0, stopMatch.indexIn(buffer, startByte + 1), "");

		// Découpe notre chaine à chaque virgules
		QStringList data = list.at(1).split(',', Qt::SkipEmptyParts);

		QString Longitude = data.at(1)
			, Latitude = data.at(3)
			, Timestamp = data.at(0);

		// Conversion
		int LongitudeDot = Longitude.indexOf(".")
			, LatitudeDot = Latitude.indexOf(".");

		Longitude.insert(LongitudeDot - 2, ",");
		Latitude.insert(LatitudeDot - 2, ",");

		QStringList LatitudeSplit = Latitude.split(",");
		double LatitudeDivide = LatitudeSplit.at(1).toDouble() / 60;
		double LatitudePDivide = LatitudeSplit.at(0).toDouble();
		double LatitudeRes = LatitudeDivide + LatitudePDivide;

		QStringList LongitudeSplit = Longitude.split(",");
		double LongitudeDivide = LongitudeSplit.at(1).toDouble() / 60;
		double LongitudePDivide = LongitudeSplit.at(0).toDouble();
		double LongitudeRes = LongitudeDivide + LongitudePDivide;

		if (data.at(2) == "S")
			LatitudeRes * -1;

		if (data.at(4) == "O")
			LongitudeRes * -1; 

		ui.coo->setText( QString::number( LongitudeRes ) + " " + QString::number( LatitudeRes ) );

	}
	QStringList list;
}
