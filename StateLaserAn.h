#pragma once
#include "State.h"
class StateLaserAn :
	public State
{
private:
	int KoordinateX, KoordinateY;
	bool LaserZustand;
public:
	StateLaserAn();
	StateLaserAn(bool laserZustand);
	StateLaserAn(int x, int y);
	bool NextState(bool laserZustand);
	bool NextState(int x, int y);

	~StateLaserAn();
};

