#pragma once
#include "State.h"
class StateLaserAus : 
	public State
{
private:
	int KoordinateX, KoordinateY;
	bool LaserZustand;
public:
	StateLaserAus();
	StateLaserAus(bool laserZustand);
	StateLaserAus(int x, int y);
	bool NextState(bool laserZustand);
	bool NextState(int x, int y);

	~StateLaserAus();
};

