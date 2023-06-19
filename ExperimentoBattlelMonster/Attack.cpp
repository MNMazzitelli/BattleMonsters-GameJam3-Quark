#include <random>
#include <time.h>

#include "Attack.h"

movementResult Attack::useMovement(Creature* attackingCreature, Creature* affectedCreature)
{
	srand(time(0));
	int randomValue = rand();

	int attackingCreatureStr = attackingCreature->getStrength();
	int affectCreatureCurrentLife = affectedCreature->getLife();
	int finalDamage = (-1) * (damageValue + (randomValue % attackingCreatureStr) + 1);

	affectedCreature->setLife(affectCreatureCurrentLife + finalDamage);
	movementResult attackResult;
	finalDamage *= -1;
	attackResult.movementResult = finalDamage;
	attackResult.usedMovement = STRENGTH;
	attackResult.movementTarget = affectedCreature;

	return attackResult;
}
