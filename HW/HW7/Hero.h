#pragma once
#include "Sprite.h"

class Sword;
class Armor;

using namespace std;

class Hero : public Sprite
{
public:
    Hero(double HP, double baseDmg);
    void equipSword(Sword* sword);
    void equipArmor(Armor* armor);
    static Hero* createStarterHero();
    void attack(Sprite* enemy);
private:
    Sword* sword;
    Armor* armor;
};

