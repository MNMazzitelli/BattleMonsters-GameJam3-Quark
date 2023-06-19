#pragma once
#ifndef DAMAGEVIEWS_H
#define DAMAGEVIEW_H

#include "Screen.h"
#include "ViewCriature.h"


class DamageView:public Screen {
public:
	DamageView() :Screen(200, 48) {};
	void getDamage(ViewCriature* criature) {
		system("color 7E");
		Sleep(20);
		//criature->eraseStats();
		//criature->setGetDamageMove(5);
		system("color 0F");
		//criature->draw();
		Sleep(20);
		
		system("color 7E");
		Sleep(20); 
		//criature->eraseStats();
		////criature->setGetDamageMove(-5);
		//criature->draw();
		system("color 0F");
		Sleep(20);
		//criature->eraseStats();
		////criature->setGetDamageMove(0);
		//criature->draw();
	}

	void update() {};
};


#endif // !DAMAGEVIEWS_H
