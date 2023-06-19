#include "SpriteEreblin.h"
#include <iostream>

SpriteEreblin::SpriteEreblin() : Screen(200, 48) {

}

void SpriteEreblin::update() {

}

void SpriteEreblin::drawCriature(int x, int y) {
	gotoxy(x, y);		std::cout << "              ^::: .                              " << std::endl;
	gotoxy(x, y + 1);	std::cout << "            :!7?YYJ7                              " << std::endl;
	gotoxy(x, y + 2);	std::cout << "           ~!7JJ?7YP5^                            " << std::endl;
	gotoxy(x, y + 3);	std::cout << "          ^~~J5YYY5PPG5!:.                        " << std::endl;
	gotoxy(x, y + 4);	std::cout << "          .~?5J7J555PP#G!7?~::.                   " << std::endl;
	gotoxy(x, y + 5);	std::cout << "           ^!!~75P5PGGG!^!J!!55~^:.               " << std::endl;
	gotoxy(x, y + 6);	std::cout << "           .~~JY55GGP55PY7!7?55??JJ7~:.           " << std::endl;
	gotoxy(x, y + 7);	std::cout << "            :~7JYYPPPPPGGPPY?!!77!!777?7!.        " << std::endl;
	gotoxy(x, y + 8);	std::cout << "             ^~J5555555555PPGPJ!!!!!!!!!7^        " << std::endl;
	gotoxy(x, y + 9);	std::cout << "             .^!JYYJ?7JYYYY5PGBGGPPJ!^^~!^        " << std::endl;
	gotoxy(x, y + 10);	std::cout << "              .:~!JY5?!777JYPGGGGGGGP?^           " << std::endl;
	gotoxy(x, y + 11);	std::cout << "              ....!Y5J~7??JY55PPP555YJ:           " << std::endl;
	gotoxy(x, y + 12);	std::cout << "               .  ^JJ..:~~!?JYYYYY55P~            " << std::endl;
	gotoxy(x, y + 13);	std::cout << "              ..  .7!    .^!7???JY5P5             " << std::endl;
	gotoxy(x, y + 14);	std::cout << "            .:^   :??     .:^~:^!!!?:             " << std::endl;
	gotoxy(x, y + 15);	std::cout << "                 ~!!:                             " << std::endl;
}