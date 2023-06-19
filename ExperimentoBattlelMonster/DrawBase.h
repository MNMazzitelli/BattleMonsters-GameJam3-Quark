#pragma once
class DrawBase
{
public:
	virtual void drawCriature(int x, int y) = 0;
	virtual ~DrawBase() {};
};

