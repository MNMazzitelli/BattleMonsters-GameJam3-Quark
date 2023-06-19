#pragma once
#ifndef VIEW_H
#define VIEW_H
#include "Arena.h"
#include "GameManager.h"

class Arena;
class GameManager;
class View {
	Arena* arena;
	GameManager* gameManager;
	bool playerItseflt;
	bool  NpcItseflt;
public:
	View(GameManager*);
	~View();
	View* getView();
	void updateArena();
	Arena* getArena();
	GameManager* getGameManager();
	void setPlayerItself(bool);
	bool getPlayerItself();
	void setNpcItself(bool);
	bool getNpcItself();
	
};
#endif // !VIEW_H
