#pragma once
#include "State.h"
class StateBereit :
	public State
{
private:
	int KoordinateX, KoordinateY;
	bool LaserZustand;
public:
	StateBereit();
	StateBereit(bool laserZustand);
	StateBereit(int x, int y);
	bool NextState(bool laserZustand);
	bool NextState(int x, int y);

	~StateBereit();
};

