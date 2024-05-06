#pragma once
#include <string>

#include "Hero.h"

using namespace std;

class Item {
public:
    Item(string name);
    virtual string toString() = 0;
    virtual void use(Hero* hero) = 0;
protected:
    string name;
};