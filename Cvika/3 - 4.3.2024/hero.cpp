#include "hero.h"
#include "sword.h"

int Hero::heroesAlive = 0;

Hero::Hero(double baseDmg, double HP)
{
    this->baseDmg = baseDmg;
    this->HP = HP;
    this->sword = nullptr;
    heroesAlive++;
}

Hero::Hero(double baseDmg, double HP, Sword* sword)
{
    this->baseDmg = baseDmg;
    this->HP = HP;
    this->sword = sword;
    heroesAlive++;
}

bool Hero::isAlive()
{
    if(this->HP > 0)
        return true;
    else
        return false;
}

void Hero::equipSword(Sword* sword)
{
    if(this->sword == nullptr)
    {    
        this->sword = sword;
        return;
    }

    delete this->sword;
    this->sword = sword;
}

void Hero::getHit(double dmg){
    this->HP -= dmg;
    if(this->HP <= 0)
    {
        heroesAlive--; 
    }
}

Hero::~Hero()
{
    if(this->sword != nullptr)
        delete this->sword;
}

void Hero::attack(Hero* enemy){
    if(this->sword != nullptr)
        enemy->getHit(this->baseDmg + this->sword->getDmg());
    else
        enemy->getHit(this->baseDmg);
}

Hero* Hero::createStarterHero(double baseDmg, double HP)
{
    Hero* hero = new Hero(baseDmg, HP);
    hero->equipSword(new Sword(5));
    return nullptr;
}