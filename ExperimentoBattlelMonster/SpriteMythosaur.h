#pragma once
#include "Screen.h"
#include "DrawBase.h"
class Screen;

class SpriteMythosaur : public Screen, public DrawBase
{
public:
	SpriteMythosaur();
	void update();
	void drawCriature(int, int);
	~SpriteMythosaur() {};
};