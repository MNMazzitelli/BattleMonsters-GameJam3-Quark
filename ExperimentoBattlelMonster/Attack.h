#pragma once
#include "Movement.h"
class Attack : public Movement{
private:
	int damageValue;
public:
	Attack(string name, string description, int damageValue, const wchar_t* sound) : Movement(name, description, sound) {
		this->damageValue = damageValue;
	};
	~Attack() = default;
	movementResult useMovement(Creature* attackingCreature, Creature* affectedCreature);
};

