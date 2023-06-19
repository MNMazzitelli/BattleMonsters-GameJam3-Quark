#include "SpriteAgrios.h"
#include <iostream>

SpriteAgrios::SpriteAgrios() : Screen(200, 48) {

}

void SpriteAgrios::update() {

}

void SpriteAgrios::drawCriature(int x, int y) {	
	gotoxy(x, y);		std::cout << "                    .:^!!777!^:.                  " << std::endl;
	gotoxy(x, y + 1);	std::cout << "           ..   :~?JYPGGGBBBBGGGPJ~               " << std::endl;
	gotoxy(x, y + 2);	std::cout << "     ..^!?JJJJJYGBGGGGGGGGPPGB###BBG!             " << std::endl;
	gotoxy(x, y + 3);	std::cout << "   ~JG#BP5P5P#BGGGPGGGBBGPPGB###YJGBG5^           " << std::endl;
	gotoxy(x, y + 4);	std::cout << ".^!!5B#G5PBGBGGGPPPPPGBGPPGB#B&#J5#GBGGJ.         " << std::endl;
	gotoxy(x, y + 5);	std::cout << ".!??J5YY5GBGPGBGPP5Y55GP#&&&&&&#JY&5GGY5Y^        " << std::endl;
	gotoxy(x, y + 6);	std::cout << "  .^!JYPBPJJJ5GP555Y5&@@@&&##BBG?J##PGGPGPJ~.     " << std::endl;
	gotoxy(x, y + 7);	std::cout << "       .:^~!!5P7?7J?YJ?!~~~7?JJBJ7J&&&##BBB#&#B5G&" << std::endl;
	gotoxy(x, y + 8);	std::cout << "             :Y:  ~Y^ .:?G##B#GG7~7:..     !B&@P.:" << std::endl;
	gotoxy(x, y + 9);	std::cout << "              .J.!57?B&BGP?:  .              ^?57 " << std::endl;
	gotoxy(x, y + 10);	std::cout << "              :7~J&#BJ^.                      .~Y^" << std::endl;
	gotoxy(x, y + 11);	std::cout << "            .!PB?JJ.                      ..   :??" << std::endl;
	gotoxy(x, y + 12);	std::cout << "YYJ!7^..:~~YB&#Y::                     .7PGP7. !5~" << std::endl;
	gotoxy(x, y + 13);	std::cout << "7JJYBBB#&&BP?:                         7GBJJ5~?BJ " << std::endl;
	gotoxy(x, y + 14);	std::cout << "      :!~.                             .JPPPPYY~  " << std::endl;
	gotoxy(x, y + 15);	std::cout << "                                         .:::.    " << std::endl;
}