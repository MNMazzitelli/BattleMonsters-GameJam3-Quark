#include "Menus.h"
#include <iostream>
#include <conio.h>
#include "SoundManager.h"

#define IZQUIERDA 75
#define DERECHA 77

void Menus::mainTitle() {

	SoundManager snd;
	snd.getMusic(L"Sounds\\Music-MainTitle.wav");

	//Menu de inicio
	gotoxy(40, 5);	std::cout << "                ###########      ##########     ############    ############    ##              ############                " << std::endl;	Sleep(300);
	gotoxy(40, 6);  std::cout << "                ############    ############     ##########      ##########     ##              ###########                 " << std::endl;   Sleep(300);
	gotoxy(40, 7);  std::cout << "                ##        ##    ##        ##         ##              ##         ##              ##                          " << std::endl;   Sleep(300);
	gotoxy(40, 8);  std::cout << "                ##        ##    ##        ##         ##              ##         ##              ##                          " << std::endl;   Sleep(300);
	gotoxy(40, 9);  std::cout << "                ##        ##    ##        ##         ##              ##         ##              ##                          " << std::endl;   Sleep(300);
	gotoxy(40, 10); std::cout << "                ############    ############         ##              ##         ##              #########                   " << std::endl;	Sleep(300);
	gotoxy(40, 11); std::cout << "                ############    ############         ##              ##         ##              #########                   " << std::endl;	Sleep(300);
	gotoxy(40, 12); std::cout << "                ##        ##    ##        ##         ##              ##         ##              ##                          " << std::endl;	Sleep(300);
	gotoxy(40, 13); std::cout << "                ##        ##    ##        ##         ##              ##         ##              ##                          " << std::endl;	Sleep(300);
	gotoxy(40, 14); std::cout << "                ##        ##    ##        ##         ##              ##         ##              ##                          " << std::endl;	Sleep(300);
	gotoxy(40, 15); std::cout << "                ##        ##    ##        ##         ##              ##         ##              ##                          " << std::endl;	Sleep(300);
	gotoxy(40, 16); std::cout << "                ############    ##        ##         ##              ##         ############    ##########                  " << std::endl;	Sleep(300);
	gotoxy(40, 17);	std::cout << "                ############    ##        ##         ##              ##         ############    ###########                 " << std::endl;	Sleep(300);
	
	gotoxy(40, 20); std::cout << "##        ##     ##########     ##        ##    ############    ############    ############    ############    ############" << std::endl;	Sleep(300);
	gotoxy(40, 21);	std::cout << "###      ###    ############    ###       ##    ############    ############    ############    ############    ############" << std::endl;	Sleep(300);
	gotoxy(40, 22); std::cout << "####    ####    ##        ##    ####      ##    ##                   ##         ##              ##        ##    ##          " << std::endl;	Sleep(300);
	gotoxy(40, 23); std::cout << "## ##  ## ##    ##        ##    ## ##     ##    ##                   ##         ##              ##        ##    ##          " << std::endl;	Sleep(300);
	gotoxy(40, 24); std::cout << "##  ####  ##    ##        ##    ##  ##    ##    ##                   ##         ##              ##        ##    ##          " << std::endl;	Sleep(300);
	gotoxy(40, 25);	std::cout << "##   ##   ##    ##        ##    ##   ##   ##    ############         ##         #########       ############    ############" << std::endl;	Sleep(300);
	gotoxy(40, 26);	std::cout << "##        ##    ##        ##    ##    ##  ##    ############         ##         #########       ############    ############" << std::endl;	Sleep(300);
	gotoxy(40, 27);	std::cout << "##        ##    ##        ##    ##     ## ##              ##         ##         ##              ####                      ##" << std::endl;	Sleep(300);
	gotoxy(40, 28); std::cout << "##        ##    ##        ##    ##      ####              ##         ##         ##              ## ###                    ##" << std::endl;	Sleep(300);
	gotoxy(40, 29); std::cout << "##        ##    ##        ##    ##       ###              ##         ##         ##              ##   ##                   ##" << std::endl;	Sleep(300);
	gotoxy(40, 30);	std::cout << "##        ##    ##        ##    ##        ##              ##         ##         ##              ##   ###                  ##" << std::endl;	Sleep(300);
	gotoxy(40, 31);	std::cout << "##        ##    ############    ##              ############         ##         ############    ##     ###      ############" << std::endl;	Sleep(300);
	gotoxy(40, 32);	std::cout << "##        ##     ##########     ##              ############         ##         ############    ##       ##     ############" << std::endl;	Sleep(900);

	bool init = false;

	while (!init) {
		gotoxy(60, 36); 	std::cout << "#### #### #### #### ####   ####   #### ####   #### #### #  # #### ## #  # #  # ####" << std::endl;
		gotoxy(60, 37);		std::cout << "#  # #  # #    #    #      #  #    ##  #  #   #    #  # ## #  ##  ## ## # #  # #   " << std::endl;
		gotoxy(60, 38);		std::cout << "#### #### ###  #### ####   ####    ##  #  #   #    #  # # ##  ##  ## # ## #  # ### " << std::endl;
		gotoxy(60, 39);		std::cout << "#    # #  #       #    #   #  #    ##  #  #   #    #  # #  #  ##  ## #  # #  # #   " << std::endl;
		gotoxy(60, 40);		std::cout << "#    #  # #### #### ####   #  #    ##  ####   #### #### #     ##  ## #    #### ####" << std::endl;
		Sleep(400);

		gotoxy(60, 36);		std::cout << "                                                                                        " << std::endl;
		gotoxy(60, 37);		std::cout << "                                                                                        " << std::endl;
		gotoxy(60, 38);		std::cout << "                                                                                        " << std::endl;
		gotoxy(60, 39);		std::cout << "                                                                                        " << std::endl;
		gotoxy(60, 40);		std::cout << "                                                                                        " << std::endl;
		Sleep(400);

		if (_kbhit()) {
			char tecla = _getch();
			if (tecla == 'a' || tecla == 'A') {
				snd.getSound(L"Sounds\\Sound-Menu(SelectionPush).wav");
				//sonido recuperacion
				init = true;
			}
		}
	}

	mainTutorial();
}

void Menus::mainTutorial() {
	for (int y = 0; y < 200; y++) {
		gotoxy(0, y);
		std::cout << "                                                                                                                                                                                                                                                                                                              ";
	}
	bool init = false;
	SoundManager snd;

			gotoxy(28, 5);	std::cout << "                                                          #### #### #  # #### #### #### #    ####                                                          " << std::endl;
			gotoxy(28, 6);	std::cout << "                                                          #    #  # ## #  ##  #  # #  # #    #                                                             " << std::endl;
			gotoxy(28, 7);	std::cout << "                                                          #    #  # # ##  ##  #### #  # #    ####                                                          " << std::endl;
			gotoxy(28, 8);   std::cout << "                                                          #    #  # #  #  ##  # #  #  # #       #                                                          " << std::endl;
			gotoxy(28, 9);	std::cout << "                                                          #### #### #     ##  #  # #### #### ####                                                          " << std::endl;
										                              																										                         
										                              																										                         
			gotoxy(28, 12);	std::cout << "                            #  # #### ####  #### #  # ####  #### #### #### #### # # # ####  #### ####  #### #  # #### #### #### ####                       " << std::endl;
			gotoxy(28, 13);	std::cout << "                            #  # #    #      ##  #  # #     #  # #  # #  # #  # # # # #      ##  #  #  #    #  # #  # #  # #    #                          " << std::endl;
			gotoxy(28, 14);	std::cout << "                            #  # #### ###    ##  #### ###   #### #### #### #  # # # # ####   ##  #  #  #    #### #  # #  # #### ###                        " << std::endl;
			gotoxy(28, 15);	std::cout << "                            #  #    # #      ##  #  # #     #  # # #  # #  #  # ## ##    #   ##  #  #  #    #  # #  # #  #    # #                          " << std::endl;
			gotoxy(28, 16);	std::cout << "                            #### #### ####   ##  #  # ####  #  # #  # #  # #### #   # ####   ##  ####  #### #  # #### #### #### ####                       " << std::endl;
										                              																										                         
			gotoxy(28, 18);	std::cout << "                                                        #    #### #### ####      #### ## #### #  # ####                                                    " << std::endl;
			gotoxy(28, 19);	std::cout << "                                                        #    #    #     ##       #  # ## #    #  #  ##                                                     " << std::endl;
			gotoxy(28, 20);	std::cout << "                                                        #    ###  ###   ##       #### ## # ## ####  ##                                                     " << std::endl;
			gotoxy(28, 21);	std::cout << "                                                        #    #    #     ##       # #  ## #  # #  #  ##                                                     " << std::endl;
			gotoxy(28, 22);	std::cout << "                                                        #### #### #     ##       #  # ## #### #  #  ##                                                     " << std::endl;
											                            				      												                                                         
			gotoxy(28, 24);	std::cout << "                                                               ##                            ##                                                            " << std::endl;
			gotoxy(28, 25);	std::cout << "                                                              ###                            ###                                                           " << std::endl;
			gotoxy(28, 26);	std::cout << "                                                             #########                  #########                                                          " << std::endl;
			gotoxy(28, 27);	std::cout << "                                                              ###                            ###                                                           " << std::endl;
			gotoxy(28, 28);	std::cout << "                                                               ##                            ##                                                            " << std::endl;

			_getch();
			for (int y = 0; y < 100; y++) {
				gotoxy(0, y);
				std::cout << "                                                                                                                                                                                                                                                                                                                                         ";
			}
			gotoxy(28, 5);	std::cout << "                                                          #### #### #  # #### #### #### #    ####                                                          " << std::endl;
			gotoxy(28, 6);	std::cout << "                                                          #    #  # ## #  ##  #  # #  # #    #                                                             " << std::endl;
			gotoxy(28, 7);	std::cout << "                                                          #    #  # # ##  ##  #### #  # #    ####                                                          " << std::endl;
			gotoxy(28, 8);   std::cout << "                                                          #    #  # #  #  ##  # #  #  # #       #                                                          " << std::endl;
			gotoxy(28, 9);	std::cout << "                                                          #### #### #     ##  #  # #### #### ####                                                          " << std::endl;

			gotoxy(28, 12);	std::cout << "                                               #  # #### ####  # #### #  #### ####  #### #### #  # #### ####                                               " << std::endl;
			gotoxy(28, 13);	std::cout << "                                               #  # #    #       #  #     ##  #  #  #  # #  # #  # #    #                                                  " << std::endl;
			gotoxy(28, 14);	std::cout << "                                               #  # #### ###     ####     ##  #  #  #### #### #  # #### ###                                                " << std::endl;
			gotoxy(28, 15);	std::cout << "                                               #  #    # #       #  #     ##  #  #  #    #  # #  #    # #                                                  " << std::endl;
			gotoxy(28, 16);	std::cout << "                                               #### #### ####    ####     ##  ####  #    #  # #### #### ####                                               " << std::endl;
										                                                 																						                  
			gotoxy(28, 18);	std::cout << "                                      #### #  # ###   # #### #  #### ####   #### #### #  # #### ## #  # #  # ####                                          " << std::endl;
			gotoxy(28, 19);	std::cout << "                                      #  # ## # #  #    #  #     ##  #  #   #    #  # ## #  ##  ## ## # #  # #                                             " << std::endl;
			gotoxy(28, 20);	std::cout << "                                      #### # ## #  #    ####     ##  #  #   #    #  # # ##  ##  ## # ## #  # ###                                           " << std::endl;
			gotoxy(28, 21);	std::cout << "                                      #  # #  # #  #    #  #     ##  #  #   #    #  # #  #  ##  ## #  # #  # #                                             " << std::endl;
			gotoxy(28, 22);	std::cout << "                                      #  # #    ###     #  #     ##  ####   #### #### #     ##  ## #    #### ####                                          " << std::endl;
										           
			gotoxy(28, 24);	std::cout << "#  # #### ####  #### #  # ####  #  # #  # #   # #### #### #### #### #### ####  #### #### ####  #### #  # ####  #   # #### #     # #### #   # #### #  # ####" << std::endl;
			gotoxy(28, 25);	std::cout << "#  # #    #      ##  #  # #     ## # #  # ## ## #  # #    #  # #     ##  #  #  #    #     ##    ##  #  # #     ## ## #  # #     # #    ## ## #    ## #  ## " << std::endl;
			gotoxy(28, 26);	std::cout << "#  # #### ###    ##  #### ###   # ## #  # # # # #### ###  #### ####  ##  #  #  #### ###   ##    ##  #### ###   # # # #  #  #   #  ###  # # # ###  # ##  ## " << std::endl;
			gotoxy(28, 27);	std::cout << "#  #    # #      ##  #  # #     #  # #  # #   # #  # #    # #     #  ##  #  #     # #     ##    ##  #  # #     #   # #  #   # #   #    #   # #    #  #  ## " << std::endl;
			gotoxy(28, 28);	std::cout << "#### #### ####   ##  #  # ####  #    #### #   # #### #### #  # ####  ##  ####  #### ####  ##    ##  #  # ####  #   # ####    #    #### #   # #### #     ## " << std::endl;

			while (!init) {
				gotoxy(60, 31); 	std::cout << "   #### #### #### #### ####   ####   #### ####   #### #### #  # #### ## #  # #  # ####" << std::endl;
				gotoxy(60, 32);		std::cout << "   #  # #  # #    #    #      #  #    ##  #  #   #    #  # ## #  ##  ## ## # #  # #   " << std::endl;
				gotoxy(60, 33);		std::cout << "   #### #### ###  #### ####   ####    ##  #  #   #    #  # # ##  ##  ## # ## #  # ### " << std::endl;
				gotoxy(60, 34);		std::cout << "   #    # #  #       #    #   #  #    ##  #  #   #    #  # #  #  ##  ## #  # #  # #   " << std::endl;
				gotoxy(60, 35);		std::cout << "   #    #  # #### #### ####   #  #    ##  ####   #### #### #     ##  ## #    #### ####" << std::endl;	Sleep(400);
					   
				gotoxy(60, 31);		std::cout << "                                                                                       " << std::endl;
				gotoxy(60, 32);		std::cout << "                                                                                       " << std::endl;
				gotoxy(60, 33);		std::cout << "                                                                                       " << std::endl;
				gotoxy(60, 34);		std::cout << "                                                                                       " << std::endl;
				gotoxy(60, 35);		std::cout << "                                                                                       " << std::endl;	Sleep(400);

				if (_kbhit()) {
					char tecla = _getch();
					if (tecla == 'a' || tecla == 'A') {
						snd.getSound(L"Sounds\\Sound-Menu(SelectionPush).wav");
						init = true;
					}
				}
			}
			//mainSelection();
}

