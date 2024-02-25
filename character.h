#pragma once
#include <iostream>
#include <string>
using namespace std;
class character
{
private:
	int positionX;
	int positionY;
	float size;
	int color;
	int score;
public:
	string name;
	void speed();
	void death(); 
	void move(int x,int y);
	void dropbomb(int kill);
	void take_boster();
	void winer();




};

