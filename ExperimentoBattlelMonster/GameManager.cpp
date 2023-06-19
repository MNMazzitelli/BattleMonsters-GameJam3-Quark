#include <iostream>
#include <time.h>
#include <stdio.h>
#include <cmath>
#include <conio.h>
#include <random>
#include <string>

#include "GameManager.h"
#include "Creature.h"
#include "Attack.h"
#include "Skill.h"
#include "spriteDracore.h"
#include "spriteMythosaur.h"
#include "spriteAgrios.h"
#include "spriteEreblin.h"
#include "spriteCannonBall.h"
#include "spriteMorsax.h"


using namespace std;

//metodo de clase Menus -- getMonsterSelection(int) -- retorna la seleccion para inicializar los monstruos y el monst del player
GameManager::GameManager(){
	//Dracore definition
	
}

Creature* GameManager::selector(int npcRandom) {
	int op = 0;
	npcRandom != 0 ? op = npcRandom:op = mn->getMonsterSelection();
	
	Creature* criature;
	switch (op) {
	case 1: {
		Movement* dracoreMovemntens[4] = {
		new Attack("Garras","", 40, L"Sounds\\Sound-Attack(Scratch).wav"),
		new Attack("Fuego ","", 60, L"Sounds\\Sound - Attack (Flames).wav"),
		new Skill("Humo","", L"Sounds\\Sound - Attack (Smoke).wav", -1.2, SPEED, false),
		new Skill("Ira","", L"Sounds\\Sound - Attack (Rage).wav", 5, STRENGTH, true),
		};
		return criature = new Creature("Dracore", 1000, 60, 6, dracoreMovemntens, new SpriteDracore());
		break;
	}
	case 2: {
		Movement* mythosaurioMovemntens[4] = {
		new Attack("Garras","", 30,L"Sounds\\Sound-Attack(Scratch).wav"),
		new Attack("Corneada ","", 35,L"Sounds\\Sound - Attack (Big Horn).wav"),
		new Skill("Rugir","",L"Sounds\\Sound - Attack (Growl).wav", -1, SPEED, false),
		new Skill("Ira","",L"Sounds\\Sound - Attack (Rage).wav", 6, STRENGTH, true)
		};
		return criature = new Creature("Mythosaurio", 890, 40, 7, mythosaurioMovemntens, new SpriteMythosaur());
		break;
	}
	case 3: {
		Movement* ereblinMovements[4] = {
		new Attack("Rafaga de Puas", "descripcion", 60,L"Sounds\\Sound - Attack (Barbed Flurry).wav"),
		new Attack("Piedrazo", "descripcion", 60,L"Sounds\\Sound - Attack (Stone Launcher).wav"),
		new Skill("Ataque de Arena", "descripcion",L"Sounds\\Sound - Attack (Sand Attack).wav", -1, SPEED, false),
		new Skill("PosiciÃ³n De Combate", "descripcion",L"Sounds\\Sound - Attack (Battle Position).wav", -1,SPEED, true),
		};
		return criature = new Creature("Erebin", 750, 60, 4, ereblinMovements, new SpriteEreblin());
		break;
	}
	case 5: {
		Movement* cannonapeMovements[4] = {
		new Attack("CANNON BALL", "descripcion", 70,L"Sounds\\Sound - Attack (Cannon Ball).wav"),
		new Attack("Mano Cuchilla", "descripcion", 70,L"Sounds\\Sound - Attack (Scratch).wav"),
		new Skill("Coletazo", "descripcion",L"Sounds\\Sound - Attack (Tail Lash).wav", -10, STRENGTH, false),
		new Skill("Primate Alfa", "descripcion",L"Sounds\\Sound - Attack (Alpha Prime).wav", 8, STRENGTH, true),
		};

		return criature = new Creature("CannonApe", 700, 78, 5, cannonapeMovements, new SpriteCannonBall());
		break;
	}
	case 4: {
		Movement* agriosMovements[4] = {
		new Skill("Camuflaje", "descripcion",L"Sounds\\Sound - Attack (Camouflage).wav" ,-1, SPEED, false),
		new Skill("Regeneracion", "descripcion",L"Sounds\\Sound - Attack (Regeneration).wav",70, LIFE, false),
		new Attack("Mordico","descripcion",50,L"Sounds\\Sound - Attack (Bite).wav"),
		new Attack("Coletazo","descripcion",45,L"Sounds\\Sound - Attack (Tail Lash).wav"),
		};
		return criature = new Creature("Agrios", 950, 50, 3, agriosMovements, new SpriteAgrios());
		break;
	}
	case 6: {
		Movement* morsaxMovements[4] = {
		new Attack("Mordico","descripcion",50,L"Sounds\\Sound - Attack (Bite).wav"),
		new Attack("Aplastar","descripcion",35,L"Sounds\\Sound - Attack (Smash).wav"),
		new Skill("Aliento Feroz", "descripcion",L"Sounds\\Sound - Attack (Fierce Breath).wav" ,-15, STRENGTH, false),
		new Skill("Dormir", "descripcion",L"Sounds\\Sound - Attack (Snore).wav" ,40, LIFE, true),
		};

		return criature = new Creature("Morsax", 900, 30, 2, morsaxMovements, new SpriteMorsax());
		break;
	}
	}

}

void GameManager::mainTitle() {
	Menus *mn = new Menus();
	this->mn =mn;
	mn->mainTitle();
	bucleMenu();	
}

