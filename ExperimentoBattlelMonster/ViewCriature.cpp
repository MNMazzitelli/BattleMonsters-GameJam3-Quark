#include "ViewCriature.h"
#include "DamagesViews.h"
using namespace std;


ViewCriature::ViewCriature(int x, int y, std::string name,int life ,int strength,
	double speed, string* _hablilidades[4], DrawBase* sprite, 
	int spritex, int spritey):Screen(200,48) {
	this->x = x;
	this->y = y;
	this->name = name;
	this->life = life;
	this->strength = strength;
	this->speed = speed;
	memcpy(this->hablilidades,_hablilidades, 4 * sizeof(string*));
	letterCount = 0;
	waiting = false;
	timer = 0;
	nextTurn = speed;
	distanceVelocity = 0;
	lifeDistanceAmount = 0;
	speedDistanceAmount = 0;
	strengthDistanceAmount = 0;
	tiempoEspera = 0;
	getHit = false;
	getDamageMove = 0;
	this->sprite = sprite;
	this->spritex = spritex;
	this->spritey = spritey;
}

void ViewCriature::setLife(int life) {
	this->life = life;
}

void ViewCriature::setSpeed(double speed) {
	this->speed = speed;
}

void ViewCriature::setStrength(int strength) {
	this->strength = strength;
}

void ViewCriature::setEvent(std::string event) {
	this->event = event;
}

void ViewCriature::setNextTurn(double nextTurn) {
	this->nextTurn = nextTurn;
}

int ViewCriature::getLife() {
	return this->life;
}

int ViewCriature::getStrength() {
	return this->strength;
}

double ViewCriature::getSpeed() {
	return this->speed;
}

void ViewCriature::draw() {
	eraseStats();
	gotoxy(x - getDamageMove, y ); cout << "Name: " << name;
	gotoxy(x - getDamageMove, y + 1); cout << "Life: " <<life;
	gotoxy(x - getDamageMove, y + 2); cout << "Strength: " << strength;;
	gotoxy(x - getDamageMove, y + 3); cout << "Speed: "; printf("%.2lf", speed);
	gotoxy(x + 3 - getDamageMove, y + 5); cout << " 1: " << this->hablilidades[0]->c_str();
	gotoxy(x + 3 - getDamageMove, y + 6); cout << " 2: " << this->hablilidades[1]->c_str();
	gotoxy(x + 3 - getDamageMove, y + 7); cout << " 3: " << this->hablilidades[2]->c_str();
	gotoxy(x + 3 - getDamageMove, y + 8); cout << " 4: " << this->hablilidades[3]->c_str();

	sprite->drawCriature(spritex, spritey);

	//Life updates
	if (lifeDistanceAmount != 0) {
		if (lifeDistanceAmount * -1 < 0) { this->setTextColor(RED); gotoxy(x + 15, y + 1);  cout << lifeDistanceAmount * -1; this->setTextColor(WHITE); }
		else {this->setTextColor(GREEN); gotoxy(x + 15, y + 1);  cout << lifeDistanceAmount * -1; this->setTextColor(WHITE); }
	}else {gotoxy(x + 15, y + 1); cout << "          ";}

	//Strength updates
	if (strengthDistanceAmount != 0) {
		if (strengthDistanceAmount * -1 < 0) { this->setTextColor(RED); gotoxy(x + 15, y + 2);  cout << strengthDistanceAmount * -1; this->setTextColor(WHITE); }
		else { this->setTextColor(GREEN); gotoxy(x + 15, y + 2);  cout << strengthDistanceAmount * -1; this->setTextColor(WHITE); }
	}
	else { gotoxy(x + 15, y + 2); cout << "          "; }

	//speed updates
	if (tiempoEspera != 0) {
		if (speedDistanceAmount * -1 < 0) { this->setTextColor(GREEN); gotoxy(x + 15, y + 3);  printf("%.2lf", speedDistanceAmount * -1); this->setTextColor(WHITE); }
		else { this->setTextColor(RED); gotoxy(x + 15, y + 3);  printf("%.2lf", speedDistanceAmount * -1); this->setTextColor(WHITE); }
		tiempoEspera--;
	}
	else { gotoxy(x + 15, y + 3); cout << "          "; speedDistanceAmount = 0; }
}

