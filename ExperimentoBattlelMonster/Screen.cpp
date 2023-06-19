
#include "Screen.h"


Screen::Screen(short width,short height){
	this->width = width;
	this->height = height;
	setWindow();
	hideCursor();
	setConsoleTextFont();
}

void Screen::gotoxy(int x, int y) {
	HANDLE hand = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD dwPos;
	dwPos.X = x;
	dwPos.Y = y;
	SetConsoleCursorPosition(hand, dwPos);
}

void Screen::hideCursor() {
	HANDLE hand = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_CURSOR_INFO cci;
	cci.dwSize = 1;
	cci.bVisible = false;
	SetConsoleCursorInfo(hand, &cci);
}

void Screen::setWindow() {
	//get handle 
	HANDLE hand = GetStdHandle(STD_OUTPUT_HANDLE);

	COORD coord;
	coord.X = width;
	coord.Y = height;
	bool success;

	SMALL_RECT rect;
	rect.Top = 0;
	rect.Left = 0;
	rect.Bottom = height - 1;
	rect.Right = width - 1;

	//setting buffer size
	success = SetConsoleScreenBufferSize(hand, coord);

	//change console size to buffer size;
	success = SetConsoleWindowInfo(hand, TRUE, &rect);


	HWND consoleWindow = GetConsoleWindow();
	SetWindowLong(consoleWindow, GWL_STYLE, GetWindowLong(consoleWindow, GWL_STYLE) & ~WS_MAXIMIZEBOX & ~WS_SIZEBOX);
	return;
}

void Screen::setTextColor(Color color) {
	HANDLE hand = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hand, color);
}


void Screen::setConsoleTextFont() {
	CONSOLE_FONT_INFOEX cfi;
	cfi.nFont = sizeof cfi;
	cfi.nFont = 0;
	cfi.dwFontSize.Y = 20;
	cfi.FontFamily = FF_DONTCARE;
	cfi.FontWeight = FW_NORMAL;
	wcscpy_s(cfi.FaceName, L"Consloas");
	SetCurrentConsoleFontEx(GetStdHandle(STD_OUTPUT_HANDLE), FALSE, &cfi);
}
