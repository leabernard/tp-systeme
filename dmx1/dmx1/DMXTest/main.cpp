//*********************************************************************************************
//* Programme : main.cpp date : 19/10/2021
//*---------------------------------------------------------------------------------------------------------
//* dernière mise a jour : 20/10/2021
//*
//*Programmeurs : Léa bernard Nicolas marrochi classe : BTSSN2
//* 
//*--------------------------------------------------------------------------------------------------------
//* BUT : allumer des lampes de différentes couleurs
//*Programmes associés : AUCUN
//*********************************************************************************************
//---------------------------------------------------------------------------------------------
#include "dmx1.h"
int main(int argc, char *argv[])
{
	DMX * obj = new DMX();
	int value = 0;
	int variation = 1;
	while (1)
	{
		//for (int i = 0; i < 10; i++)
		//{
		//	obj->dmxBlock[i] = value;
		//}
		obj->dmxBlock[0] = 0 ; //rouge
		obj->dmxBlock[1] = 0; //vert
		obj->dmxBlock[2] = 250; //bleu
		obj->dmxBlock[3] = 0; //blanc

		value += variation;
		if (value >= 255)
		{
			value = 255;
			variation *= -1;
		}
		else if(value <= 0)
		{
			value = 0;
			variation *= -1;
		}

		obj->SendTrame();
		Sleep(20);
	}
	return 0;
}