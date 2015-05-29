#pragma once
#include "State.h"
class StateMove :
	public State
{
private:
	int KoordinateX, KoordinateY;
	bool LaserZustand;
public:
	StateMove();
	StateMove(bool laserZustand);
	StateMove(int x, int y);
	bool NextState(bool laserZustand);
	bool NextState(int x, int y);
	~StateMove();
};

