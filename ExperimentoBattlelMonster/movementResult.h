#pragma once
#include "StatsEnum.h"
#include "Creature.h"

class Creature;

struct movementResult {
	double movementResult;
	statsEnum usedMovement;
	Creature* movementTarget;
};