void Menus::mainSelection() {
	SoundManager snd;

	for (int y = 0; y < 49; y++) {
		gotoxy(0, y);
		std::cout << "                                                                                                                                                                                                                                                                                                  ";
	}
	int selection = 1;
	bool next = false;

	gotoxy(52, 5);	std::cout << "#### #  # #### #### #### ####   #  # #### #  # ####   #### #  # #### #### #### #### #### #### ####" << std::endl;
	gotoxy(52, 6);	std::cout << "#    #  # #  # #  # #    #      #  # #  # #  # #  #   #    #  # #  # #  # #  # #     ##  #    #  #" << std::endl;
	gotoxy(52, 7);	std::cout << "#    #### #  # #  # #### ###     ##  #  # #  # ####   #    #### #### #### #### #     ##  ###  ####" << std::endl;
	gotoxy(52, 8);	std::cout << "#    #  # #  # #  #    # #       ##  #  # #  # # #    #    #  # #  # # #  #  # #     ##  #    # # " << std::endl;
	gotoxy(52, 9);	std::cout << "#### #  # #### #### #### ####    ##  #### #### #  #   #### #  # #  # #  # #  # ####  ##  #### #  #" << std::endl;

	printDracore();
	printMythosaur();
	printEreblin();

	switch (selection) {
	case 1:
		eraseView();
		printDracore();
		printMythosaur();
		printEreblin();

		gotoxy(13, 13); std::cout << "######################################################";
		gotoxy(13, 14); std::cout << "#"; gotoxy(66, 14); std::cout << "#";
		gotoxy(13, 15); std::cout << "#"; gotoxy(66, 15); std::cout << "#";
		gotoxy(13, 16); std::cout << "#"; gotoxy(66, 16); std::cout << "#";
		gotoxy(13, 17); std::cout << "#"; gotoxy(66, 17); std::cout << "#";
		gotoxy(13, 18); std::cout << "#"; gotoxy(66, 18); std::cout << "#";
		gotoxy(13, 19); std::cout << "#"; gotoxy(66, 19); std::cout << "#";
		gotoxy(13, 20); std::cout << "#"; gotoxy(66, 20); std::cout << "#";
		gotoxy(13, 21); std::cout << "#"; gotoxy(66, 21); std::cout << "#";
		gotoxy(13, 22); std::cout << "#"; gotoxy(66, 22); std::cout << "#";
		gotoxy(13, 23); std::cout << "#"; gotoxy(66, 23); std::cout << "#";
		gotoxy(13, 24); std::cout << "#"; gotoxy(66, 24); std::cout << "#";
		gotoxy(13, 25); std::cout << "#"; gotoxy(66, 25); std::cout << "#";
		gotoxy(13, 26); std::cout << "#"; gotoxy(66, 26); std::cout << "#";
		gotoxy(13, 27); std::cout << "#"; gotoxy(66, 27); std::cout << "#";
		gotoxy(13, 28); std::cout << "#"; gotoxy(66, 28); std::cout << "#";
		gotoxy(13, 29); std::cout << "#"; gotoxy(66, 29); std::cout << "#";
		gotoxy(13, 30); std::cout << "#"; gotoxy(66, 30); std::cout << "#";
		gotoxy(13, 31); std::cout << "#"; gotoxy(66, 31); std::cout << "#";
		gotoxy(13, 32); std::cout << "######################################################";
		break;
	case 2:
		eraseView();
		printDracore();
		printMythosaur();
		printEreblin();

		gotoxy(73, 13); std::cout << "######################################################";
		gotoxy(73, 14); std::cout << "#"; gotoxy(126, 14); std::cout << "#";
		gotoxy(73, 15); std::cout << "#"; gotoxy(126, 15); std::cout << "#";
		gotoxy(73, 16); std::cout << "#"; gotoxy(126, 16); std::cout << "#";
		gotoxy(73, 17); std::cout << "#"; gotoxy(126, 17); std::cout << "#";
		gotoxy(73, 18); std::cout << "#"; gotoxy(126, 18); std::cout << "#";
		gotoxy(73, 19); std::cout << "#"; gotoxy(126, 19); std::cout << "#";
		gotoxy(73, 20); std::cout << "#"; gotoxy(126, 20); std::cout << "#";
		gotoxy(73, 21); std::cout << "#"; gotoxy(126, 21); std::cout << "#";
		gotoxy(73, 22); std::cout << "#"; gotoxy(126, 22); std::cout << "#";
		gotoxy(73, 23); std::cout << "#"; gotoxy(126, 23); std::cout << "#";
		gotoxy(73, 24); std::cout << "#"; gotoxy(126, 24); std::cout << "#";
		gotoxy(73, 25); std::cout << "#"; gotoxy(126, 25); std::cout << "#";
		gotoxy(73, 26); std::cout << "#"; gotoxy(126, 26); std::cout << "#";
		gotoxy(73, 27); std::cout << "#"; gotoxy(126, 27); std::cout << "#";
		gotoxy(73, 28); std::cout << "#"; gotoxy(126, 28); std::cout << "#";
		gotoxy(73, 29); std::cout << "#"; gotoxy(126, 29); std::cout << "#";
		gotoxy(73, 30); std::cout << "#"; gotoxy(126, 30); std::cout << "#";
		gotoxy(73, 31); std::cout << "#"; gotoxy(126, 31); std::cout << "#";
		gotoxy(73, 32); std::cout << "######################################################";
		break;
	case 3:
		eraseView();
		printDracore();
		printMythosaur();
		printEreblin();

		gotoxy(133, 13); std::cout << "######################################################";
		gotoxy(133, 14); std::cout << "#"; gotoxy(186, 14); std::cout << "#";
		gotoxy(133, 15); std::cout << "#"; gotoxy(186, 15); std::cout << "#";
		gotoxy(133, 16); std::cout << "#"; gotoxy(186, 16); std::cout << "#";
		gotoxy(133, 17); std::cout << "#"; gotoxy(186, 17); std::cout << "#";
		gotoxy(133, 18); std::cout << "#"; gotoxy(186, 18); std::cout << "#";
		gotoxy(133, 19); std::cout << "#"; gotoxy(186, 19); std::cout << "#    ##";
		gotoxy(133, 20); std::cout << "#"; gotoxy(186, 20); std::cout << "#    ###";
		gotoxy(133, 21); std::cout << "#"; gotoxy(186, 21); std::cout << "# #######";
		gotoxy(133, 22); std::cout << "#"; gotoxy(186, 22); std::cout << "# ########";
		gotoxy(133, 23); std::cout << "#"; gotoxy(186, 23); std::cout << "# ########";
		gotoxy(133, 24); std::cout << "#"; gotoxy(186, 24); std::cout << "# #######";
		gotoxy(133, 25); std::cout << "#"; gotoxy(186, 25); std::cout << "#    ###";
		gotoxy(133, 26); std::cout << "#"; gotoxy(186, 26); std::cout << "#    ##";
		gotoxy(133, 27); std::cout << "#"; gotoxy(186, 27); std::cout << "#";
		gotoxy(133, 28); std::cout << "#"; gotoxy(186, 28); std::cout << "#";
		gotoxy(133, 29); std::cout << "#"; gotoxy(186, 29); std::cout << "#";
		gotoxy(133, 30); std::cout << "#"; gotoxy(186, 30); std::cout << "#";
		gotoxy(133, 31); std::cout << "#"; gotoxy(186, 31); std::cout << "#";
		gotoxy(133, 32); std::cout << "######################################################";
		break;
	case 4:
		eraseView();
		printAgrios();
		printCannonBall();
		printMorsax();


		gotoxy(13, 13); std::cout << "######################################################";
		gotoxy(13, 14); std::cout << "#"; gotoxy(66, 14); std::cout << "#";
		gotoxy(13, 15); std::cout << "#"; gotoxy(66, 15); std::cout << "#";
		gotoxy(13, 16); std::cout << "#"; gotoxy(66, 16); std::cout << "#";
		gotoxy(13, 17); std::cout << "#"; gotoxy(66, 17); std::cout << "#";
		gotoxy(13, 18); std::cout << "#"; gotoxy(66, 18); std::cout << "#";
		gotoxy(4, 19); std::cout << "   ##   ";	gotoxy(13, 19); std::cout << "#"; gotoxy(66, 19); std::cout << "#";
		gotoxy(4, 20); std::cout << "  ###   ";	gotoxy(13, 20); std::cout << "#"; gotoxy(66, 20); std::cout << "#";
		gotoxy(4, 21); std::cout << " #######";	gotoxy(13, 21); std::cout << "#"; gotoxy(66, 21); std::cout << "#";
		gotoxy(4, 22); std::cout << "########";	gotoxy(13, 22); std::cout << "#"; gotoxy(66, 22); std::cout << "#";
		gotoxy(4, 23); std::cout << "########";	gotoxy(13, 23); std::cout << "#"; gotoxy(66, 23); std::cout << "#";
		gotoxy(4, 24); std::cout << " #######";	gotoxy(13, 24); std::cout << "#"; gotoxy(66, 24); std::cout << "#";
		gotoxy(4, 25); std::cout << "  ###   ";	gotoxy(13, 25); std::cout << "#"; gotoxy(66, 25); std::cout << "#";
		gotoxy(4, 26); std::cout << "   ##   ";	gotoxy(13, 26); std::cout << "#"; gotoxy(66, 26); std::cout << "#";
		gotoxy(13, 27); std::cout << "#"; gotoxy(66, 27); std::cout << "#";
		gotoxy(13, 28); std::cout << "#"; gotoxy(66, 28); std::cout << "#";
		gotoxy(13, 29); std::cout << "#"; gotoxy(66, 29); std::cout << "#";
		gotoxy(13, 30); std::cout << "#"; gotoxy(66, 30); std::cout << "#";
		gotoxy(13, 31); std::cout << "#"; gotoxy(66, 31); std::cout << "#";
		gotoxy(13, 32); std::cout << "######################################################";
		break;
	case 5:
		eraseView();
		printAgrios();
		printCannonBall();
		printMorsax();

		gotoxy(73, 13); std::cout << "######################################################";
		gotoxy(73, 14); std::cout << "#"; gotoxy(126, 14); std::cout << "#";
		gotoxy(73, 15); std::cout << "#"; gotoxy(126, 15); std::cout << "#";
		gotoxy(73, 16); std::cout << "#"; gotoxy(126, 16); std::cout << "#";
		gotoxy(73, 17); std::cout << "#"; gotoxy(126, 17); std::cout << "#";
		gotoxy(73, 18); std::cout << "#"; gotoxy(126, 18); std::cout << "#";
		gotoxy(73, 19); std::cout << "#"; gotoxy(126, 19); std::cout << "#";
		gotoxy(73, 20); std::cout << "#"; gotoxy(126, 20); std::cout << "#";
		gotoxy(73, 21); std::cout << "#"; gotoxy(126, 21); std::cout << "#";
		gotoxy(73, 22); std::cout << "#"; gotoxy(126, 22); std::cout << "#";
		gotoxy(73, 23); std::cout << "#"; gotoxy(126, 23); std::cout << "#";
		gotoxy(73, 24); std::cout << "#"; gotoxy(126, 24); std::cout << "#";
		gotoxy(73, 25); std::cout << "#"; gotoxy(126, 25); std::cout << "#";
		gotoxy(73, 26); std::cout << "#"; gotoxy(126, 26); std::cout << "#";
		gotoxy(73, 27); std::cout << "#"; gotoxy(126, 27); std::cout << "#";
		gotoxy(73, 28); std::cout << "#"; gotoxy(126, 28); std::cout << "#";
		gotoxy(73, 29); std::cout << "#"; gotoxy(126, 29); std::cout << "#";
		gotoxy(73, 30); std::cout << "#"; gotoxy(126, 30); std::cout << "#";
		gotoxy(73, 31); std::cout << "#"; gotoxy(126, 31); std::cout << "#";
		gotoxy(73, 32); std::cout << "######################################################";
		break;
	case 6:
		eraseView();
		printAgrios();
		printCannonBall();
		printMorsax();

		gotoxy(133, 13); std::cout << "######################################################";
		gotoxy(133, 14); std::cout << "#"; gotoxy(186, 14); std::cout << "#";
		gotoxy(133, 15); std::cout << "#"; gotoxy(186, 15); std::cout << "#";
		gotoxy(133, 16); std::cout << "#"; gotoxy(186, 16); std::cout << "#";
		gotoxy(133, 17); std::cout << "#"; gotoxy(186, 17); std::cout << "#";
		gotoxy(133, 18); std::cout << "#"; gotoxy(186, 18); std::cout << "#";
		gotoxy(133, 19); std::cout << "#"; gotoxy(186, 19); std::cout << "#";
		gotoxy(133, 20); std::cout << "#"; gotoxy(186, 20); std::cout << "#";
		gotoxy(133, 21); std::cout << "#"; gotoxy(186, 21); std::cout << "#";
		gotoxy(133, 22); std::cout << "#"; gotoxy(186, 22); std::cout << "#";
		gotoxy(133, 23); std::cout << "#"; gotoxy(186, 23); std::cout << "#";
		gotoxy(133, 24); std::cout << "#"; gotoxy(186, 24); std::cout << "#";
		gotoxy(133, 25); std::cout << "#"; gotoxy(186, 25); std::cout << "#";
		gotoxy(133, 26); std::cout << "#"; gotoxy(186, 26); std::cout << "#";
		gotoxy(133, 27); std::cout << "#"; gotoxy(186, 27); std::cout << "#";
		gotoxy(133, 28); std::cout << "#"; gotoxy(186, 28); std::cout << "#";
		gotoxy(133, 29); std::cout << "#"; gotoxy(186, 29); std::cout << "#";
		gotoxy(133, 30); std::cout << "#"; gotoxy(186, 30); std::cout << "#";
		gotoxy(133, 31); std::cout << "#"; gotoxy(186, 31); std::cout << "#";
		gotoxy(133, 32); std::cout << "######################################################";
		break;
	}

	//Logica
	while (!next) {
		if (_kbhit()) {
			char tecla = _getch();
			if (tecla == 'a') {
				snd.getSound(L"Sounds\\Sound-Menu(SelectionPush).wav");
				Sleep(200);
				next = true;
			}

			else {

				if (tecla == IZQUIERDA && selection > 1) {
					selection--;
					snd.getSound(L"Sounds\\Sound-Menu(SelectionArrow).wav");
					Sleep(200);
					switch (selection) {
					case 1:
						eraseView();
						printDracore();
						printMythosaur();
						printEreblin();

						gotoxy(13, 13); std::cout << "######################################################";
						gotoxy(13, 14); std::cout << "#"; gotoxy(66, 14); std::cout << "#";
						gotoxy(13, 15); std::cout << "#"; gotoxy(66, 15); std::cout << "#";
						gotoxy(13, 16); std::cout << "#"; gotoxy(66, 16); std::cout << "#";
						gotoxy(13, 17); std::cout << "#"; gotoxy(66, 17); std::cout << "#";
						gotoxy(13, 18); std::cout << "#"; gotoxy(66, 18); std::cout << "#";
						gotoxy(13, 19); std::cout << "#"; gotoxy(66, 19); std::cout << "#";
						gotoxy(13, 20); std::cout << "#"; gotoxy(66, 20); std::cout << "#";
						gotoxy(13, 21); std::cout << "#"; gotoxy(66, 21); std::cout << "#";
						gotoxy(13, 22); std::cout << "#"; gotoxy(66, 22); std::cout << "#";
						gotoxy(13, 23); std::cout << "#"; gotoxy(66, 23); std::cout << "#";
						gotoxy(13, 24); std::cout << "#"; gotoxy(66, 24); std::cout << "#";
						gotoxy(13, 25); std::cout << "#"; gotoxy(66, 25); std::cout << "#";
						gotoxy(13, 26); std::cout << "#"; gotoxy(66, 26); std::cout << "#";
						gotoxy(13, 27); std::cout << "#"; gotoxy(66, 27); std::cout << "#";
						gotoxy(13, 28); std::cout << "#"; gotoxy(66, 28); std::cout << "#";
						gotoxy(13, 29); std::cout << "#"; gotoxy(66, 29); std::cout << "#";
						gotoxy(13, 30); std::cout << "#"; gotoxy(66, 30); std::cout << "#";
						gotoxy(13, 31); std::cout << "#"; gotoxy(66, 31); std::cout << "#";
						gotoxy(13, 32); std::cout << "######################################################";
						break;
					case 2:
						eraseView();
						printDracore();
						printMythosaur();
						printEreblin();

						gotoxy(73, 13); std::cout << "######################################################";
						gotoxy(73, 14); std::cout << "#"; gotoxy(126, 14); std::cout << "#";
						gotoxy(73, 15); std::cout << "#"; gotoxy(126, 15); std::cout << "#";
						gotoxy(73, 16); std::cout << "#"; gotoxy(126, 16); std::cout << "#";
						gotoxy(73, 17); std::cout << "#"; gotoxy(126, 17); std::cout << "#";
						gotoxy(73, 18); std::cout << "#"; gotoxy(126, 18); std::cout << "#";
						gotoxy(73, 19); std::cout << "#"; gotoxy(126, 19); std::cout << "#";
						gotoxy(73, 20); std::cout << "#"; gotoxy(126, 20); std::cout << "#";
						gotoxy(73, 21); std::cout << "#"; gotoxy(126, 21); std::cout << "#";
						gotoxy(73, 22); std::cout << "#"; gotoxy(126, 22); std::cout << "#";
						gotoxy(73, 23); std::cout << "#"; gotoxy(126, 23); std::cout << "#";
						gotoxy(73, 24); std::cout << "#"; gotoxy(126, 24); std::cout << "#";
						gotoxy(73, 25); std::cout << "#"; gotoxy(126, 25); std::cout << "#";
						gotoxy(73, 26); std::cout << "#"; gotoxy(126, 26); std::cout << "#";
						gotoxy(73, 27); std::cout << "#"; gotoxy(126, 27); std::cout << "#";
						gotoxy(73, 28); std::cout << "#"; gotoxy(126, 28); std::cout << "#";
						gotoxy(73, 29); std::cout << "#"; gotoxy(126, 29); std::cout << "#";
						gotoxy(73, 30); std::cout << "#"; gotoxy(126, 30); std::cout << "#";
						gotoxy(73, 31); std::cout << "#"; gotoxy(126, 31); std::cout << "#";
						gotoxy(73, 32); std::cout << "######################################################";
						break;
					case 3:
						eraseView();
						printDracore();
						printMythosaur();
						printEreblin();

						gotoxy(133, 13); std::cout << "######################################################";
						gotoxy(133, 14); std::cout << "#"; gotoxy(186, 14); std::cout << "#";
						gotoxy(133, 15); std::cout << "#"; gotoxy(186, 15); std::cout << "#";
						gotoxy(133, 16); std::cout << "#"; gotoxy(186, 16); std::cout << "#";
						gotoxy(133, 17); std::cout << "#"; gotoxy(186, 17); std::cout << "#";
						gotoxy(133, 18); std::cout << "#"; gotoxy(186, 18); std::cout << "#";
						gotoxy(133, 19); std::cout << "#"; gotoxy(186, 19); std::cout << "#    ##";
						gotoxy(133, 20); std::cout << "#"; gotoxy(186, 20); std::cout << "#    ###";
						gotoxy(133, 21); std::cout << "#"; gotoxy(186, 21); std::cout << "# #######";
						gotoxy(133, 22); std::cout << "#"; gotoxy(186, 22); std::cout << "# ########";
						gotoxy(133, 23); std::cout << "#"; gotoxy(186, 23); std::cout << "# ########";
						gotoxy(133, 24); std::cout << "#"; gotoxy(186, 24); std::cout << "# #######";
						gotoxy(133, 25); std::cout << "#"; gotoxy(186, 25); std::cout << "#    ###";
						gotoxy(133, 26); std::cout << "#"; gotoxy(186, 26); std::cout << "#    ##";
						gotoxy(133, 27); std::cout << "#"; gotoxy(186, 27); std::cout << "#";
						gotoxy(133, 28); std::cout << "#"; gotoxy(186, 28); std::cout << "#";
						gotoxy(133, 29); std::cout << "#"; gotoxy(186, 29); std::cout << "#";
						gotoxy(133, 30); std::cout << "#"; gotoxy(186, 30); std::cout << "#";
						gotoxy(133, 31); std::cout << "#"; gotoxy(186, 31); std::cout << "#";
						gotoxy(133, 32); std::cout << "######################################################";
						break;
					case 4:
						eraseView();
						printAgrios();
						printCannonBall();
						printMorsax();


						gotoxy(13, 13); std::cout << "######################################################";
						gotoxy(13, 14); std::cout << "#"; gotoxy(66, 14); std::cout << "#";
						gotoxy(13, 15); std::cout << "#"; gotoxy(66, 15); std::cout << "#";
						gotoxy(13, 16); std::cout << "#"; gotoxy(66, 16); std::cout << "#";
						gotoxy(13, 17); std::cout << "#"; gotoxy(66, 17); std::cout << "#";
						gotoxy(13, 18); std::cout << "#"; gotoxy(66, 18); std::cout << "#";
						gotoxy(4, 19); std::cout << "   ##   ";	gotoxy(13, 19); std::cout << "#"; gotoxy(66, 19); std::cout << "#";
						gotoxy(4, 20); std::cout << "  ###   ";	gotoxy(13, 20); std::cout << "#"; gotoxy(66, 20); std::cout << "#";
						gotoxy(4, 21); std::cout << " #######";	gotoxy(13, 21); std::cout << "#"; gotoxy(66, 21); std::cout << "#";
						gotoxy(4, 22); std::cout << "########";	gotoxy(13, 22); std::cout << "#"; gotoxy(66, 22); std::cout << "#";
						gotoxy(4, 23); std::cout << "########";	gotoxy(13, 23); std::cout << "#"; gotoxy(66, 23); std::cout << "#";
						gotoxy(4, 24); std::cout << " #######";	gotoxy(13, 24); std::cout << "#"; gotoxy(66, 24); std::cout << "#";
						gotoxy(4, 25); std::cout << "  ###   ";	gotoxy(13, 25); std::cout << "#"; gotoxy(66, 25); std::cout << "#";
						gotoxy(4, 26); std::cout << "   ##   ";	gotoxy(13, 26); std::cout << "#"; gotoxy(66, 26); std::cout << "#";
						gotoxy(13, 27); std::cout << "#"; gotoxy(66, 27); std::cout << "#";
						gotoxy(13, 28); std::cout << "#"; gotoxy(66, 28); std::cout << "#";
						gotoxy(13, 29); std::cout << "#"; gotoxy(66, 29); std::cout << "#";
						gotoxy(13, 30); std::cout << "#"; gotoxy(66, 30); std::cout << "#";
						gotoxy(13, 31); std::cout << "#"; gotoxy(66, 31); std::cout << "#";
						gotoxy(13, 32); std::cout << "######################################################";
						break;
					case 5:
						eraseView();
						printAgrios();
						printCannonBall();
						printMorsax();

						gotoxy(73, 13); std::cout << "######################################################";
						gotoxy(73, 14); std::cout << "#"; gotoxy(126, 14); std::cout << "#";
						gotoxy(73, 15); std::cout << "#"; gotoxy(126, 15); std::cout << "#";
						gotoxy(73, 16); std::cout << "#"; gotoxy(126, 16); std::cout << "#";
						gotoxy(73, 17); std::cout << "#"; gotoxy(126, 17); std::cout << "#";
						gotoxy(73, 18); std::cout << "#"; gotoxy(126, 18); std::cout << "#";
						gotoxy(73, 19); std::cout << "#"; gotoxy(126, 19); std::cout << "#";
						gotoxy(73, 20); std::cout << "#"; gotoxy(126, 20); std::cout << "#";
						gotoxy(73, 21); std::cout << "#"; gotoxy(126, 21); std::cout << "#";
						gotoxy(73, 22); std::cout << "#"; gotoxy(126, 22); std::cout << "#";
						gotoxy(73, 23); std::cout << "#"; gotoxy(126, 23); std::cout << "#";
						gotoxy(73, 24); std::cout << "#"; gotoxy(126, 24); std::cout << "#";
						gotoxy(73, 25); std::cout << "#"; gotoxy(126, 25); std::cout << "#";
						gotoxy(73, 26); std::cout << "#"; gotoxy(126, 26); std::cout << "#";
						gotoxy(73, 27); std::cout << "#"; gotoxy(126, 27); std::cout << "#";
						gotoxy(73, 28); std::cout << "#"; gotoxy(126, 28); std::cout << "#";
						gotoxy(73, 29); std::cout << "#"; gotoxy(126, 29); std::cout << "#";
						gotoxy(73, 30); std::cout << "#"; gotoxy(126, 30); std::cout << "#";
						gotoxy(73, 31); std::cout << "#"; gotoxy(126, 31); std::cout << "#";
						gotoxy(73, 32); std::cout << "######################################################";
						break;
					case 6:
						eraseView();
						printAgrios();
						printCannonBall();
						printMorsax();

						gotoxy(133, 13); std::cout << "######################################################";
						gotoxy(133, 14); std::cout << "#"; gotoxy(186, 14); std::cout << "#";
						gotoxy(133, 15); std::cout << "#"; gotoxy(186, 15); std::cout << "#";
						gotoxy(133, 16); std::cout << "#"; gotoxy(186, 16); std::cout << "#";
						gotoxy(133, 17); std::cout << "#"; gotoxy(186, 17); std::cout << "#";
						gotoxy(133, 18); std::cout << "#"; gotoxy(186, 18); std::cout << "#";
						gotoxy(133, 19); std::cout << "#"; gotoxy(186, 19); std::cout << "#";
						gotoxy(133, 20); std::cout << "#"; gotoxy(186, 20); std::cout << "#";
						gotoxy(133, 21); std::cout << "#"; gotoxy(186, 21); std::cout << "#";
						gotoxy(133, 22); std::cout << "#"; gotoxy(186, 22); std::cout << "#";
						gotoxy(133, 23); std::cout << "#"; gotoxy(186, 23); std::cout << "#";
						gotoxy(133, 24); std::cout << "#"; gotoxy(186, 24); std::cout << "#";
						gotoxy(133, 25); std::cout << "#"; gotoxy(186, 25); std::cout << "#";
						gotoxy(133, 26); std::cout << "#"; gotoxy(186, 26); std::cout << "#";
						gotoxy(133, 27); std::cout << "#"; gotoxy(186, 27); std::cout << "#";
						gotoxy(133, 28); std::cout << "#"; gotoxy(186, 28); std::cout << "#";
						gotoxy(133, 29); std::cout << "#"; gotoxy(186, 29); std::cout << "#";
						gotoxy(133, 30); std::cout << "#"; gotoxy(186, 30); std::cout << "#";
						gotoxy(133, 31); std::cout << "#"; gotoxy(186, 31); std::cout << "#";
						gotoxy(133, 32); std::cout << "######################################################";
						break;
					}
				}

				if (tecla == DERECHA && selection < 6) {
					selection++;
					snd.getSound(L"Sounds\\Sound-Menu(SelectionArrow).wav");
					Sleep(200);
					switch (selection) {
					case 1:
						eraseView();
						printDracore();
						printMythosaur();
						printEreblin();

						gotoxy(13, 13); std::cout << "######################################################";
						gotoxy(13, 14); std::cout << "#"; gotoxy(66, 14); std::cout << "#";
						gotoxy(13, 15); std::cout << "#"; gotoxy(66, 15); std::cout << "#";
						gotoxy(13, 16); std::cout << "#"; gotoxy(66, 16); std::cout << "#";
						gotoxy(13, 17); std::cout << "#"; gotoxy(66, 17); std::cout << "#";
						gotoxy(13, 18); std::cout << "#"; gotoxy(66, 18); std::cout << "#";
						gotoxy(13, 19); std::cout << "#"; gotoxy(66, 19); std::cout << "#";
						gotoxy(13, 20); std::cout << "#"; gotoxy(66, 20); std::cout << "#";
						gotoxy(13, 21); std::cout << "#"; gotoxy(66, 21); std::cout << "#";
						gotoxy(13, 22); std::cout << "#"; gotoxy(66, 22); std::cout << "#";
						gotoxy(13, 23); std::cout << "#"; gotoxy(66, 23); std::cout << "#";
						gotoxy(13, 24); std::cout << "#"; gotoxy(66, 24); std::cout << "#";
						gotoxy(13, 25); std::cout << "#"; gotoxy(66, 25); std::cout << "#";
						gotoxy(13, 26); std::cout << "#"; gotoxy(66, 26); std::cout << "#";
						gotoxy(13, 27); std::cout << "#"; gotoxy(66, 27); std::cout << "#";
						gotoxy(13, 28); std::cout << "#"; gotoxy(66, 28); std::cout << "#";
						gotoxy(13, 29); std::cout << "#"; gotoxy(66, 29); std::cout << "#";
						gotoxy(13, 30); std::cout << "#"; gotoxy(66, 30); std::cout << "#";
						gotoxy(13, 31); std::cout << "#"; gotoxy(66, 31); std::cout << "#";
						gotoxy(13, 32); std::cout << "######################################################";
						break;
					case 2:
						eraseView();
						printDracore();
						printMythosaur();
						printEreblin();

						gotoxy(73, 13); std::cout << "######################################################";
						gotoxy(73, 14); std::cout << "#"; gotoxy(126, 14); std::cout << "#";
						gotoxy(73, 15); std::cout << "#"; gotoxy(126, 15); std::cout << "#";
						gotoxy(73, 16); std::cout << "#"; gotoxy(126, 16); std::cout << "#";
						gotoxy(73, 17); std::cout << "#"; gotoxy(126, 17); std::cout << "#";
						gotoxy(73, 18); std::cout << "#"; gotoxy(126, 18); std::cout << "#";
						gotoxy(73, 19); std::cout << "#"; gotoxy(126, 19); std::cout << "#";
						gotoxy(73, 20); std::cout << "#"; gotoxy(126, 20); std::cout << "#";
						gotoxy(73, 21); std::cout << "#"; gotoxy(126, 21); std::cout << "#";
						gotoxy(73, 22); std::cout << "#"; gotoxy(126, 22); std::cout << "#";
						gotoxy(73, 23); std::cout << "#"; gotoxy(126, 23); std::cout << "#";
						gotoxy(73, 24); std::cout << "#"; gotoxy(126, 24); std::cout << "#";
						gotoxy(73, 25); std::cout << "#"; gotoxy(126, 25); std::cout << "#";
						gotoxy(73, 26); std::cout << "#"; gotoxy(126, 26); std::cout << "#";
						gotoxy(73, 27); std::cout << "#"; gotoxy(126, 27); std::cout << "#";
						gotoxy(73, 28); std::cout << "#"; gotoxy(126, 28); std::cout << "#";
						gotoxy(73, 29); std::cout << "#"; gotoxy(126, 29); std::cout << "#";
						gotoxy(73, 30); std::cout << "#"; gotoxy(126, 30); std::cout << "#";
						gotoxy(73, 31); std::cout << "#"; gotoxy(126, 31); std::cout << "#";
						gotoxy(73, 32); std::cout << "######################################################";
						break;
					case 3:
						eraseView();
						printDracore();
						printMythosaur();
						printEreblin();

						gotoxy(133, 13); std::cout << "######################################################";
						gotoxy(133, 14); std::cout << "#"; gotoxy(186, 14); std::cout << "#";
						gotoxy(133, 15); std::cout << "#"; gotoxy(186, 15); std::cout << "#";
						gotoxy(133, 16); std::cout << "#"; gotoxy(186, 16); std::cout << "#";
						gotoxy(133, 17); std::cout << "#"; gotoxy(186, 17); std::cout << "#";
						gotoxy(133, 18); std::cout << "#"; gotoxy(186, 18); std::cout << "#";
						gotoxy(133, 19); std::cout << "#"; gotoxy(186, 19); std::cout << "#    ##";
						gotoxy(133, 20); std::cout << "#"; gotoxy(186, 20); std::cout << "#    ###";
						gotoxy(133, 21); std::cout << "#"; gotoxy(186, 21); std::cout << "# #######";
						gotoxy(133, 22); std::cout << "#"; gotoxy(186, 22); std::cout << "# ########";
						gotoxy(133, 23); std::cout << "#"; gotoxy(186, 23); std::cout << "# ########";
						gotoxy(133, 24); std::cout << "#"; gotoxy(186, 24); std::cout << "# #######";
						gotoxy(133, 25); std::cout << "#"; gotoxy(186, 25); std::cout << "#    ###";
						gotoxy(133, 26); std::cout << "#"; gotoxy(186, 26); std::cout << "#    ##";
						gotoxy(133, 27); std::cout << "#"; gotoxy(186, 27); std::cout << "#";
						gotoxy(133, 28); std::cout << "#"; gotoxy(186, 28); std::cout << "#";
						gotoxy(133, 29); std::cout << "#"; gotoxy(186, 29); std::cout << "#";
						gotoxy(133, 30); std::cout << "#"; gotoxy(186, 30); std::cout << "#";
						gotoxy(133, 31); std::cout << "#"; gotoxy(186, 31); std::cout << "#";
						gotoxy(133, 32); std::cout << "######################################################";
						break;
					case 4:
						eraseView();
						printAgrios();
						printCannonBall();
						printMorsax();


						gotoxy(13, 13); std::cout << "######################################################";
						gotoxy(13, 14); std::cout << "#"; gotoxy(66, 14); std::cout << "#";
						gotoxy(13, 15); std::cout << "#"; gotoxy(66, 15); std::cout << "#";
						gotoxy(13, 16); std::cout << "#"; gotoxy(66, 16); std::cout << "#";
						gotoxy(13, 17); std::cout << "#"; gotoxy(66, 17); std::cout << "#";
						gotoxy(13, 18); std::cout << "#"; gotoxy(66, 18); std::cout << "#";
						gotoxy(4, 19); std::cout << "   ##   ";	gotoxy(13, 19); std::cout << "#"; gotoxy(66, 19); std::cout << "#";
						gotoxy(4, 20); std::cout << "  ###   ";	gotoxy(13, 20); std::cout << "#"; gotoxy(66, 20); std::cout << "#";
						gotoxy(4, 21); std::cout << " #######";	gotoxy(13, 21); std::cout << "#"; gotoxy(66, 21); std::cout << "#";
						gotoxy(4, 22); std::cout << "########";	gotoxy(13, 22); std::cout << "#"; gotoxy(66, 22); std::cout << "#";
						gotoxy(4, 23); std::cout << "########";	gotoxy(13, 23); std::cout << "#"; gotoxy(66, 23); std::cout << "#";
						gotoxy(4, 24); std::cout << " #######";	gotoxy(13, 24); std::cout << "#"; gotoxy(66, 24); std::cout << "#";
						gotoxy(4, 25); std::cout << "  ###   ";	gotoxy(13, 25); std::cout << "#"; gotoxy(66, 25); std::cout << "#";
						gotoxy(4, 26); std::cout << "   ##   ";	gotoxy(13, 26); std::cout << "#"; gotoxy(66, 26); std::cout << "#";
						gotoxy(13, 27); std::cout << "#"; gotoxy(66, 27); std::cout << "#";
						gotoxy(13, 28); std::cout << "#"; gotoxy(66, 28); std::cout << "#";
						gotoxy(13, 29); std::cout << "#"; gotoxy(66, 29); std::cout << "#";
						gotoxy(13, 30); std::cout << "#"; gotoxy(66, 30); std::cout << "#";
						gotoxy(13, 31); std::cout << "#"; gotoxy(66, 31); std::cout << "#";
						gotoxy(13, 32); std::cout << "######################################################";
						break;
					case 5:
						eraseView();
						printAgrios();
						printCannonBall();
						printMorsax();

						gotoxy(73, 13); std::cout << "######################################################";
						gotoxy(73, 14); std::cout << "#"; gotoxy(126, 14); std::cout << "#";
						gotoxy(73, 15); std::cout << "#"; gotoxy(126, 15); std::cout << "#";
						gotoxy(73, 16); std::cout << "#"; gotoxy(126, 16); std::cout << "#";
						gotoxy(73, 17); std::cout << "#"; gotoxy(126, 17); std::cout << "#";
						gotoxy(73, 18); std::cout << "#"; gotoxy(126, 18); std::cout << "#";
						gotoxy(73, 19); std::cout << "#"; gotoxy(126, 19); std::cout << "#";
						gotoxy(73, 20); std::cout << "#"; gotoxy(126, 20); std::cout << "#";
						gotoxy(73, 21); std::cout << "#"; gotoxy(126, 21); std::cout << "#";
						gotoxy(73, 22); std::cout << "#"; gotoxy(126, 22); std::cout << "#";
						gotoxy(73, 23); std::cout << "#"; gotoxy(126, 23); std::cout << "#";
						gotoxy(73, 24); std::cout << "#"; gotoxy(126, 24); std::cout << "#";
						gotoxy(73, 25); std::cout << "#"; gotoxy(126, 25); std::cout << "#";
						gotoxy(73, 26); std::cout << "#"; gotoxy(126, 26); std::cout << "#";
						gotoxy(73, 27); std::cout << "#"; gotoxy(126, 27); std::cout << "#";
						gotoxy(73, 28); std::cout << "#"; gotoxy(126, 28); std::cout << "#";
						gotoxy(73, 29); std::cout << "#"; gotoxy(126, 29); std::cout << "#";
						gotoxy(73, 30); std::cout << "#"; gotoxy(126, 30); std::cout << "#";
						gotoxy(73, 31); std::cout << "#"; gotoxy(126, 31); std::cout << "#";
						gotoxy(73, 32); std::cout << "######################################################";
						break;
					case 6:
						eraseView();
						printAgrios();
						printCannonBall();
						printMorsax();

						gotoxy(133, 13); std::cout << "######################################################";
						gotoxy(133, 14); std::cout << "#"; gotoxy(186, 14); std::cout << "#";
						gotoxy(133, 15); std::cout << "#"; gotoxy(186, 15); std::cout << "#";
						gotoxy(133, 16); std::cout << "#"; gotoxy(186, 16); std::cout << "#";
						gotoxy(133, 17); std::cout << "#"; gotoxy(186, 17); std::cout << "#";
						gotoxy(133, 18); std::cout << "#"; gotoxy(186, 18); std::cout << "#";
						gotoxy(133, 19); std::cout << "#"; gotoxy(186, 19); std::cout << "#";
						gotoxy(133, 20); std::cout << "#"; gotoxy(186, 20); std::cout << "#";
						gotoxy(133, 21); std::cout << "#"; gotoxy(186, 21); std::cout << "#";
						gotoxy(133, 22); std::cout << "#"; gotoxy(186, 22); std::cout << "#";
						gotoxy(133, 23); std::cout << "#"; gotoxy(186, 23); std::cout << "#";
						gotoxy(133, 24); std::cout << "#"; gotoxy(186, 24); std::cout << "#";
						gotoxy(133, 25); std::cout << "#"; gotoxy(186, 25); std::cout << "#";
						gotoxy(133, 26); std::cout << "#"; gotoxy(186, 26); std::cout << "#";
						gotoxy(133, 27); std::cout << "#"; gotoxy(186, 27); std::cout << "#";
						gotoxy(133, 28); std::cout << "#"; gotoxy(186, 28); std::cout << "#";
						gotoxy(133, 29); std::cout << "#"; gotoxy(186, 29); std::cout << "#";
						gotoxy(133, 30); std::cout << "#"; gotoxy(186, 30); std::cout << "#";
						gotoxy(133, 31); std::cout << "#"; gotoxy(186, 31); std::cout << "#";
						gotoxy(133, 32); std::cout << "######################################################";
						break;
					}
				}
			}
		}
	}

	for (int y = 0; y < 49; y++) {
		gotoxy(0, y);
		std::cout << "                                                                                                                                                                                                                                                                                                  ";
	}

	setMonsterSelection(selection);
}

