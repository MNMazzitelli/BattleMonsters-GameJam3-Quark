#include "Movement.h"

Movement::Movement(string name, string description, const wchar_t* sound) {
	this->name = name;
	this->description = description;
	this->sound = sound;
}

string Movement::getName() {
	return this->name;
}

string Movement::getDescription()
{
	return this->description;
}

const wchar_t* Movement::getMovSound() {
	return this->sound;
}

Movement::~Movement() {
	delete sound;
}