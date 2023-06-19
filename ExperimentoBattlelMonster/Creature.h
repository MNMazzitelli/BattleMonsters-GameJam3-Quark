#pragma once

#include <string>
#include "Movement.h"
#include "DrawBase.h"

class Movement;

using namespace std;

class Creature {
private:
	string name;
	int life;
	int strength;
	double speed;
	Movement* movements[4];
	double currentTimerValue;
	DrawBase* sp;

public:

	Creature(
		string name,
		int life,
		int strength,
		double speed,
		Movement* movements[4],
		DrawBase* sp
	);

	string getName();
	int getLife();
	int getStrength();
	double getSpeed();
	double getCurrentTimerValue();
	Movement* getMovement(short movementIndex);
	double getNextTurn();
	DrawBase* getSprite();

	void setLife(int life);
	void setStrength(int strength);
	void setSpeed(double speed);
	void setCurrentTimerValue(double currentTimerValue);

	void useMovement(Creature* opponent, short movementIndex);
	string toString();

	~Creature();
};