void Menus::mainPause() {

	SoundManager snd;
	for (int y = 0; y < 49; y++) {
		gotoxy(0, y);
		std::cout << "                                                                                                                                                                                                                                                                                                  ";
	}

	gotoxy(65, 25 - 7);	std::cout << "                             #### #### #  # #### ####                              " << std::endl;
	gotoxy(65, 26 - 7);	std::cout << "                             #  # #  # #  # #    #                                 " << std::endl;
	gotoxy(65, 27 - 7);	std::cout << "                             #### #### #  # #### ###                               " << std::endl;
	gotoxy(65, 28 - 7);	std::cout << "                             #    #  # #  #    # #                                 " << std::endl;
	gotoxy(65, 29 - 7);	std::cout << "                             #    #  # #### #### ####                              " << std::endl;
	gotoxy(65, 33 - 7);	std::cout << "#### #### #### #### ####   ####   #### ####   #### #### #  # #### ## #  # #  # ####" << std::endl;
	gotoxy(65, 34 - 7);	std::cout << "#  # #  # #    #    #      #  #    ##  #  #   #    #  # ## #  ##  ## ## # #  # #   " << std::endl;
	gotoxy(65, 35 - 7);	std::cout << "#### #### ###  #### ####   ####    ##  #  #   #    #  # # ##  ##  ## # ## #  # ### " << std::endl;
	gotoxy(65, 36 - 7);	std::cout << "#    # #  #       #    #   #  #    ##  #  #   #    #  # #  #  ##  ## #  # #  # #   " << std::endl;
	gotoxy(65, 37 - 7);	std::cout << "#    #  # #### #### ####   #  #    ##  ####   #### #### #     ##  ## #    #### ####" << std::endl;

	if (_kbhit) {
		_flushall();
		char tecla = _getch();
		if (tecla == 'a') {
			snd.getSound(L"Sounds\\Sound-Menu(SelectionPush).wav");
			for (int y = 0; y < 49; y++) {
				gotoxy(0, y);
				std::cout << "                                                                                                                                                                                                                                                                                                  ";
			}
		}
	}	
}

