#pragma once
#include "Creature.h"
#include "View.h"
#include "Menus.h"
#include "SoundManager.h"


class View;
class GameManager{
private:
	Creature* player;
	Creature* npc;
	View* view;
	Menus* mn;
public:
	GameManager();
	~GameManager();
	void mainTitle();
	void mainBattle();
	void mainPause();
	Creature* selector(int);
	Creature* getPlayer() { return this->player; }
	Creature* getNpc() { return this->npc; }
	void bucleMenu();
	void playerSelector();
	void mostrarResultado(bool);
};

