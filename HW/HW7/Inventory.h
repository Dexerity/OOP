#pragma once

#include <string>
#include <vector>
#include "Item.h"

using namespace std;

class Inventory {
public:
    void addToInventory(Item* item);
    vector<Item*> getInventory();
    void printAllItems();
private:
    vector<Item*> items;
};