void Menus::gameOver() {
	
	SoundManager snd;
	snd.getMusic(L"Sounds\\Music-GameOver.wav");

	gotoxy(40, 5);	std::cout << "                                ###########      ##########     ##        ##    ############                                " << std::endl;	Sleep(200);
	gotoxy(40, 6);  std::cout << "                                ############    ############    ###      ###    ############                                " << std::endl;   Sleep(200);
	gotoxy(40, 7);  std::cout << "                                ##        ##    ##        ##    ####    ####    ##                                          " << std::endl;   Sleep(200);
	gotoxy(40, 8);  std::cout << "                                ##        ##    ##        ##    ## ##  ## ##    ##                                          " << std::endl;   Sleep(200);
	gotoxy(40, 9);  std::cout << "                                ##        ##    ##        ##    ##  ####  ##    ##                                          " << std::endl;   Sleep(200);
	gotoxy(40, 10); std::cout << "                                ##              ############    ##   ##   ##    #########                                   " << std::endl;	Sleep(200);
	gotoxy(40, 11); std::cout << "                                ##   #######    ############    ##        ##    #########                                   " << std::endl;	Sleep(200);
	gotoxy(40, 12); std::cout << "                                ##   #######    ##        ##    ##        ##    ##                                          " << std::endl;	Sleep(200);
	gotoxy(40, 13); std::cout << "                                ##        ##    ##        ##    ##        ##    ##                                          " << std::endl;	Sleep(200);
	gotoxy(40, 14); std::cout << "                                ##        ##    ##        ##    ##        ##    ##                                          " << std::endl;	Sleep(200);
	gotoxy(40, 15); std::cout << "                                ##        ##    ##        ##    ##        ##    ##                                          " << std::endl;	Sleep(200);
	gotoxy(40, 16); std::cout << "                                ############    ##        ##    ##        ##    ############                                " << std::endl;	Sleep(200);
	gotoxy(40, 17);	std::cout << "                                ############    ##        ##    ##        ##    ############                                " << std::endl;	Sleep(200);

	gotoxy(40, 20); std::cout << "                               ##########     ##           ##    ############    ############                               " << std::endl;	Sleep(200);
	gotoxy(40, 21);	std::cout << "                              ############    ##           ##    ############    ############                               " << std::endl;	Sleep(200);
	gotoxy(40, 22); std::cout << "                              ##        ##    ##           ##    ##              ##        ##                               " << std::endl;	Sleep(200);
	gotoxy(40, 23); std::cout << "                              ##        ##    ##           ##    ##              ##        ##                               " << std::endl;	Sleep(200);
	gotoxy(40, 24); std::cout << "                              ##        ##    ##           ##    ##              ##        ##                               " << std::endl;	Sleep(200);
	gotoxy(40, 25);	std::cout << "                              ##        ##    ##           ##    #########       ############                               " << std::endl;	Sleep(200);
	gotoxy(40, 26);	std::cout << "                              ##        ##    ##           ##    #########       ############                               " << std::endl;	Sleep(200);
	gotoxy(40, 27);	std::cout << "                              ##        ##    ##           ##    ##              ####                                       " << std::endl;	Sleep(200);
	gotoxy(40, 28); std::cout << "                              ##        ##     ##         ##     ##              ## ###                                     " << std::endl;	Sleep(200);
	gotoxy(40, 29); std::cout << "                              ##        ##      ##       ##      ##              ##   ##                                    " << std::endl;	Sleep(200);
	gotoxy(40, 30);	std::cout << "                              ##        ##       ##     ##       ##              ##   ###                                   " << std::endl;	Sleep(200);
	gotoxy(40, 31);	std::cout << "                              ############        #######        ############    ##     ###                                 " << std::endl;	Sleep(200);
	gotoxy(40, 32);	std::cout << "                               ##########          #####         ############    ##       ##                                " << std::endl;	Sleep(500);



	gotoxy(60, 38);	std::cout << "THANKS FOR PLAYNG :)" << std::endl;
	_flushall();
	_getch();
}


