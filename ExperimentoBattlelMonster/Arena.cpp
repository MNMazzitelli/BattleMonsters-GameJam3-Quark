#include "Arena.h"

Arena::Arena(View* view, ViewCriature* player, ViewCriature* npc):Screen(200,48) {
	this->player = player;
	this->npc = npc;
	this->view = view;
	battleTime = 0;
}

void Arena::update() {
	updateState(player, view->getGameManager()->getPlayer()->getLife(),
		view->getGameManager()->getPlayer()->getStrength(), view->getGameManager()->getPlayer()->getSpeed(), npc,view->getPlayerItself());
	player->draw();
	player->updateEvent(battleTime,35);
	player->updateTurnBar(battleTime);


	updateState(npc, view->getGameManager()->getNpc()->getLife(),
		view->getGameManager()->getNpc()->getStrength(), view->getGameManager()->getNpc()->getSpeed(),player, view->getNpcItself());
	npc->draw();
	npc->updateEvent(battleTime, -60);
	npc->updateTurnBar(battleTime);
}

void Arena::updateEvents(std::string event) {
	
}

void Arena::updateTime(int time) {
	gotoxy(TIEMPOX, TIEMPOY); cout << time;
//	this->tiempo = time;
}

void Arena::updateState(ViewCriature* criature,int life ,int strength,double speed, ViewCriature* criatureb,bool targetItSelf) {
	criature->getLife() == life ? criature->setLifeDistanceAmount() : criature->downUpLife(criature->getLife() - life, battleTime, criatureb,targetItSelf);
	criature->getStrength() == strength ? criature->setStrengthDistanceAmount(): criature->downUpStrength(criature->getStrength() - strength,battleTime,criatureb, targetItSelf);
	criature->getSpeed() == speed ? criature->setSpeedDistanceAmount() : criature->downUpSpeed(criature->getSpeed() - speed, battleTime, criatureb, targetItSelf);
}

void Arena::setBattleTime(double time) {
	this->battleTime = time;
}

ViewCriature* Arena::getPlayer() {
	return this->player;
}
ViewCriature* Arena::getNPC() {
	return this->npc;
}

Arena::~Arena() {
	view = nullptr;
	delete player;
	delete npc;	
}