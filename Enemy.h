#pragma once
#include <iostream>
#include <string.h>
using namespace std;
class Enemy
{
private:

	int enemy_IDtype;
	int life;
	float size;
	int positionX;
	int positionY;
	int color;

public:
	string name;
	void move(int x,int y);
	void attack();
	void death();
	void be_divided();
};

