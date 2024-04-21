#include "Hero.h"

using namespace std;

Hero::Hero(double HP, double baseDmg) : Sprite(HP, baseDmg)
{
    this->sword = nullptr;
}

void Hero::equipSword(Sword* sword)
{
    this->sword = sword;
}

Hero* Hero::createStarterHero()
{
    return new Hero(100, 10);
}

void Hero::attack(Sprite* targetSprite)
{
	double finalDmg = Sprite::getBaseDamage();

    if (this->sword != nullptr)
    {
        finalDmg += this->sword->getDmg();
    }

	bool isAlive = targetSprite->getHit(finalDmg);
	
	if (!isAlive)
	{
		std::cout << "Enemy sprite has been killed" << std::endl;
	}
}