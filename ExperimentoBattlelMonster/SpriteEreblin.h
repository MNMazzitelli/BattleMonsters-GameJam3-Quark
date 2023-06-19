#pragma once
#include "Screen.h"
#include "DrawBase.h"
class Screen;

class SpriteEreblin : public Screen, public DrawBase
{
public:
	SpriteEreblin();
	void update();
	void drawCriature(int, int);
	~SpriteEreblin() {};
};