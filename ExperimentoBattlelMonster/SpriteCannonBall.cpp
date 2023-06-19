#include "SpriteCannonBall.h"
#include <iostream>

SpriteCannonBall::SpriteCannonBall() : Screen(200, 48) {

}

void SpriteCannonBall::update() {

}

void SpriteCannonBall::drawCriature(int x, int y) {	
	gotoxy(x, y);		std::cout << "                                  ^:              " << std::endl;
	gotoxy(x, y + 1);	std::cout << "                                 .GJB5            " << std::endl;
	gotoxy(x, y + 2);	std::cout << "                        .775#PG#57~~#P            " << std::endl;
	gotoxy(x, y + 3);	std::cout << "                       ^@@@@@@@@@@&!.             " << std::endl;
	gotoxy(x, y + 4);	std::cout << "                       .JG#@&&#&&!^               " << std::endl;
	gotoxy(x, y + 5);	std::cout << "                     ^  . ?&##B@@BB~~.            " << std::endl;
	gotoxy(x, y + 6);	std::cout << "                   .?Y?JJ ^&&B5GP55~YY:           " << std::endl;
	gotoxy(x, y + 7);	std::cout << "                  .!YJYYY. ~?~      :YJ           " << std::endl;
	gotoxy(x, y + 8);	std::cout << "             .  .  .7JJYJ?~.        .YY.          " << std::endl;
	gotoxy(x, y + 9);	std::cout << "         :!?Y@7J&!!???JYYYY7~       757           " << std::endl;
	gotoxy(x, y + 10);	std::cout << "        ~?YYJ&BY@J!~!P5JYYYY?     :JY!            " << std::endl;
	gotoxy(x, y + 11);	std::cout << "         ^?7::J.~..!YYB?JYYYY?!~7YY!.             " << std::endl;
	gotoxy(x, y + 12);	std::cout << "                  7JJJJJYYYJ~~~~~.                " << std::endl;
	gotoxy(x, y + 13);	std::cout << "                  ^!!~777?J?~^:~~.                " << std::endl;
	gotoxy(x, y + 14);	std::cout << "                   ^!^~!J7..~!!7.                 " << std::endl;
	gotoxy(x, y + 15);	std::cout << "                   :^:.:.   ...                   " << std::endl;
}