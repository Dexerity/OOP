#pragma once

#include "Sprite.h"

using namespace std;

class Monster : public Sprite
{
public:
    Monster(double HP, double baseDmg);
    void attack(Sprite* targetSprite);
    void setMana(int mana);
    int getMana();
    void buff();
private:
    int mana;
};

