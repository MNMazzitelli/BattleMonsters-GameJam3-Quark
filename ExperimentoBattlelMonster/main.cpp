#include "GameManager.h"

int main() {
//	setlocale(LC_ALL, "");
	GameManager* gm = new GameManager();
	gm->mainTitle();
	//gm->mainBattle();

	delete gm;
	exit;
	return 0;
}