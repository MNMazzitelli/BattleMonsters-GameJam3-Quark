#pragma once
#include "Screen.h"
#include "DrawBase.h"
class Screen;

class SpriteDracore : public Screen, public DrawBase
{
public:
	SpriteDracore();
	void update();
	void drawCriature(int, int);
	~SpriteDracore() {};
};