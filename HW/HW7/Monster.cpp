#include "Monster.h"

using namespace std;

Monster::Monster(double HP, double baseDmg) : Sprite(HP, baseDmg)
{
    this->mana = 100;
}

void Monster::buff()
{
    this->mana -= 10;
    this->setBaseDamage(this->getBaseDamage() + 5);
}

void Monster::setMana(int mana)
{
    this->mana = mana;
}

int Monster::getMana()
{
    return this->mana;
}

void Monster::attack(Sprite* targetSprite)
{
	double finalDmg = Sprite::getBaseDamage();

	bool isAlive = targetSprite->getHit(finalDmg);

    setMana(getMana() + 2);
	
	if (!isAlive)
	{
		std::cout << "Enemy sprite has been killed" << std::endl;
	}
}