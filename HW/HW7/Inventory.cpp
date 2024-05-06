#include "Inventory.h"
#include <iostream>

using namespace std;

Inventory::Inventory(Hero* hero)
{
    this->hero = hero;
}

void Inventory::addToInventory(Item* item)
{
    this->items.push_back(item);
}

vector<Item*> Inventory::getInventory()
{
    return this->items;
}

void Inventory::printAllItems()
{
    for (size_t i = 0; i < this->items.size(); i++)
    {
        cout << this->items[i]->toString() << endl;
    }
}

void Inventory::useItem(int index)
{
    this->items.at(index)->use(hero);
}