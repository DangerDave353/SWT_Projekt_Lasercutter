// SWT_Laser.cpp : Definiert den Einstiegspunkt f�r die Konsolenanwendung.
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
	currentState->NextState(3, 4);				//aufrufen der n�chsten Zust�nde
	return 0;
}