void Menus::eraseView() {

	for (int y = 10; y < 49; y++) {
		gotoxy(0, y);
		std::cout << "                                                                                                                                                                                                                                                                                                  ";
	}
}

void Menus::printDracore() {
	gotoxy(15, 15);
	std::cout << "                .^~~:         ...                 " << std::endl;
	gotoxy(15, 16);
	std::cout << "            ^JG#&&&@&B7.     !BBBP?..             " << std::endl;
	gotoxy(15, 17);
	std::cout << "         :5#&&&&&&B?:      .:J5G@BY#B^:           " << std::endl;
	gotoxy(15, 18);
	std::cout << "       :G&&&&&&&&5.       P@&^YYBPYY??~           " << std::endl;
	gotoxy(15, 19);
	std::cout << "      ~&&&&&&&B#GB&B   ...J#B7GBGPP?7@&^          " << std::endl;
	gotoxy(15, 20);
	std::cout << "     ^&&&&&&&GP@@@@@J?55PP?J~7@@#?7~!P&^          " << std::endl;
	gotoxy(15, 21);
	std::cout << "     B&&&&&&BP&#PJ7Y@75PP557!##G55YJJJG~ :^       " << std::endl;
	gotoxy(15, 22);
	std::cout << "    ^&&&&&&#GJYY5Y7~B?P57!PGG5?J??YPGJG7.7J^.     " << std::endl;
	gotoxy(15, 23);
	std::cout << "    !&&&&BYYY55Y???JJJ?~..!BP7777Y5GP!~!~J?~!^^   " << std::endl;
	gotoxy(15, 24);
	std::cout << "    :&&#JJ555YY7YPPP5YY55P555555Y?7YPY77!?!!7~.   " << std::endl;
	gotoxy(15, 25);
	std::cout << "     YB7!!7JJ!5?7YPPPPPPPPPPPP55PPY?#J?!          " << std::endl;
	gotoxy(15, 26);
	std::cout << "     ^^~7J!~7~!!^..^?JJJJ?JJJJJ555PJJJ5^          " << std::endl;
	gotoxy(15, 27);
	std::cout << "    .7!^~!7YB#Y    :JYJJJYY5Y5555P5!?PY.          " << std::endl;
	gotoxy(15, 28);
	std::cout << "      :^: ~P&&&:   :PPPPPPPPPPPPPYJB&&~           " << std::endl;
	gotoxy(15, 29);
	std::cout << "            .~?J:   .!?Y555YY?7~:!&&G^            " << std::endl;
	gotoxy(15, 30);
	std::cout << "                                 ?J:              " << std::endl;
	gotoxy(15, 34);
	std::cout << "                     DRACORE                      " << std::endl;
	gotoxy(15, 35);
	std::cout << "                   DESCRIPTION                    " << std::endl;
}
void Menus::printMythosaur() {
	gotoxy(75, 15);	std::cout << "    .                                             " << std::endl;
	gotoxy(75, 16);	std::cout << "    ^#^    .:.                                    " << std::endl;
	gotoxy(75, 17);	std::cout << ":7 ^J#@BPP5JY#BG5BGY^.                            " << std::endl;
	gotoxy(75, 18);	std::cout << " 7P#PGB&@&##BB#&&&&&&##?:                         " << std::endl;
	gotoxy(75, 19);	std::cout << "  .Y5JP##&&GGB#&&&&##&#&&#5~::.                   " << std::endl;
	gotoxy(75, 20);	std::cout << "   ~7?B####B#&&#BB#&&#&@&&#####BGGJ:              " << std::endl;
	gotoxy(75, 21);	std::cout << "     .:^75#&&&&&#BB##&#&#####B&&&&&BY~.           " << std::endl;
	gotoxy(75, 22);	std::cout << "           .~?5B##&&@BG##&&&##&&###BBBBP7:        " << std::endl;
	gotoxy(75, 23);	std::cout << "               .^7JGB7~#&&####&&&&##BGBBBB5.      " << std::endl;
	gotoxy(75, 24);	std::cout << "                  .~?5GBJB#B#&&&&&##BBB#BBBB      " << std::endl;
	gotoxy(75, 25);	std::cout << "                   .7^7J?~GBB####B&####GPGB#7     " << std::endl;
	gotoxy(75, 26);	std::cout << "                    PY~  :YP!     ^YGBB&P75GB     " << std::endl;
	gotoxy(75, 27);	std::cout << "                    :~. .~JPJ.      .^?5#!^B&G~   " << std::endl;
	gotoxy(75, 28);	std::cout << "                     :PYGPG!          !7^B:^?YY   " << std::endl;
	gotoxy(75, 29);	std::cout << "                    ^P?#~~B         :!5Y~JG7      " << std::endl;
	gotoxy(75, 30);	std::cout << "                       ~  .         ^. ?.  :      " << std::endl;
	
	gotoxy(75, 34);	std::cout << "                    MYTHOSAUR                     " << std::endl;
	gotoxy(75, 35);	std::cout << "                   DESCRIPTION                    " << std::endl;
}
void Menus::printEreblin() {
	gotoxy(135, 15);
	std::cout << "              ^::: .                              " << std::endl;
	gotoxy(135, 16);
	std::cout << "            :!7?YYJ7                              " << std::endl;
	gotoxy(135, 17);
	std::cout << "           ~!7JJ?7YP5^                            " << std::endl;
	gotoxy(135, 18);
	std::cout << "          ^~~J5YYY5PPG5!:.                        " << std::endl;
	gotoxy(135, 19);
	std::cout << "          .~?5J7J555PP#G!7?~::.                   " << std::endl;
	gotoxy(135, 20);
	std::cout << "           ^!!~75P5PGGG!^!J!!55~^:.               " << std::endl;
	gotoxy(135, 21);
	std::cout << "           .~~JY55GGP55PY7!7?55??JJ7~:.           " << std::endl;
	gotoxy(135, 22);
	std::cout << "            :~7JYYPPPPPGGPPY?!!77!!777?7!.        " << std::endl;
	gotoxy(135, 23);
	std::cout << "             ^~J5555555555PPGPJ!!!!!!!!!7^        " << std::endl;
	gotoxy(135, 24);
	std::cout << "             .^!JYYJ?7JYYYY5PGBGGPPJ!^^~!^        " << std::endl;
	gotoxy(135, 25);
	std::cout << "              .:~!JY5?!777JYPGGGGGGGP?^           " << std::endl;
	gotoxy(135, 26);
	std::cout << "              ....!Y5J~7??JY55PPP555YJ:           " << std::endl;
	gotoxy(135, 27);
	std::cout << "               .  ^JJ..:~~!?JYYYYY55P~            " << std::endl;
	gotoxy(135, 28);
	std::cout << "              ..  .7!    .^!7???JY5P5             " << std::endl;
	gotoxy(135, 29);
	std::cout << "            .:^   :??     .:^~:^!!!?:             " << std::endl;
	gotoxy(135, 30);
	std::cout << "                 ~!!:                             " << std::endl;
	gotoxy(135, 34);
	std::cout << "                     EREBLIN                      " << std::endl;
	gotoxy(135, 35);
	std::cout << "                   DESCRIPTION                    " << std::endl;
}

