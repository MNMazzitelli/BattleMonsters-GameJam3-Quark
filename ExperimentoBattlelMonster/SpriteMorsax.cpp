#include "SpriteMorsax.h"
#include <iostream>

SpriteMorsax::SpriteMorsax() : Screen(200, 48) {

}

void SpriteMorsax::update() {

}

void SpriteMorsax::drawCriature(int x, int y) {
	gotoxy(x, y);		std::cout << "                                  .^Y?JYJ7?~.     " << std::endl;
	gotoxy(x, y + 1);	std::cout << "                                .!!~557~~7Y?Y.    " << std::endl;
	gotoxy(x, y + 2);	std::cout << "                              .!J?~~~J?7Y77Y?     " << std::endl;
	gotoxy(x, y + 3);	std::cout << "                            .77Y!J~~~75~!!57^     " << std::endl;
	gotoxy(x, y + 4);	std::cout << "                   .......^!?P!?J!!~~~~7:?7^^^    " << std::endl;
	gotoxy(x, y + 5);	std::cout << "              .:~~!JJ77!?5J!!!JJ77?7!!!7~!Y ^~.   " << std::endl;
	gotoxy(x, y + 6);	std::cout << "           .~!!!~~7!~~~??Y~~~~!?7~!?7??!?^Y  ~^   " << std::endl;
	gotoxy(x, y + 7);	std::cout << "          !!7?~~~!!~~~!7J!~~~~~~7?7??7!!!?!  .!   " << std::endl;
	gotoxy(x, y + 8);	std::cout << "         7!7^~7!~!~~J!!J7~~~!7!~77!77?JJJJY:      " << std::endl;
	gotoxy(x, y + 9);	std::cout << "        7?!!~^!JJ~~~7J7P??!!!7?J!7!7!7??7J.       " << std::endl;
	gotoxy(x, y + 10);	std::cout << "        7J77?!~~57~~~?JG7777!~?J7!!77~7~J7        " << std::endl;
	gotoxy(x, y + 11);	std::cout << "  .:^^~!?5J?7?77G7~~~!?Y7???7!!?777!!J?Y?!        " << std::endl;
	gotoxy(x, y + 12);	std::cout << "  :!?J?J?JJ?7777~^~!!!7PJJ7~~!~77JJJYJ557?!!~:.   " << std::endl;
	gotoxy(x, y + 13);	std::cout << "         ..       ..~7JYY?J?~~!5J???!~~77!~~!~^^  " << std::endl;
	gotoxy(x, y + 14);	std::cout << "               ^5JJJJ7~~~~77!!!.                  " << std::endl;
	gotoxy(x, y + 15);	std::cout << "                7PYJYJ777!~^:.                    " << std::endl;
}