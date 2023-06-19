#pragma once
#include "Screen.h"
#include "DrawBase.h"
class Screen;

class SpriteCannonBall : public Screen, public DrawBase
{
public:
	SpriteCannonBall();
	void update();
	void drawCriature(int, int);
	~SpriteCannonBall() {};
};