#pragma once
#include <string>
#include "Item.h"

using namespace std;

class Sword : public Item {
public:
    Sword(double addedDmg, string name);
    double getDmg();
    virtual string toString();
private:
    double addedDmg;
};