#pragma once

#include "sword.h"
#include "Sprite.h"

using namespace std;

class Hero : public Sprite
{
public:
    Hero(double HP, double baseDmg);
    void equipSword(Sword* sword);
    static Hero* createStarterHero();
    void attack(Sprite* enemy);
private:
    Sword* sword;
};

