#include "Skill.h"
#include <random>
#include <time.h>
#include <iostream>
#include <cstdlib>

using namespace std;


movementResult Skill::useMovement(Creature* attackingCreature, Creature* affectedCreature) {
	srand(time(0));
	double positiveSkillValue = abs(skillEffectValue);
	int finalValue = rand() % (int)(this->skillEffectValue) + 1;
	movementResult skillResult;
	skillResult.movementResult = 0;
	skillResult.movementTarget = NULL;
	skillResult.usedMovement = LIFE;

	switch (this->affectedStat) {
	case LIFE:
		if (!targetItself) {
			skillResult.movementTarget = affectedCreature;
			if (skillEffectValue < 0) {
				finalValue = finalValue * (-1);
			}
			affectedCreature->setLife(affectedCreature->getLife() + finalValue);
		}
		else {
			skillResult.movementTarget = attackingCreature;
			if (skillEffectValue < 0) {
				finalValue = finalValue * (-1);
			}
			attackingCreature->setLife(attackingCreature->getLife() + finalValue);
		}

		skillResult.movementResult = abs(finalValue);
		skillResult.usedMovement = LIFE;

		return skillResult;

	case STRENGTH:
		if (!targetItself) {
			skillResult.movementTarget = affectedCreature;
			if (skillEffectValue < 0) {
				finalValue = finalValue * (-1);
			}
			affectedCreature->setStrength(affectedCreature->getStrength() + finalValue);
		}
		else {
			skillResult.movementTarget = attackingCreature;
			if (skillEffectValue < 0) {
				finalValue = finalValue * (-1);
			}
			attackingCreature->setStrength(attackingCreature->getStrength() + finalValue);
		}


		skillResult.movementResult = abs(finalValue);
		skillResult.usedMovement = LIFE;

		return skillResult;

	case SPEED:
		double min_value = 0;
		double max_value = positiveSkillValue;

		uniform_real_distribution<double> unif(min_value, max_value);
		default_random_engine dre;
		double random_double = unif(dre);

		if (skillEffectValue < 0) {
			random_double = (-1) * random_double;
		}


		if (!targetItself) {
			skillResult.movementTarget = attackingCreature;
			attackingCreature->setSpeed(attackingCreature->getSpeed() + random_double);
		}
		else {
			skillResult.movementTarget = attackingCreature;
			affectedCreature->setSpeed(affectedCreature->getSpeed() + random_double);
		}

		skillResult.movementResult = abs(finalValue);
		skillResult.usedMovement = LIFE;
	}

	return skillResult;

}

bool Skill::getTargetItself() {
	return this->targetItself;
}