void GameManager::bucleMenu() {
	char op = 'a';
	do {
		system("cls");
		mn->GameOrExit();
		bool init = false;

		while (!init) {

			_flushall();
			//	cout << "Espera momentanea" << endl;;
			mn->parpadeoGameOrExit();
			if (_kbhit()) {
				op = _getch();
				if (toupper(op) == 'A' || toupper(op) == 'Z') { init = true; }
			}
		}

		if (toupper(op) == 'A') { playerSelector(); }
		if (toupper(op) == 'Z') { break; }
		
	} while (toupper(op)!='Z');
}


void GameManager::playerSelector() {
	mn->mainSelection();
	//primero llamar al get Ready
	mn->mainGetReady();
	mainBattle();
}

void GameManager::mainBattle(){
	//ver despues de seleccion manda combate
	system("cls");
	bool victoria = false;
	player = selector(0);
	npc = selector((int)rand() % 5 + 1);
	view = new View(this);



	SoundManager sm;
	//battle loop sound
	int countSounds = 0;
	clock_t start, end;
    double elapsed_time;
    int seconds = 0;
	std::string accion;
	bool paused = false;
    start = clock();

    while (true) {

		//Pause menu logic
		
	

		//clock logic
		accion = "";
        end = clock();
        elapsed_time = (double)(end - start) / CLOCKS_PER_SEC;
        int seconds_elapsed = floor(elapsed_time);

		if (seconds_elapsed >= seconds) {

			seconds++;
			view->getArena()->updateTime(seconds);
		}


		_flushall();
		if (_kbhit()) {
			char keyPressed = _getch();
			//player´s turn logic
			if (elapsed_time >= player->getNextTurn() || keyPressed == 'b') {
				int tecla = -1;
				if (keyPressed == '1') { tecla = 0; }
				if (keyPressed == '2') { tecla = 1; }
				if (keyPressed == '3') { tecla = 2; }
				if (keyPressed == '4') { tecla = 3; }
			//	if (keyPressed == 'b') {
			//		paused = true;
				//	mainPause();
			//		start = end;
					//system("paused");
				//	system("cls");
					 // logica para poder parar el relog
			//	}


				if (tecla == 0 || tecla == 1 || tecla == 2 || tecla == 3) {
					accion = player->getName() + " uso " + player->getMovement(tecla)->getName();
					player->useMovement(npc, tecla);
					sm.getSound(player->getMovement(tecla)->getMovSound());

					if (dynamic_cast<Skill*>(player->getMovement(tecla))) {
						view->setPlayerItself(dynamic_cast<Skill*>(player->getMovement(tecla))->getTargetItself());
					}
					else { view->setPlayerItself(false); }
					//necesita actualizacion apenas termina 
						//setea una accion para meterma en pantalla
					view->getArena()->getPlayer()->setEvent(accion);

					player->setCurrentTimerValue(elapsed_time);
					//Capturo el proximo turno para calculos en pantalla
					view->getArena()->getPlayer()->setNextTurn(player->getNextTurn());
				}
			}

		}

			if (elapsed_time >= npc->getNextTurn()) {
				//	cout << "NPC's turn" << endl;
				std::random_device rd;
				std::mt19937 gen(rd());

				// Crear una distribución uniforme de enteros entre 0 y 3 incluyendo ambos extremos
				std::uniform_int_distribution<> dist(0, 3);

				// Generar un número aleatorio
				int random_number = dist(gen);

				//		cout << "ataque del NPC :" << npc->getMovementName(random_number) << endl;
				// 
						//Necesito llenarla para mostrar la informacion del combate
				accion = npc->getName() + " uso " + npc->getMovement(random_number)->getName();
				//setea una accion para meterma en pantalla
				view->getArena()->getNPC()->setEvent(accion);
	

				npc->useMovement(player, random_number); 
				sm.getSound(player->getMovement(random_number)->getMovSound());
			
				npc->setCurrentTimerValue(elapsed_time);
				//Capturo el proximo turno para calculos en pantalla
				view->getArena()->getNPC()->setNextTurn(npc->getNextTurn());

				if (dynamic_cast<Skill*>(npc->getMovement(random_number))) {
					view->setNpcItself(dynamic_cast<Skill*>(npc->getMovement(random_number))->getTargetItself());
				}
				else { view->setNpcItself(false); }
			}
			//capturo el timepo exacto de batalla pra calculos
			view->getArena()->setBattleTime(elapsed_time);
			//actualiza la pantalla en general
			view->updateArena();

			if (view->getArena()->getNPC()->getLife() == 0) {
				//al menu Victoria;
				victoria = true;
				break;
			}
			if (view->getArena()->getPlayer()->getLife() == 0) {
				//al menu derrota;
				break;
			}

			Sleep(30);
     }
	 // los menus de victoria y derrota tiene que venir aca;
      mostrarResultado(victoria);
}

void GameManager::mostrarResultado(bool result) {
	system("cls");
	result ? mn->gameVictory() : mn->gameOver();
	//ver si funciona?
	delete player;
	delete npc; 
	system("cls");
//	bucleMenu();
}

void GameManager::mainPause() {
	Menus mn;
	mn.mainPause();
}

GameManager::~GameManager() {
	delete player;
	delete npc;
	delete view;
	delete mn;
}
