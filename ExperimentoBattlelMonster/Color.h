#pragma once
#ifndef COLOR_H
#define COLOR_H
/// <summary>
/// From 8 to last can be use eigther text and background
/// BLINK is a text flicker (Parapadeo)
/// Used mode: HANDLE hand = GetStdHandle(STD_OUTPUT_HANDLE)
///            SetConsoleTextAttribute(hand, "COLOR from the list");
/// </summary>
enum Color {
	BLACK = 0, BLUE = 1, GREEN = 2, CYAN = 3, RED = 4, MAGENTA = 5, BROWN = 6,
	LIGHTGRAY = 7, DARKGRAY = 8, LIGHTBLUE = 9, LIGHTGREEN = 10, LIGHTCYAN = 11,
	LIGHTRED = 12, LIGHTMAGENTA = 13, YELLOW = 14, WHITE = 15, BLINK = 0x8000
};
#endif // !COLOR_H