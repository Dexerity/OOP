#pragma once
#include <iostream>

class Sprite
{
public:
	Sprite(double HP, double baseDmg);
	bool getHit(double dmg);
	void attack(Sprite* targetSprite);
	bool isAlive();
	void setHP(double HP);
	void setBaseDamage(double baseDamage);
	double getHP();
	double getBaseDamage();
private:
	double HP;
	double baseDamage;
};

