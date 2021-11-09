//*********************************************************************************************
//* Programme : dmx1.cpp date : 19/10/2021
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

DMX::DMX()
{
	g_dasusbdll = LoadLibrary("DasHard2006.dll");

	if(g_dasusbdll)
		DasUsbCommand = (DASHARDCOMMAND)::GetProcAddress((HMODULE)g_dasusbdll, "DasUsbCommand");
	interface_open = DasUsbCommand(DHC_INIT, 0, NULL);
	interface_open = DasUsbCommand(DHC_OPEN, 0, 0);
}

void DMX::SendTrame()
{
	if (interface_open > 0)
	{
		
		int i;
		//for (i = 0; i < DMX_MAXCHANNEL + 1; i++) {
		//	dmxBlock[i] = 0;
		//}
	
		DasUsbCommand(DHC_DMXOUT, DMX_MAXCHANNEL, dmxBlock);
	}
	
}

