#pragma once
#include <string>
#include "Item.h"

class Hero;

using namespace std;

class Armor : public Item {
public:
    Armor(double addedArmor, string name);
    double getArmor();
    virtual string toString();
    virtual void use(Hero* hero);
private:
    double addedArmor;
};