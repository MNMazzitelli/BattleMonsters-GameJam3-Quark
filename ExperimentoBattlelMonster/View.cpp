#include "View.h"

#define PLAYERX  7
#define PLAYERY  5 + 2
#define NPCX  200- 30
#define NPCY  48 - 12

using namespace std;

View::View(GameManager* gameManager) {
	string* hablilidadesPlayer[4] = {
		new string(gameManager->getPlayer()->getMovement(0)->getName()),
		new string(gameManager->getPlayer()->getMovement(1)->getName()),
	    new string(gameManager->getPlayer()->getMovement(2)->getName()),
		new string(gameManager->getPlayer()->getMovement(3)->getName()) 
	};
	string* hablilidadesNpc[4] = { 
		new string(gameManager->getNpc()->getMovement(0)->getName()),
		new string(gameManager->getNpc()->getMovement(1)->getName()),
		new string(gameManager->getNpc()->getMovement(2)->getName()),
		new string(gameManager->getNpc()->getMovement(3)->getName()) 
	};

	this->gameManager = gameManager;
	arena = new Arena(
		this,
		new ViewCriature(
			PLAYERX,
			PLAYERY,
			gameManager->getPlayer()->getName(),
			gameManager->getPlayer()->getLife(),
			gameManager->getPlayer()->getStrength(),
			gameManager->getPlayer()->getSpeed(),
			hablilidadesPlayer,
			gameManager->getPlayer()->getSprite(),
			130, 7
		),
		new ViewCriature(
			NPCX, 
			NPCY, 
			gameManager->getNpc()->getName(),
			gameManager->getNpc()->getLife(), 
			gameManager->getNpc()->getStrength(), 
			gameManager->getNpc()->getSpeed(),
		    hablilidadesNpc,
			gameManager->getNpc()->getSprite(),
			45, 28
	)
	);

}

View* View::getView() {
	return this;
}

void View::updateArena() {
	arena->update();
}

Arena* View::getArena() {
	return this->arena;
}

GameManager* View::getGameManager() {
	return gameManager;
}

void View::setPlayerItself(bool itselft) {
	this->playerItseflt = itselft;
}

bool View::getPlayerItself() {
	return this->playerItseflt;
}

void View::setNpcItself(bool itselft) {
	this->NpcItseflt = itselft;
}

bool View::getNpcItself() {
	return this->NpcItseflt;
}

View::~View() {
	gameManager = nullptr;
	delete arena;	
}