void ViewCriature::updateEvent(double time,int x) {
	gotoxy( this-> x + x, y - 1); cout << "_________________ACCIONES__________________";
	if (event != "") {
		if (event.length() > letterCount) {
			gotoxy(this->x  + x  + letterCount, y); cout << event.substr(letterCount, letterCount + 1);
			letterCount++;
		}
		else {
			if (!waiting) {
				timer = time + 1;
				setWaiting();
			}
		}
	}
	if (timer < time && timer != 0) {
		string erase = "";
		for (int cont = 0; cont < event.length(); cont++) {
			erase += " ";
		}
		eraseEvent(erase, this->x + x);
		event = "";
		setWaiting();
		timer = 0;
		letterCount = 0;
	}
}

void ViewCriature::updateTurnBar(double time) {
	gotoxy(x, y - 1);
	for (int c = 25; c >= 0; c--) {
		c < getNextTurnDistance(time) ? printf("%c", 196) : printf("%c", 254);
	}
}

void ViewCriature::updateSelector() {
	gotoxy(x, y + 5 + 1); printf("%c", 175);
}

void ViewCriature::setWaiting() {
	waiting  ? waiting = false : waiting = true;
}

void ViewCriature::eraseEvent(string erase,int x){
	gotoxy(x, y); cout << erase;
}

void ViewCriature::eraseStats() {
	gotoxy(x - getDamageMove, y); cout << "        " << "              ";
	gotoxy(x - getDamageMove, y + 1); cout << "       " <<"             ";
	gotoxy(x - getDamageMove, y + 2); cout << "          " << "              ";
	gotoxy(x - getDamageMove, y + 3); cout << "       " << "                  ";
	gotoxy(x + 3 - getDamageMove, y + 5); cout << "     " << "                  ";
	gotoxy(x + 3 - getDamageMove, y + 6); cout << "     " << "                  ";
	gotoxy(x + 3 - getDamageMove, y + 7); cout << "     " << "                  ";
	gotoxy(x + 3 - getDamageMove, y + 8); cout << "     " << "                  ";
}

int ViewCriature::getNextTurnDistance(double time) {
	double tiempoRestante = 0;
	double porcentaje = 0;
	porcentaje = ((nextTurn - time) * 100) / speed;
	tiempoRestante = 25 * porcentaje / 100;
	return tiempoRestante;
}

void ViewCriature::downUpLife(int amount,double time,ViewCriature* b, bool itself) {
	/*if (!getHit && x < 10) {
		DamageView dmg = DamageView();
		dmg.getDamage(this);
		getHitChange();
	}
*/	lifeDistanceAmount == 0 ? lifeDistanceAmount = amount : lifeDistanceAmount = lifeDistanceAmount;
	!itself > 0 ? distanceVelocity = amount / b->getNextTurnDistance(time): distanceVelocity = amount / getNextTurnDistance(time);
	this->setLife(this->getLife() - distanceVelocity);
}

void ViewCriature::downUpStrength(int amount, double time, ViewCriature* b, bool itself) {
	strengthDistanceAmount == 0 ? strengthDistanceAmount = amount : strengthDistanceAmount = strengthDistanceAmount;
	!itself > 0 ? distanceVelocity = amount / b->getNextTurnDistance(time) : distanceVelocity = amount / getNextTurnDistance(time);
	this->setStrength(this->getStrength() - distanceVelocity);
}

void ViewCriature::downUpSpeed(double amount, double time, ViewCriature* b,bool itself) {
	speedDistanceAmount == 0 ? speedDistanceAmount = amount : speedDistanceAmount = speedDistanceAmount;
	!itself ? distanceVelocity = amount / b->getNextTurnDistance(time) : distanceVelocity = amount / getNextTurnDistance(time);
	this->setSpeed(this->getSpeed() - amount); tiempoEspera = 20;
}

void ViewCriature::setLifeDistanceAmount() {
	if(getHit) getHitChange();
	this->lifeDistanceAmount = 0;
}

void ViewCriature::setStrengthDistanceAmount() {
	this->strengthDistanceAmount = 0;
}

void ViewCriature::setSpeedDistanceAmount() {

}

void ViewCriature::getHitChange() {
	getHit ? getHit=false:getHit=true ;
}

ViewCriature::~ViewCriature() {
	sprite = nullptr;
	for (string* dato : hablilidades) {
		delete dato;
	}	
}

