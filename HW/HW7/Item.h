#pragma once
#include <string>

using namespace std;

class Item {
public:
    Item(string name);
    virtual string toString() = 0;
protected:
    string name;
};