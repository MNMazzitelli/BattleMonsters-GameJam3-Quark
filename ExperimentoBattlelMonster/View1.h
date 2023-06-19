#pragma once
#ifndef VIEW1_H
#define VIEW1_H

#include <iostream>
#include <Windows.h>
#include "GameManager.h"
#include <vector>
#include "Screen.h"

class GameManager;

class View1:public Screen {
	int tiempo;
	bool waiting;
	bool waitingNpc;
	int strcountPlayer;
	int strcountNpc;
	std::vector<std::string> listaEventos;
	double timerNpc,timerPlayer;
	string playerEvent;
	string npcEvent;

public:
	View1();
	//void gotoxy(int x, int y);
	void dibujar(GameManager* gameManager);
	void actualizar(string);
	void dibujarTiempo(int);
//	void hideCursor();
	/// <summary>
	/// 
	/// </summary>
	/// <param name="witdh"></param>
	/// <param name="height"></param>
	//void ajustarVentana(SHORT, SHORT);
	void actualizarDinamicos(GameManager* gameManager, double tiempo);
	void actualizarSelector(int pos);
	void eventoNpc(double);
	void eventoPlayer(double);
	void eventoNpcDisparador(string);
	void eventoPlayerDisparador(string);
	void eraseEvent(string erase,int,int);
	void update();
};
#endif // !VIEW1_H