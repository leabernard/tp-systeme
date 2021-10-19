#include <QtCore/QCoreApplication>
#include "dmx1.h"
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    return a.exec();
}
//Chargement de la DLL
g_dasusbdll = LoadLibrary(L"DasHard2006.dll");
//Verification du chargement
if (g_dasusbdll)
DasUsbCommand = (DASHARDCOMMAND)::GetProcAddress((HMODULE)g_dasusbdll, "DasUsbCom
	mand");
	//Initialisation de la DLL
	interface_open = DasUsbCommand(DHC_INIT, 0, NULL);
//On affiche la version de la DLL qui est retournee par DasUSBCommand DHC INIT
lblResultOpenDMX->Caption = interface_open;
//On ouvre la liaison avec l'interface USB -1 si on ne trouve pas le port USB
//retourn DHC-OK = 1 si USB connecte
interface_open = DasUsbCommand(DHC_OPEN, 0, 0);
lblResultOpenDMX->Caption = interface_open;
//Envoi D'une Trame DMX
//pour test je force USB meme si pas branche
//interface_open = 1;
if (interface_open > 0)
{
	// Parametre : Commande DHC_DMXOUT, Taille Block 512 , Trame dmxbloc Pointeur
	// dmxBlock[512] est declare en global dans le .h
	// Mais il faut creer la trame
	int i;
	for (i = 0; i < DMX_MAXCHANNEL + 1; i++) {
		dmxBlock[i] = 0;
	}
	// Voir la documentation sur une trame DMX pour remplir les bon champs
	// Pour un flux DMX il y a 1 secence de bit pour demarer la trame
	// puis en serie sont envoye un ensemble d'octet qui correspond aux
	// adresse du materiel.
	// exemple si la lumiere est sur le canal 12, alors l'octet dmxBlock[12] contient
	// un ensemble de 8 bits representant les informations et envoyer et la lumiere : intensite coul
	eur ect
		// le dmxBlock[0] est le Le start-code il est souvent positionner et 0 c'est un code sur 255 possibil
		it qui indique la nature du message qui suit;
		// ATtention une lumiere peut avoir plusieur cannaux
		// exemple une led 3 couleurs aura 3 cannaux pour rouge vert bleu
		// donc la deuxieme lampe devra etre configure sur un canal 4
		DasUsbCommand(DHC_DMXOUT, DMX_MAXCHANNEL, dmxBlock);
}
Timer1->Enabled = true;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::SendTrame() {
	if (interface_open > 0)
	{
		try {
			DasUsbCommand(DHC_DMXOUT, DMX_MAXCHANNEL, dmxBlock);
		}
		catch (int x)
		{
		}
	}
}
void __fastcall TForm1::FormClose(TObject *Sender, TCloseAction &Action)
{
	//Fermeture du DMX et l'arret du programme
	if (interface_open > 0) {
		DasUsbCommand(DHC_CLOSE, 0, 0);
		DasUsbCommand(DHC_EXIT, 0, NULL);
	}
	if (g_dasusbdll != NULL)
		FreeLibrary(g_dasusbdll);
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Timer1Timer(TObject *Sender)
{
	SendTrame();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::btnForceUSBClick(TObject *Sender)
{
	interface_open = 1;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::TrackBar1Change(TObject *Sender)
{
	dmxBlock[1] = TrackBar1->Position;
}
//---------------------------------------------------------------------------