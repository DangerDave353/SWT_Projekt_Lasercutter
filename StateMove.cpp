#include "stdafx.h"
#include "StateBereit.h"
#include "StateLaserAn.h"
#include "StateLaserAus.h"
#include "StateMove.h"


StateMove::StateMove()
{
	KoordinateX = 0;
	KoordinateY = 0;
	LaserZustand = false;

}
StateMove::StateMove(bool laserZustand)
{
	LaserZustand = laserZustand;
	
	delete lastState;
	lastState = currentState;
	currentState = this;
//GUI Aufruf

}
StateMove::StateMove(int x, int y)
{
	KoordinateX = x;
	KoordinateY = y;
	//GUI

}
bool NextState(bool laserZustand) 
{
	
	return false;
}
bool NextState(int x, int y) 
{
	return false;
}

StateMove::~StateMove()
{
}


//delete lastState;
//lastState = currentState;
//currentState = this;