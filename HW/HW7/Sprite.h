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
	void setBaseArmor(double baseArmor);
	double getHP();
	double getBaseDamage();
	double getBaseArmor();
private:
	double HP;
	double baseDamage;
	double baseArmor;
};

