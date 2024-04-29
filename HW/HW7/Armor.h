#pragma once
#include <string>
#include "Item.h"

using namespace std;

class Armor : public Item {
public:
    Armor(double addedArmor, string name);
    double getArmor();
    virtual string toString();
private:
    double addedArmor;
};