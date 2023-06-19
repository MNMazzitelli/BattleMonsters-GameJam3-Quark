#pragma once
#include <string>
#include "Creature.h"
#include "movementResult.h"

class Creature;

using namespace std;

class Movement
{
private:
	string name;
	string description;
	const wchar_t* sound;
public:
	Movement(string name, string description, const wchar_t* sound);
	virtual ~Movement();

	string getName();
	string getDescription();
	const wchar_t* getMovSound();

	virtual movementResult useMovement(Creature* attackingCreature, Creature* affectedCreature) = 0;
};

