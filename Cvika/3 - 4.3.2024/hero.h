#pragma once
#include "sword.h"

class Hero{
public:
    Hero(double baseDmg, double HP);
    void attack(Hero* enemy);
    void getHit(double dmg);
    void equipSword(Sword* sword);
    bool isAlive();
    ~Hero();
private:
    double baseDmg;
    double HP;
    Sword* sword;

};