void Menus::printAgrios() {
	gotoxy(15, 15);
	std::cout << "                    .:^!!777!^:.                  " << std::endl;
	gotoxy(15, 16);
	std::cout << "           ..   :~?JYPGGGBBBBGGGPJ~               " << std::endl;
	gotoxy(15, 17);
	std::cout << "     ..^!?JJJJJYGBGGGGGGGGPPGB###BBG!             " << std::endl;
	gotoxy(15, 18);
	std::cout << "   ~JG#BP5P5P#BGGGPGGGBBGPPGB###YJGBG5^           " << std::endl;
	gotoxy(15, 19);
	std::cout << ".^!!5B#G5PBGBGGGPPPPPGBGPPGB#B&#J5#GBGGJ.         " << std::endl;
	gotoxy(15, 20);
	std::cout << ".!??J5YY5GBGPGBGPP5Y55GP#&&&&&&#JY&5GGY5Y^        " << std::endl;
	gotoxy(15, 21);
	std::cout << "  .^!JYPBPJJJ5GP555Y5&@@@&&##BBG?J##PGGPGPJ~.     " << std::endl;
	gotoxy(15, 22);
	std::cout << "       .:^~!!5P7?7J?YJ?!~~~7?JJBJ7J&&&##BBB#&#B5G&" << std::endl;
	gotoxy(15, 23);
	std::cout << "             :Y:  ~Y^ .:?G##B#GG7~7:..     !B&@P.:" << std::endl;
	gotoxy(15, 24);
	std::cout << "              .J.!57?B&BGP?:  .              ^?57 " << std::endl;
	gotoxy(15, 25);
	std::cout << "              :7~J&#BJ^.                      .~Y^" << std::endl;
	gotoxy(15, 26);
	std::cout << "            .!PB?JJ.                      ..   :??" << std::endl;
	gotoxy(15, 27);
	std::cout << "YYJ!7^..:~~YB&#Y::                     .7PGP7. !5~" << std::endl;
	gotoxy(15, 28);
	std::cout << "7JJYBBB#&&BP?:                         7GBJJ5~?BJ " << std::endl;
	gotoxy(15, 29);
	std::cout << "      :!~.                             .JPPPPYY~  " << std::endl;
	gotoxy(15, 30);
	std::cout << "                                         .:::.    " << std::endl;
	gotoxy(15, 34);
	std::cout << "                     AGRIOS                       " << std::endl;
	gotoxy(15, 35);
	std::cout << "                   DESCRIPTION                    " << std::endl;
}
void Menus::printCannonBall() {
	gotoxy(75, 15);
	std::cout << "                                  ^:              " << std::endl;
	gotoxy(75, 16);
	std::cout << "                                 .GJB5            " << std::endl;
	gotoxy(75, 17);
	std::cout << "                        .775#PG#57~~#P            " << std::endl;
	gotoxy(75, 18);
	std::cout << "                       ^@@@@@@@@@@&!.             " << std::endl;
	gotoxy(75, 19);
	std::cout << "                       .JG#@&&#&&!^               " << std::endl;
	gotoxy(75, 20);
	std::cout << "                     ^  . ?&##B@@BB~~.            " << std::endl;
	gotoxy(75, 21);
	std::cout << "                   .?Y?JJ ^&&B5GP55~YY:           " << std::endl;
	gotoxy(75, 22);
	std::cout << "                  .!YJYYY. ~?~      :YJ           " << std::endl;
	gotoxy(75, 23);
	std::cout << "             .  .  .7JJYJ?~.        .YY.          " << std::endl;
	gotoxy(75, 24);
	std::cout << "         :!?Y@7J&!!???JYYYY7~       757           " << std::endl;
	gotoxy(75, 25);
	std::cout << "        ~?YYJ&BY@J!~!P5JYYYY?     :JY!            " << std::endl;
	gotoxy(75, 26);
	std::cout << "         ^?7::J.~..!YYB?JYYYY?!~7YY!.             " << std::endl;
	gotoxy(75, 27);
	std::cout << "                  7JJJJJYYYJ~~~~~.                " << std::endl;
	gotoxy(75, 28);
	std::cout << "                  ^!!~777?J?~^:~~.                " << std::endl;
	gotoxy(75, 29);
	std::cout << "                   ^!^~!J7..~!!7.                 " << std::endl;
	gotoxy(75, 30);
	std::cout << "                   :^:.:.   ...                   " << std::endl;
	gotoxy(75, 34);
	std::cout << "                   CANNONBALL                     " << std::endl;
	gotoxy(75, 35);
	std::cout << "                   DESCRIPTION                    " << std::endl;
}
void Menus::printMorsax() {
	gotoxy(135, 15);
	std::cout << "                                  .^Y?JYJ7?~.     " << std::endl;
	gotoxy(135, 16);
	std::cout << "                                .!!~557~~7Y?Y.    " << std::endl;
	gotoxy(135, 17);
	std::cout << "                              .!J?~~~J?7Y77Y?     " << std::endl;
	gotoxy(135, 18);
	std::cout << "                            .77Y!J~~~75~!!57^     " << std::endl;
	gotoxy(135, 19);
	std::cout << "                   .......^!?P!?J!!~~~~7:?7^^^    " << std::endl;
	gotoxy(135, 20);
	std::cout << "              .:~~!JJ77!?5J!!!JJ77?7!!!7~!Y ^~.   " << std::endl;
	gotoxy(135, 21);
	std::cout << "           .~!!!~~7!~~~??Y~~~~!?7~!?7??!?^Y  ~^   " << std::endl;
	gotoxy(135, 22);
	std::cout << "          !!7?~~~!!~~~!7J!~~~~~~7?7??7!!!?!  .!   " << std::endl;
	gotoxy(135, 23);
	std::cout << "         7!7^~7!~!~~J!!J7~~~!7!~77!77?JJJJY:      " << std::endl;
	gotoxy(135, 24);
	std::cout << "        7?!!~^!JJ~~~7J7P??!!!7?J!7!7!7??7J.       " << std::endl;
	gotoxy(135, 25);
	std::cout << "        7J77?!~~57~~~?JG7777!~?J7!!77~7~J7        " << std::endl;
	gotoxy(135, 26);
	std::cout << "  .:^^~!?5J?7?77G7~~~!?Y7???7!!?777!!J?Y?!        " << std::endl;
	gotoxy(135, 27);
	std::cout << "  :!?J?J?JJ?7777~^~!!!7PJJ7~~!~77JJJYJ557?!!~:.   " << std::endl;
	gotoxy(135, 28);
	std::cout << "         ..       ..~7JYY?J?~~!5J???!~~77!~~!~^^  " << std::endl;
	gotoxy(135, 29);
	std::cout << "               ^5JJJJ7~~~~77!!!.                  " << std::endl;
	gotoxy(135, 30);
	std::cout << "                7PYJYJ777!~^:.                    " << std::endl;
	gotoxy(135, 34);
	std::cout << "                     MORSAX                       " << std::endl;
	gotoxy(135, 35);
	std::cout << "                   DESCRIPTION                    " << std::endl;
}


