#include "SpriteMythosaur.h"
#include <iostream>

SpriteMythosaur::SpriteMythosaur() : Screen(200, 48) {

}

void SpriteMythosaur::update() {

}

void SpriteMythosaur::drawCriature(int x, int y) {
	gotoxy(x, y);		std::cout << "    .                                             " << std::endl;
	gotoxy(x, y + 1);	std::cout << "    ^#^    .:.                                    " << std::endl;
	gotoxy(x, y + 2);	std::cout << ":7 ^J#@BPP5JY#BG5BGY^.                            " << std::endl;
	gotoxy(x, y + 3);	std::cout << " 7P#PGB&@&##BB#&&&&&&##?:                         " << std::endl;
	gotoxy(x, y + 4);	std::cout << "  .Y5JP##&&GGB#&&&&##&#&&#5~::.                   " << std::endl;
	gotoxy(x, y + 5);	std::cout << "   ~7?B####B#&&#BB#&&#&@&&#####BGGJ:              " << std::endl;
	gotoxy(x, y + 6);	std::cout << "     .:^75#&&&&&#BB##&#&#####B&&&&&BY~.           " << std::endl;
	gotoxy(x, y + 7);	std::cout << "           .~?5B##&&@BG##&&&##&&###BBBBP7:        " << std::endl;
	gotoxy(x, y + 8);	std::cout << "               .^7JGB7~#&&####&&&&##BGBBBB5.      " << std::endl;
	gotoxy(x, y + 9);	std::cout << "                  .~?5GBJB#B#&&&&&##BBB#BBBB      " << std::endl;
	gotoxy(x, y + 10);	std::cout << "                   .7^7J?~GBB####B&####GPGB#7     " << std::endl;
	gotoxy(x, y + 11);	std::cout << "                    PY~  :YP!     ^YGBB&P75GB     " << std::endl;
	gotoxy(x, y + 12);	std::cout << "                    :~. .~JPJ.      .^?5#!^B&G~   " << std::endl;
	gotoxy(x, y + 13);	std::cout << "                     :PYGPG!          !7^B:^?YY   " << std::endl;
	gotoxy(x, y + 14);	std::cout << "                    ^P?#~~B         :!5Y~JG7      " << std::endl;
	gotoxy(x, y + 15);	std::cout << "                       ~  .         ^. ?.  :      " << std::endl;
}