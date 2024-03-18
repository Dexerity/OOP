#pragma once
#include "sword.h"

class Hero{
public:
    Hero(double baseDmg, double HP);
    Hero(double baseDmg, double HP, Sword* sword);
    void attack(Hero* enemy);
    void getHit(double dmg);
    void equipSword(Sword* sword);
    bool isAlive();
    ~Hero();
    static Hero* createStarterHero(double baseDmg, double HP);
    static int heroesAlive;
private:
    double baseDmg;
    double HP;
    Sword* sword;

};