void Menus::GameOrExit() {
	for (int y = 0; y < 49; y++) {
		gotoxy(0, y);
		std::cout << "                                                                                                                                                                                                                                                                                                  ";
	}

	gotoxy(40, 5);	std::cout << "                ###########      ##########     ############    ############    ##              ############                " << std::endl;
	gotoxy(40, 6);  std::cout << "                ############    ############     ##########      ##########     ##              ###########                 " << std::endl;
	gotoxy(40, 7);  std::cout << "                ##        ##    ##        ##         ##              ##         ##              ##                          " << std::endl;
	gotoxy(40, 8);  std::cout << "                ##        ##    ##        ##         ##              ##         ##              ##                          " << std::endl;
	gotoxy(40, 9);  std::cout << "                ##        ##    ##        ##         ##              ##         ##              ##                          " << std::endl;
	gotoxy(40, 10); std::cout << "                ############    ############         ##              ##         ##              #########                   " << std::endl;
	gotoxy(40, 11); std::cout << "                ############    ############         ##              ##         ##              #########                   " << std::endl;
	gotoxy(40, 12); std::cout << "                ##        ##    ##        ##         ##              ##         ##              ##                          " << std::endl;
	gotoxy(40, 13); std::cout << "                ##        ##    ##        ##         ##              ##         ##              ##                          " << std::endl;
	gotoxy(40, 14); std::cout << "                ##        ##    ##        ##         ##              ##         ##              ##                          " << std::endl;
	gotoxy(40, 15); std::cout << "                ##        ##    ##        ##         ##              ##         ##              ##                          " << std::endl;
	gotoxy(40, 16); std::cout << "                ############    ##        ##         ##              ##         ############    ##########                  " << std::endl;
	gotoxy(40, 17);	std::cout << "                ############    ##        ##         ##              ##         ############    ###########                 " << std::endl;

	gotoxy(40, 20); std::cout << "##        ##     ##########     ##        ##    ############    ############    ############    ############    ############" << std::endl;
	gotoxy(40, 21);	std::cout << "###      ###    ############    ###       ##    ############    ############    ############    ############    ############" << std::endl;
	gotoxy(40, 22); std::cout << "####    ####    ##        ##    ####      ##    ##                   ##         ##              ##        ##    ##          " << std::endl;
	gotoxy(40, 23); std::cout << "## ##  ## ##    ##        ##    ## ##     ##    ##                   ##         ##              ##        ##    ##          " << std::endl;
	gotoxy(40, 24); std::cout << "##  ####  ##    ##        ##    ##  ##    ##    ##                   ##         ##              ##        ##    ##          " << std::endl;
	gotoxy(40, 25);	std::cout << "##   ##   ##    ##        ##    ##   ##   ##    ############         ##         #########       ############    ############" << std::endl;
	gotoxy(40, 26);	std::cout << "##        ##    ##        ##    ##    ##  ##    ############         ##         #########       ############    ############" << std::endl;
	gotoxy(40, 27);	std::cout << "##        ##    ##        ##    ##     ## ##              ##         ##         ##              ####                      ##" << std::endl;
	gotoxy(40, 28); std::cout << "##        ##    ##        ##    ##      ####              ##         ##         ##              ## ###                    ##" << std::endl;
	gotoxy(40, 29); std::cout << "##        ##    ##        ##    ##       ###              ##         ##         ##              ##   ##                   ##" << std::endl;
	gotoxy(40, 30);	std::cout << "##        ##    ##        ##    ##        ##              ##         ##         ##              ##   ###                  ##" << std::endl;
	gotoxy(40, 31);	std::cout << "##        ##    ############    ##              ############         ##         ############    ##     ###      ############" << std::endl;
	gotoxy(40, 32);	std::cout << "##        ##     ##########     ##              ############         ##         ############    ##       ##     ############" << std::endl;



	
}

void Menus::parpadeoGameOrExit() {
	
		gotoxy(39, 35); std::cout << "#### #### #### #### ####  # #### #  #### ####  #### #    #### #  #  #### ####  # #### #  #### ####  #    #### #### #   # ####" << std::endl;
		gotoxy(39, 36);	std::cout << "#  # #  # #    #    #       #  #     ##  #  #  #  # #    #  # #  #  #  # #  #      #      ##  #  #  #    #    #  # #   # #   " << std::endl;
		gotoxy(39, 37);	std::cout << "#### #### ###  #### ####    ####     ##  #  #  #### #    ####  ##   #  # ####     #       ##  #  #  #    ###  #### #   # ### " << std::endl;
		gotoxy(39, 38);	std::cout << "#    # #  #       #    #    #  #     ##  #  #  #    #    #  #  ##   #  # # #     #        ##  #  #  #    #    #  #  # #  #   " << std::endl;
		gotoxy(39, 39);	std::cout << "#    #  # #### #### ####    #  #     ##  ####  #    #### #  #  ##   #### #  #    ####     ##  ####  #### #### #  #   #   ####" << std::endl;		Sleep(400);

		gotoxy(39, 35); std::cout << "                                                                                                                              " << std::endl;
		gotoxy(39, 36);	std::cout << "                                                                                                                              " << std::endl;
		gotoxy(39, 37);	std::cout << "                                                                                                                              " << std::endl;
		gotoxy(39, 38);	std::cout << "                                                                                                                              " << std::endl;
		gotoxy(39, 39);	std::cout << "                                                                                                                              " << std::endl;		Sleep(400);

		/*	if (_kbhit()) {
				char tecla = _getch();
				if (tecla == 'a' || tecla == 'A') {
					init = true;
				}
				if (tecla == 'z' || tecla == 'Z') {
					//logica de cierre
				}
			}
		}


		for (int y = 0; y < 49; y++) {
			gotoxy(0, y);
			std::cout << "                                                                                                                                                                                                                                                                                                  ";
		}*/
	
}

