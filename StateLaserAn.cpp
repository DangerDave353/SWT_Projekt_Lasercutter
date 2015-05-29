#include "stdafx.h"
#include "StateBereit.h"
#include "StateLaserAn.h"
#include "StateLaserAus.h"
#include "StateMove.h"


StateLaserAn::StateLaserAn()
{
	KoordinateX = lastState->KoordinateX;
	KoordinateY = lastState->KoordinateY;
	LaserZustand = true;
	
	delete lastState;
	lastState = currentState;
	currentState = this;
	//GUI Aufruf
}


bool NextState(bool laserZustand) 
{

	if (laserZustand)
	{
		nextState = new StateLaserAn();
		return true;
	}
	else
	{
		nextState = new StateLaserAus();
		return true;
	}
	return false;
}
bool NextState(int x, int y) 
{
	nextState = new StateMove(x,y);
	return true;
}


StateLaserAn::~StateLaserAn()
{
}
