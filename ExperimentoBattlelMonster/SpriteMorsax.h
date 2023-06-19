#pragma once
#include "Screen.h"
#include "DrawBase.h"
class Screen;

class SpriteMorsax : public Screen, public DrawBase
{
public:
	SpriteMorsax();
	void update();
	void drawCriature(int, int);
	~SpriteMorsax() {};
};