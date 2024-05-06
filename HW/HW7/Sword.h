#pragma once
#include <string>
#include "Item.h"

class Hero;

using namespace std;

class Sword : public Item {
public:
    Sword(double addedDmg, string name);
    double getDmg();
    virtual string toString();
    virtual void use(Hero* hero);
private:
    double addedDmg;
};