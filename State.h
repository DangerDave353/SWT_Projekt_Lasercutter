#pragma once
State* currentState;
State* lastState;
State* nextState;

class State
{
private:
	int KoordinateX, KoordinateY;
	bool LaserZustand;
public:
	State();
	State(bool laserZustand);
	State(int x, int y);
	virtual bool NextState(bool laserZustand) = 0;
	virtual bool NextState(int x, int y) = 0;
	~State();
};

