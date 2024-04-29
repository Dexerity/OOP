#include "Sprite.h"

Sprite::Sprite(double HP, double baseDmg)
{
	this->HP = HP;
	this->baseDamage = baseDmg;
	this->baseArmor = 0;
}

bool Sprite::isAlive()
{
	return this->HP > 0;
}

void Sprite::setHP(double HP)
{
	this->HP = HP;
}

void Sprite::setBaseDamage(double baseDamage)
{
	this->baseDamage = baseDamage;
}

void Sprite::setBaseArmor(double baseArmor)
{
	this->baseArmor = baseArmor;
}

double Sprite::getHP()
{
	return this->HP;
}

double Sprite::getBaseDamage()
{
	return this->baseDamage;
}

double Sprite::getBaseArmor()
{
	return this->baseArmor;
}

bool Sprite::getHit(double attackingdmg)
{
	double finalDmg = attackingdmg - this->baseArmor;

	this->HP -= finalDmg;
	std::cout << "Sprite's HP was reduced by " << finalDmg << std::endl;
	
	return isAlive();
}

void Sprite::attack(Sprite* targetSprite)
{
	double finalDmg = this->baseDamage;

	bool isAlive = targetSprite->getHit(finalDmg);
	
	if (!isAlive)
	{
		std::cout << "Enemy sprite has been killed" << std::endl;
	}
}


