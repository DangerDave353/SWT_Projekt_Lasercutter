#include "stdafx.h"
#include "StateBereit.h"
#include "StateLaserAn.h"
#include "StateLaserAus.h"
#include "StateMove.h"

StateBereit::StateBereit()
{
	KoordinateX = 0;
	KoordinateY = 0;
	LaserZustand = false;


}

StateBereit::StateBereit(bool laserZustand)
{
	LaserZustand = laserZustand;

	delete lastState;
	lastState = currentState;
	currentState = this;
	//GUI Aufruf
}
StateBereit::StateBereit(int x, int y)
{
	KoordinateX = x;
	KoordinateY = y;

	delete lastState;
	lastState = currentState;
	currentState = this;
	//GUI Aufruf
}

bool NextState(bool laserZustand) 
{
	if (currentState->LaserZustand)
	{
		return false;
	}
	else
	{
		if (laserZustand)
		{
			nextState = new StateLaserAn();
			return true;
		}
		else
		{
			nextState = new StateBereit(currentState->KoordinateX, currentState->KoordinateY);
			return true;
		}
	}
	return false;
}
bool NextState(int x, int y) 
{
	if (currentState->LaserZustand)
	{
		nextState = new StateMove(x, y);
		return true;
	}
		return false;
}


StateBereit::~StateBereit()
{
}
