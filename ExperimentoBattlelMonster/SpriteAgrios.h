#pragma once
#include "Screen.h"
#include "DrawBase.h"
class Screen;

class SpriteAgrios : public Screen, public DrawBase
{
public:
	SpriteAgrios();
	void update();
	void drawCriature(int, int);
	~SpriteAgrios() {};
};