#include "stdafx.h"
#include "StateBereit.h"
#include "StateLaserAn.h"
#include "StateLaserAus.h"
#include "StateMove.h"


StateLaserAus::StateLaserAus()
{
	KoordinateX = 0;
	KoordinateY = 0;
	LaserZustand = false;
}
bool NextState(bool laserZustand) 
{
	return false;
}
bool NextState(int x, int y) 
{
	return false;
}

StateLaserAus::~StateLaserAus()
{
}
