// SWT_Laser.cpp : Definiert den Einstiegspunkt für die Konsolenanwendung.
//

#include "stdafx.h"
#include "State.h"
#include "StateBereit.h"
#include "StateLaserAn.h"
#include "StateLaserAus.h"
#include "StateMove.h"



int _tmain(int argc, _TCHAR* argv[])
{


	State* currentState = new StateBereit();	//Initalisierung des Grundzustands
	currentState->NextState(3, 4);				//aufrufen der nächsten Zustände
	return 0;
}

