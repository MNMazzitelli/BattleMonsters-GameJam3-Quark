#pragma once
#include <string>
#include <iostream>
#include <windows.h>

class SoundManager
{
public:
	void getMusic(const wchar_t* path);
	void getSound(const wchar_t* path);
};