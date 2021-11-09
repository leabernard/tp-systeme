#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_TpCamera.h"
#include <windows.h>

#include <QSerialPort>
#include <QSerialPortInfo>
#include <qdebug>
#include <QThread>
#include <QTimer>


class TpCamera : public QMainWindow
{
    Q_OBJECT

public:
    TpCamera(QWidget *parent = Q_NULLPTR);

public slots:

	void EnvoiCamera(const QByteArray function);

	void onButtonAllumer();
	void onButtonEteindre();

	void onButtonDeZoom();
	void onButtonZoom();
	void onButtonStopZoom();

	void onButtonGauche();
	void onButtonDroite();
	void onButtonBas();
	void onButtonHaut();

	void onButtonStopMouvement();
	void onButtonRemiseZero();

	void onButtonBalayage();

	void onTimerTick();

	void ButtonOff();
	void ButtonOn();

private:
    Ui::TpCameraClass ui;

	QSerialPort * port;
	QTimer * timer;

	bool balayage;
	int balayageState;
	int waitCount;
};
