#pragma once

#include <string>
#include <vector>
#include "Item.h"
#include "Hero.h"

using namespace std;

class Inventory {
public:
    Inventory(Hero* hero);
    void addToInventory(Item* item);
    vector<Item*> getInventory();
    void printAllItems();
    void useItem(int index);
private:
    vector<Item*> items;
    Hero* hero;
};