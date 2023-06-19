#include "Creature.h";
#include <cstring>;

Creature::Creature(string name, int life, int strength, double speed, Movement* movements[4], DrawBase* sp) {

	this->name = name;
	this->life = life;
	this->strength = strength;
	this->speed = speed;
	this->currentTimerValue = 0;
	memcpy(this->movements, movements, 4 * sizeof(Movement*));
	this->sp = sp;

}

//GETTERS
string Creature::getName() {
	return this->name;
}

int Creature::getLife() {
	return life;
}

int Creature::getStrength() {
	return strength;
}

double Creature::getSpeed() {
	return speed;
}

double Creature::getCurrentTimerValue() {
	return this->currentTimerValue;
}
Movement* Creature::getMovement(short movementIndex)
{
	return this->movements[movementIndex];
}

double Creature::getNextTurn()
{
	return this->speed + this->currentTimerValue;
}

DrawBase* Creature::getSprite() {
	return sp;
}

// Fin de los GETTERS

//SETTERS
void Creature::setLife(int life) {
	this->life = life;
	if (life < 0) {
		this->life = 0;
	}
}

void Creature::setStrength(int strength) {
	this->strength = strength;

	//Con las pruebas que hice, si una criatura tenia mas de 90 pega demasiado. Igualmente hay que hacer pruebas
	if (this->strength > 90) {
		this->strength = 90;
	}
	//Comentario similar aca, necesita ser testeado
	else if (this->strength <  20) {
		this->strength = 20;
	}
}

void Creature::setSpeed(double speed) {
	this->speed = speed;

	if (this->speed < 2.5) {
		this->speed = 2.5;
	}
	else if (this->speed > 5) {
		this->speed = speed;
	}
}

void Creature::setCurrentTimerValue(double currentTimerValue) {
	this->currentTimerValue = currentTimerValue;
}

// Fin de los SETTERS

void Creature::useMovement(Creature* opponent, short movementIndex) {
	this->movements[movementIndex]->useMovement(this, opponent);
}

//Parece absudo teniendo el getName pero, quizas sea util en la interfaz grafica.
string Creature::toString() {
	return "El nombre del battle monster es: " + this->getName();
}

Creature::~Creature() {
	//for (Movement* movement : movements) {
	//	delete(movement);
//	}
	delete sp;
}