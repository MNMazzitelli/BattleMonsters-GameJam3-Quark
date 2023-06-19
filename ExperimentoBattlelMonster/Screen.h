#pragma once

#ifndef SCREEN_H
#define SCREEN_H

#include <windows.h> 
#include "IView.h"
#include "Color.h"


class Screen:public IView {
	short height;
	short width;
public:
	Screen(short, short);
	~Screen() = default;
	void gotoxy(int, int);
	void hideCursor();
	void setWindow();
	void setTextColor(Color color);
	void setConsoleTextFont();
};
#endif // !SCREEN_H
