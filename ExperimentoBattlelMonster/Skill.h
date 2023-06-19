#pragma once
#include "Movement.h"

class Skill : public Movement {
private:
	double skillEffectValue;
	statsEnum affectedStat;
	bool targetItself;
public:
	Skill(string name, string description, const wchar_t* sound, double skillEffectValue, statsEnum affectedStat, bool targetItself) : Movement(name, description, sound) {
		this->skillEffectValue = skillEffectValue;
		this->affectedStat = affectedStat;
		this->targetItself = targetItself;
	}
	~Skill()=default;

	movementResult useMovement(Creature* attackingCreature, Creature* affectedCreature);
	bool getTargetItself();
};

