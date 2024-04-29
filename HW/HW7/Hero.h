#pragma once

#include "Inventory.h"
#include "Sprite.h"
#include "Sword.h"
#include "Armor.h"

using namespace std;

class Hero : public Sprite
{
public:
    Hero(double HP, double baseDmg);
    void equipSword(Sword* sword);
    void equipArmor(Armor* armor);
    static Hero* createStarterHero();
    void attack(Sprite* enemy);
    void addToInventory(Item* item);
    void printAllItems();
private:
    Sword* sword;
    Armor* armor;
    Inventory inventory;
};