void Menus::mainGetReady() {
	for (int y = 0; y < 49; y++) {
		gotoxy(0, y);
		std::cout << "                                                                                                                                                                                                                                                                                                  ";
	}

	SoundManager snd;
	//snd.getMusic(L"Sounds\\Music-Battle Music.wav");

	gotoxy(31, 1);	std::cout << "~~~~7YYYYPY7777777777777777777777!~~~!?JJJJY5PGBPYJJJJJJJJJJ5&&&&&&P?777777777777777777~~~777777777~~~~~!YJJJJJJJJJJJJG?^~~~~!~~~~!5777777777Y&&###&&&" << std::endl;
	gotoxy(31, 2);	std::cout << "~~7777777777777777777777777777777?!~!JJJJJJJJJJJJJY555555YJJY&#BBBY777777777777777777?P5Y7777777777~~~~~~JJJJJJJJJJJJJJJ777?JJJ7!7777777777775GJ???JG&" << std::endl;
	gotoxy(31, 3);	std::cout << "~!?777777777777777777777777777777?7~!JJJJJJJJJJJJJ5BBGGGGGPY55YJJJJJ?777J55Y777J5PJ77JBBP7777777777~~7?JJJJJJJJJJJJJJJJJYYYJJJJJ???7777777777?77777775" << std::endl;
	gotoxy(31, 4);	std::cout << "~7?77777777777777777777777777777777?7JJJJJJJJJJJJJ5BB5JJPBB5JJJYYYYJJJ?75BB5???5BBY?7JGBP7777???7777JYJJJJJJJJJJJJJJJJJJJJJJJJJ?7777777777777777777777" << std::endl;
	gotoxy(31, 5);	std::cout << "!?77777777777777777777777777777777777???JJJJJJJJJJ5BB5YYGGPYJYPGGGGP5JYGGGGGG5GGGGGGJ?GBP77?5GGGPY??YJJJJJJJJJJJJJJJJJJJJJJJJ?777777777777777777777777" << std::endl;
	gotoxy(31, 6);	std::cout << "!777777777777777777777777777777777777???JJJJJJJJJJ5BGGGBGPYJJYP5YYPBGYJY5BBPJ?JPBB5J??GBP7JGBPJJPBPJJJJJJJJJJJJJJJJJJJJJJJJJJ???7777777777777777777777" << std::endl;
	gotoxy(31, 7);	std::cout << "77777777777777777777777777777777777?JJJJJJJJJJJJJJ5BBPYYPBG5JJY555GGGYJ?YBB57775BBJ77JGBP7PBGPPPGBGYJJJJJJJJJJJJJJJJJJJJJJJJJJJJJ?77777777777777777777" << std::endl;
	gotoxy(31, 8);	std::cout << "77777777777777777777777777777777777JJJJJJJJJJJJJJJ5BB5JJYGBGYPBP55PBGYJ?5BBPJ?75BBJ77JGBP7PBG555555YJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJ?7777777777777777777" << std::endl;
	gotoxy(31, 9);	std::cout << "77777777777777777777777777777777777JJJJJJJJJJJJJJJ5BBP55GBB5YGBPY5PBGYJJ5BBG5Y75BBPYJ?GBP7JGBP5Y5PYJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJ?777777777777777777" << std::endl;
	gotoxy(31, 10);	std::cout << "77777777777777777777777777777??JJ??JJJJJJJJJJJJJJJ5GGGGGGP5JJ5GGGPPGGYJJJ5GGG57?5GGGJ?GG5?JYPGGGGPYJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJ??7777777777777777" << std::endl;
	gotoxy(31, 11);	std::cout << "7777777777777777777777777777JJJJJJJYPPP5JJJJJYPPP5JYYYYYYJJJJJJYYJJYYJJJJJYYYJ777????7??7?JJJYYYJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJ??7777777777777" << std::endl;
	gotoxy(31, 12);	std::cout << "7777777777777777777777777777JJJJJJJYGBBGYJJJJPBBBPJJJJJJJJJJJJJJJJJJJJJJJJJJJ?7775PP77777?JJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJ?777777777777" << std::endl;
	gotoxy(31, 13);	std::cout << "!777777777777777777777777777?JJJJJJYGGGBPJJJYGGGBPJJJJYYYYJJJJYYYJYYYJJJJJJJ??7??GBGJ?777?YYYJJJYYYYJYJJJYYYYYJJJJJJJJJJJJJJJJJJJJJJJJJJJJ?77777777777" << std::endl;
	gotoxy(31, 14);	std::cout << "77777777777777777777777777777?JJJJJYGG5GGYJJGBPGBPJJ5GGGGGPYJJPGG5GGGPYJYPGGGGJJGGGGG57?5GGGGPJJ5GGPGGYJ5GGGGPJJJJJJJJJJJJJJJJJJJJJJJJJJJJ?77777777777" << std::endl;
	gotoxy(31, 15);	std::cout << "7777777777777777777777777777?JJJJJJYGBYPBPJYBG5GBPJPBBJ~GBBGYJPBBPYPBBPJ5BG5YJ??JGBGJ??GBPJ?PB5J5BGGPPYYBB5YYYJJJJJJJJJJJJJJJJJJJJJJJJJJJ?777777777777" << std::endl;
	gotoxy(31, 16);	std::cout << "77777777777777777?J?77????7?JJJJJJJYGBYYGG5PB5YGBPYGB5^:G&GB5JPBGYJYGBPJ5GBGPJ?77PBG77YBGGPPGBGJ5BBPJJJYGBGP5YJJJJJJJJJJJJJJJJJJJJJJJJJ?77777777777777" << std::endl;
	gotoxy(31, 17);	std::cout << "7777777777???777J55YJ?77!!!JJJJJJJJYGBYJPBGBGJYGBPYGB5^^G&GB5JPBGYJYGBPJJYYPGB577PBG77YBB5Y5555J5BB5JJJJY5PGBGYJJYYJJJJJJJJJJJJJJJJJJJJ?77777777777777" << std::endl;
	gotoxy(31, 18);	std::cout << "??????7?777777?Y555555!:777YJJJJJJJYGBYJ5BBB5JYGBPJ5BGJ7BBGGYJPBBYJYGBP?Y5JJPBP77PBGYJ?GBPJJYPJJ5BB5JJJYP5YPBGYJPGG5JJJJJJJJJJJJJJJJJJJJ?7777777777777" << std::endl;
	gotoxy(31, 19);	std::cout << "!!!7!!~~~~~~~755555555!.5@YJ??JJJJJJGGYJYGBPJJYGG5JYPGBBGGB5??5GG??JGB57JGGGG5?77JGGB5!?5GGGG5JJ5GG5JJJYGGGGP5JJPGGYJJJJJJJYYYJJJJJJJJJJJ?777777777777" << std::endl;
	gotoxy(31, 20);	std::cout << ":::~~~~~~~~~PGY5555555! 7GJ5PGBBBBBGP5J??7!::G575PPPP5YYPP@P^~~!!~~!~~~~7~:75YJJYY555?^^~~!7?7??JYYJJJJYYYYYJJJJJYJJJJJJJJP#&#GGGYJJJJJ?J?????JY?77777" << std::endl;
	gotoxy(31, 21);	std::cout << "..:~~~~~~~~~G&Y5555YYJ?YGB#########B5JJ5:...:B#JJPPGG5PY?PPJ~~~~~~~^...^7~.!5555555Y5J?P5^~~~!!!~~!!:::~7JYYY5PPPP5YYYJ7~~Y#BPP#@P7??7^^Y555Y555J?7???" << std::endl;
	gotoxy(31, 22);	std::cout << "..:~~~~~~~~~G#Y55YJJ5GB####BBB##GY7~~^?&:...:PGJYY5G@#JJG@YJJ~~~~~~^...~7!:?55555555YP@@G~~~~~~~~~~?.....?GGGGGGBBGGGGY?JYGG~^^P&#?!!:.^Y55555555YY!^^" << std::endl;
	gotoxy(31, 23);	std::cout << "..:~~~~~~~~~G#Y5J?PB###BBBB###B?^^~~~~!B^..7B##P7YYY#5?YYP7!!^~~~~~^...!77^Y55555555Y5&&B~~~~!~~~~~J:....!BBBB#&&&##&&&&&&&B?JP&@P~~^..^Y55555555557.." << std::endl;
	gotoxy(31, 24);	std::cout << "..:~~~~~~~~~G&5?JB##BBBBB##BBBJ?Y7~~~~!B:..5@&&?7P5PPGBY?7Y#GY~~~~~^...!77~5Y5555555Y5&&&7~~!7!~~~~J:..:Y#&&&&&&&&&&&&&&&&&&&#GG5!~~^..^Y555555555YJ.." << std::endl;
	gotoxy(31, 25);	std::cout << "..:~~~~~~~~~G@?5##BBBBBB#GYPPYG&@&?^~~~Y!~~!YGG5JPGPP5YY5!Y#&5~~~~~^...!77!GY5555555Y5&@@Y^!77!~~~~J^..5@&&&&&&&&&&&&&&&&&&&&?^~~~~~^..^Y555555555Y5:." << std::endl;
	gotoxy(31, 26);	std::cout << "..:~~~~~~~~~G55##BBBBBB##Y5&&&@&&@P!JYYY555Y?J7!Y&#&G?7?!7?Y&B!~~~~^...!77?GY5555555YYYYB5^!77!~~~~?~..5@@&&&&&&&&&&&&&&&B5G7~~~~~~~^..^Y555555555YP^." << std::endl;
	gotoxy(31, 27);	std::cout << "...^~~~~~~~~JJ##BBBBBB#GJGP&&#GPPB&G7Y55555Y?Y7!5@&#B5Y7777J#Y!~~~~^...!77?GY555555Y?7!!?5~!77!~~~~77..:75B&&&&&&BGBGPBBBJ!5!~^~~~~~^..^Y555555555YG~." << std::endl;
	gotoxy(31, 28);	std::cout << "...^~~~~~~~~!B#BBBBBBB#BJGBPYJ77!~G@7Y5555YY?!!##YY?Y?GJ55J7GY!^~?J!...!777PY55555Y777777Y~777!~!!^^~...^:?PGB&&#JB#Y5BBBYY#Y~^~!7!~^..~Y555555555YB!." << std::endl;
	gotoxy(31, 29);	std::cout << "...~!~~~~!~^?##BBBB###BPY?JJYY55J!JB!Y55J7JGPP55J?5J?7Y?555?5B7^~7?7~^:!7775YYY55Y7777777J!777!!7~~?...:!!~Y##&&BY##J&&&&YB#!~J?7~~~:..!JY5Y??Y555Y#?." << std::endl;
	gotoxy(31, 30);	std::cout << "...~7~~~~7~^Y#BBBB##PYJJYYY55Y?7!7J?YYJ7!~!!5B#Y!?J?JJ5Y555J!7!!7JJ77?!~!!7Y5?J55J7777777?7777!7~~YJ^~!7JJ7GBGB&BY#BJ&&&#J#B^7YYY?^^::!77YY77!J555Y#?." << std::endl;
	gotoxy(31, 31);	std::cout << "...!7~~~~7~^J#BB##GJJYYYY5YJ??JYYYYJJ777???75YJ?J???7JY555Y~7!?!J??!!!~!!~7?Y7J5Y77777777J?777~~!JYJYYYYY?!PGB&&#JGBJGBBG?#B~!YYJYJ^~777?Y7777J555Y5!." << std::endl;
	gotoxy(31, 32);	std::cout << "...!7!~~!7~^7###BY?Y5YYYYJJ?7555555JYY555555YY555555YJ?7JYY5?77!JJ?7JJ?7!777J7J5J77777777??77!:!7YJJJJJJYJ~JGB&&@BG5YJP?!7P5!^!JYJY7~77?Y77777?555Y7~." << std::endl;
	gotoxy(31, 33);	std::cout << "^..!7!~~!7~~~P#BJ!77JJYY7?55!J5555555555555555555555555J7GBJY??!!!!!!7^^7777?!?5?77777777777!~~!JYYYYYYJJY~~PGG5Y5YJGGG?!BP!77!~JJJJ~7!?J777777Y55?7~^" << std::endl;
	gotoxy(31, 34);	std::cout << "!..~77~~!7~~!!577?7777?J?7??77!JYY555555555555555YY55555JJB7J7!!!~7777~:777777?57777777777777~~!?J????JYJ?7^75GJ!!!!?PG7YB77777^JYJY!!:!7777777Y5Y7777" << std::endl;
	gotoxy(31, 35);	std::cout << "7^.~77!~!7!~~!!^77JY?!777~7?!!~!!~7??JJJJ???????JJY55555Y!5JY5!!7!7777!~7777777J!77!7!77!!!7!~~:^!?JJJJJJJJYJ7?7!777!?57GJ!777!~JYJY!::77777777J5J77Y7" << std::endl;
	gotoxy(31, 36);	std::cout << "77:^777~77!~~??!~!777!75PGY77!77!~7JJJ???JJJYYYY55555555?^YYYJ!7777777777777!77?77!B#P~!7BP~!!~!?JYYJYYJJJJJY7!?!~77777?P7777!~!YJJY~.!77777777?5?77Y7" << std::endl;
	gotoxy(31, 37);	std::cout << "77!:777!77!!!7!?!?!!YP####G!7777!!555555555555555555555?7PPG5~777777777777!!!77?YJ?&@G!JY@&7?JJYYJJ7?YJJJJJJJY!!J7~777777777!!~JYJY?^!7777777777J77777" << std::endl;
	gotoxy(31, 38);	std::cout << "777!7777777777!!!!!77?YGB##Y!777!^?555555555555555555Y?YB##BJ!777777777777!!!7JJJY7B&B75J&&?JYYJ?!!?JYYJJJJJJJY?!!!777777777!!JYJY?!777777777777777777" << std::endl;
	gotoxy(31, 39);	std::cout << "7777777777777777777777!!7G5PJ!!777~!JJYY55555YYYYJJ?7~G###P7!777777777777!7JJ?YYJY?J&&JY?&@J7J7~!7?PJ??YJJJJJJJYJ!!777777!~~?YYYY?~!77777777777777??77" << std::endl;
	gotoxy(31, 40);	std::cout << "77777777777757777777777!JB7!77!7777!!!~~!7777!!!!!!!!JBG5?!!77777777777777!~7JJJYYY7Y&#?!5@5^!!~#?J#&&Y7YJJJJJJJYJ~^^~!!!7JJYYYJ!!777777777777777!JG77" << std::endl;
	gotoxy(31, 41);	std::cout << "7777?J!7777JG77777777777BB7777777777777!!!!!!777777!~?7!!!7777777777777777!~7~7JJ!!!??P!!!J7~~7~5P!7PGP!YJJJJJJJYYJ????JJYYYY?!!!7777777777777777!J#?!" << std::endl;
	gotoxy(31, 42);	std::cout << "7777?P7777!YG777777777!5#B7!777777777?P5J7777??????????JJJJJJJJJJJJJJJJJJJJYJ!??7JJJGYJJJJJJJ~~!7?JYJJJ?JJJJJJJYJYYYYYYJYJ?7!~!YGG?!7777777777777!J#5!" << std::endl;
	gotoxy(31, 43);	std::cout << "7777?B?7777G#7!7777777J##B??JJJJJJYYY5###5Y55555555555555555B55555P555BGY5555YYY5555GP55555Y!?YYYJPGJYYYYYYYJYY7!7?????GG??JJYG###Y77777777777777!J#G7" << std::endl;
	gotoxy(31, 44);	std::cout << "Y!7!7#P777?B#JJYPJY5YYB##B55555555555P###PYYYYYYYYYYYY555YP##5Y5YGBYYP#GY5555555555YGGY5555J!YYYJ5#J7????JJYP??!~^?J?7G#B?Y5P#####5Y5YYYYYYJJJ???7J#B7" << std::endl;
	gotoxy(31, 45);	std::cout << "BJ7?JB#5YY5##5YBGYBGYP###B555555Y555YY###Y!77777!77775BJ?5##B55YP#GY5B#GY555555Y55YYG#5Y5555?!7?5#BJJJJJJ?7Y#5Y7!?77?B##5~?G#####B5555YPG555P5555Y5##5" << std::endl;


	for (int i = 0; i < 14; i++) {
		gotoxy(31, 47);	std::cout << "                                                           --- GET READY ---                                                                          "; Sleep(400);
		gotoxy(31, 47);	std::cout << "                                                                                                                                                      " ; Sleep(400);
	}

	for (int y = 0; y < 49; y++) {
		gotoxy(0, y);
		std::cout << "                                                                                                                                                                                                                                                                                                  ";
	}

}

void Menus::gameVictory() {
	for (int y = 0; y < 49; y++) {
		gotoxy(0, y);
		std::cout << "                                                                                                                                                                                                                                                                                                  ";
	}
	SoundManager snd;
	snd.getMusic(L"Sounds\\Music-Victory.wav");

	gotoxy(40, 10); std::cout << "              ##           ##    ##    ##############    ############     ##########     ############  ##       ##    ##                     " << std::endl;	Sleep(200);
	gotoxy(40, 11);	std::cout << "              ##           ##    ##    ##############    ############    ############    ############  ##       ##    ##                     " << std::endl;	Sleep(200);
	gotoxy(40, 12); std::cout << "              ##           ##    ##    ####                   ##         ##        ##    ##        ##  ##       ##    ##                     " << std::endl;	Sleep(200);
	gotoxy(40, 13); std::cout << "              ##           ##    ##    ####                   ##         ##        ##    ##        ##  ##       ##    ##                     " << std::endl;	Sleep(200);
	gotoxy(40, 14); std::cout << "              ##           ##    ##    ####                   ##         ##        ##    ##        ##   ##     ##     ##                     " << std::endl;	Sleep(200);
	gotoxy(40, 15);	std::cout << "              ##           ##    ##    ####                   ##         ##        ##    ############    ##   ##      ##                     " << std::endl;	Sleep(200);
	gotoxy(40, 16);	std::cout << "              ##           ##    ##    ####                   ##         ##        ##    ############     ## ##       ##                     " << std::endl;	Sleep(200);
	gotoxy(40, 17);	std::cout << "              ##           ##    ##    ####                   ##         ##        ##    ####              ###        ##                     " << std::endl;	Sleep(200);
	gotoxy(40, 18); std::cout << "               ##         ##     ##    ####                   ##         ##        ##    ## ###            ###        ##                     " << std::endl;	Sleep(200);
	gotoxy(40, 19); std::cout << "                ##       ##      ##    ####                   ##         ##        ##    ##   ##           ###        ##                     " << std::endl;	Sleep(200);
	gotoxy(40, 20);	std::cout << "                 ##     ##       ##    ####                   ##         ##        ##    ##   ###          ###        ##                     " << std::endl;	Sleep(200);
	gotoxy(40, 21);	std::cout << "                  #######        ##    ##############         ##         ############    ##     ###        ###                               " << std::endl;	Sleep(200);
	gotoxy(40, 22);	std::cout << "                   #####         ##    ##############         ##          ##########     ##       ##       ###        ##                     " << std::endl;	Sleep(500);



	gotoxy(60, 38);	std::cout << "THANKS FOR PLAYNG :)" << std::endl; Sleep(500);
	gotoxy(60, 40);	std::cout << "QUARKJAM N3 - TEAM 6" << std::endl; Sleep(500);
	Sleep(1500);

	_getch();

	for (int y = 0; y < 49; y++) {
		gotoxy(0, y);
		std::cout << "                                                                                                                                                                                                                                                                                                  ";
	}



}
