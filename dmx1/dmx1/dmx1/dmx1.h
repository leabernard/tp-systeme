#pragma once
//---------------------------------------------------------------------------

//---------------------------------------------------------------------------
#include <Windows.h>
#include "DasHard.h"

#define DMX_MAXCHANNEL 512

//---------------------------------------------------------------------------
class DMX
{
	HINSTANCE g_dasusbdll;
private: // Declarations utilisateur
	
public: // Declarations utilisateur
	DMX();
	
	typedef int(*DASHARDCOMMAND)(int, int, unsigned char*);
	DASHARDCOMMAND DasUsbCommand;
	int interface_open;
	unsigned char dmxBlock[512];
	void SendTrame();




};
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
