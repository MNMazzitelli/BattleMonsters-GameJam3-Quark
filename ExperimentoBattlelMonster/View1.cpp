#include "View1.h"


#define PLAYERX  7
#define PLAYERY  5 + 2
#define TIEMPOX ( 200/2) -1
#define TIEMPOY  3
#define OPONENTX  200- 30
#define OPONENTY  48 - 12
#define TEXTODELUCHAX (200 / 2) - 25
#define TEXTODELUCHAY 3 + 2

using namespace std;


View1::View1():Screen(200,48) {	
	setWindow();
	hideCursor();
	tiempo = 0;
	strcountPlayer = 0;
	strcountNpc = 0;
	waiting = false;
	waitingNpc = false;
	npcEvent = "";
	playerEvent = "";
};



void View1::dibujar(GameManager* gameManager) {


	gotoxy(PLAYERX, PLAYERY); cout << "Name: " << gameManager->getPlayer()->getName();
	gotoxy(PLAYERX, PLAYERY + 1); cout << "Life: " << gameManager->getPlayer()->getLife();
	gotoxy(PLAYERX, PLAYERY + 2); cout << "Strength: " << gameManager->getPlayer()->getStrength();
	gotoxy(PLAYERX, PLAYERY + 3); cout << "Speed: " << gameManager->getPlayer()->getSpeed();
	gotoxy(PLAYERX + 3, PLAYERY + 5); cout << "Habilidad 1: " << "Prueba";
	gotoxy(PLAYERX + 3, PLAYERY + 6); cout << "Habilidad 2: " << "";
	gotoxy(PLAYERX + 3, PLAYERY + 7); cout << "Habilidad 3: " << "";
	gotoxy(PLAYERX + 3, PLAYERY + 8); cout << "Habilidad 5: " << "";


	gotoxy(OPONENTX, OPONENTY); cout << "Name: " << gameManager->getNpc()->getName();
	gotoxy(OPONENTX, OPONENTY + 1); cout << "Life: " << gameManager->getNpc()->getLife();
	gotoxy(OPONENTX, OPONENTY + 2); cout << "Strength: " << gameManager->getNpc()->getStrength();
	gotoxy(OPONENTX, OPONENTY + 3); cout << "Speed: " << gameManager->getNpc()->getSpeed();
	gotoxy(OPONENTX + 3, OPONENTY + 5); cout << "Habilidad 1: " << "Prueba";
	gotoxy(OPONENTX + 3, OPONENTY + 6); cout << "Habilidad 2: " << "";
	gotoxy(OPONENTX + 3, OPONENTY + 7); cout << "Habilidad 3: " << "";
	gotoxy(OPONENTX + 3, OPONENTY + 8); cout << "Habilidad 5: " << "";
}

void View1::actualizar(string event) {
	//size_t cont;
	int contRenglones = 1;
	if (event != "") listaEventos.push_back(event);
}

void View1::eventoPlayerDisparador( string evento) {
	playerEvent = evento;
}

void View1::eventoNpcDisparador( string evento) {
	npcEvent = evento;
}

void View1::eventoPlayer(double tiempo) {
	gotoxy(PLAYERX + 35, PLAYERY - 1); cout << "___________________ACCIONES_______________________";
	if (playerEvent != "") {
		if (playerEvent.length() > strcountPlayer) {
			gotoxy(PLAYERX + 35 + strcountPlayer, PLAYERY ); cout << playerEvent.substr(strcountPlayer, strcountPlayer + 1);
			strcountPlayer++;
		}
		else {		
			if (!waiting) {
				timerPlayer = tiempo + 1;
				waiting = true;
			}
		}
	}
	if (timerPlayer < tiempo && timerPlayer != 0) {
		string erase = "";
		for (int cont = 0; cont < playerEvent.length(); cont++) {
			erase += " ";			
		}
		eraseEvent(erase, PLAYERX + 35,PLAYERY);
		playerEvent = "";
		waiting = false;
		timerPlayer = 0;
		strcountPlayer = 0;
	}
}

void View1::eventoNpc(double tiempo) {
	gotoxy(OPONENTX  -60, OPONENTY - 1); cout << "___________________ACCIONES_______________________";
	if (npcEvent != "") {
		if (npcEvent.length() > strcountNpc) {
			gotoxy(OPONENTX - 60 + strcountNpc, OPONENTY); cout << npcEvent.substr(strcountNpc, strcountNpc + 1);
			strcountNpc++;
		}
		else {
			if (!waitingNpc) {
				timerNpc = tiempo + 0.5;
				waitingNpc = true;
			}
		}
	}
	if (timerNpc < tiempo && timerNpc != 0) {
		string erase = "";
		for (int cont = 0; cont < npcEvent.length(); cont++) {
			erase += " ";
		}
		eraseEvent(erase, OPONENTX - 60,OPONENTY);
		npcEvent = "";
		waitingNpc = false;
		timerNpc = 0;
		strcountNpc = 0;
	}
}

void View1::eraseEvent(string erase,int x,int y) {
	gotoxy(x, y); cout << erase;
}

void View1::actualizarDinamicos(GameManager* gameManager, double tiempo) {
	gotoxy(PLAYERX, PLAYERY - 1);
	
		double tiempoRestante = 0;
		double porcentaje = 0;
		porcentaje = ((gameManager->getPlayer()->getNextTurn() - tiempo) * 100) / gameManager->getPlayer()->getSpeed();
		tiempoRestante = 25 * porcentaje / 100;
		for (int c = 25; c >= 0; c--) {
			c < tiempoRestante ? printf("%c", 196) : printf("%c", 254);
		}
	
     	gotoxy(OPONENTX, OPONENTY - 1);
		tiempoRestante = 0;
	    porcentaje = 0;
		porcentaje = ((gameManager->getNpc()->getNextTurn() - tiempo) * 100) / gameManager->getNpc()->getSpeed();
		tiempoRestante = 25 * porcentaje / 100;

		for (int c = 25; c >= 0; c--) {
			c < tiempoRestante ? printf("%c", 196) : printf("%c", 254);
		}
	

}

void View1::actualizarSelector(int pos) {
	gotoxy(PLAYERX, PLAYERY + 5 + pos); printf("%c", 175);
}

void View1::dibujarTiempo(int tiempo) {
	gotoxy(TIEMPOX, TIEMPOY); cout << tiempo;
	this->tiempo = tiempo;
}

void View1::update() {
	gotoxy(TIEMPOX, TIEMPOY); cout << tiempo;
	this->tiempo = tiempo;
}