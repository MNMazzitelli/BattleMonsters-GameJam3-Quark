#pragma once
#ifndef VIEWCRIATURE_H
#define VIEWCRIATURE_H

#include <iostream>
#include <sstream>
#include "Screen.h"
#include "Color.h"
#include "DrawBase.h"


class ViewCriature:public Screen {
	int x;
	int y;
	std::string name;
	int life;
	int strength;
	double speed;
	std::string event;
	boolean waiting;
	int letterCount;
	int timer;
	double nextTurn;
	double distanceVelocity;
	double lifeDistanceAmount;
	double strengthDistanceAmount;
	double speedDistanceAmount;
	int tiempoEspera;
	std::string* hablilidades[4];
	bool getHit;
	int getDamageMove;

	void setWaiting();
	void eraseEvent(std::string,int);
	DrawBase* sprite;
	int spritex;
	int spritey;

public:
	ViewCriature(int x, int y, std::string name, int life, int strength, double speed,std::string* _hablilidades[4], DrawBase* sprite, int spritex, int spritey);
	~ViewCriature();
	void draw();
	void setLife(int);
	void setStrength(int);
	void setSpeed(double);
	void setEvent(std::string event);
	void setNextTurn(double);
	void setLifeDistanceAmount();
	void setStrengthDistanceAmount();
	void setSpeedDistanceAmount();
	int getLife();
	int getStrength();
	int getX() { return this->x; }
	int getY() { return this->y; }
	double getSpeed();
	void updateEvent(double,int);
	void updateTurnBar(double tiempo);
	void updateSelector();
	void eraseStats();
	//need  to calculate turnBar and decrease/increase hits and buff and debuffs;
	int getNextTurnDistance(double );
	void downUpLife(int amount,double time, ViewCriature*, bool itself);
	void downUpStrength(int, double, ViewCriature*, bool itself);
	void downUpSpeed(double, double, ViewCriature*, bool itself);
	void update() {};
	void getHitChange();
	void setGetDamageMove(int damageMove) { this->getDamageMove = damageMove; };

};
#endif // !VIEWCRIATURE_H
