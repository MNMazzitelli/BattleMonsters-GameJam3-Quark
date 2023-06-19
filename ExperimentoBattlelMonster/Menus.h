#pragma once
#include "Screen.h"

class Menus : public Screen
{
private:
	int monsterSelection;
public:
	Menus():Screen(200, 48){};
	~Menus() {};
	void update() {};

	void mainTitle();
	void mainTutorial();
	void mainSelection();
	void setMonsterSelection(int selection){
		this->monsterSelection = selection;
	}
	int getMonsterSelection() {
		return monsterSelection;
	}
	void mainPause();
	void gameOver();

	void eraseView();
	void printDracore();
	void printMythosaur();
	void printEreblin();
	void printAgrios();
	void printCannonBall();
	void printMorsax();
	void mainGetReady();
	void GameOrExit();
	void gameVictory();
	void parpadeoGameOrExit();
};

