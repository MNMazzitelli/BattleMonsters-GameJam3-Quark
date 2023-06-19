#pragma once
#ifndef ARENA_H
#define ARENA_H
#include "ViewCriature.h"
#include "Screen.h"
#include "View.h"

#define TIEMPOX ( 200/2) -1
#define TIEMPOY  3

class View;
class Arena:public Screen {
	ViewCriature* player;
	ViewCriature* npc;
	View* view;
	double battleTime;

	void updateState(ViewCriature* criature, int life, int streingth, double speed, ViewCriature* criatureb,bool targetIdSelf);
public:
	Arena(View*, ViewCriature*, ViewCriature*);
	~Arena();
	void updateEvents(std::string);
	void update();
	void updateTime(int);
	void setBattleTime(double time);
	ViewCriature* getPlayer();
	ViewCriature* getNPC();	
};
#endif // !ARENA_H
