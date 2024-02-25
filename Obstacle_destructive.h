#pragma once
#include <iostream>

using namespace std;

class Obstacle_destructive
{
private:
	int positionX;
	int positionY;
	int design;
public:
	void destroy();
	void blocking();
};

