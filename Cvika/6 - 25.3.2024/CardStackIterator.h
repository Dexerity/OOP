#pragma once
#include "Card.h"
#include <vector>

using namespace std;

class CardStackIterator{
public:
    CardStackIterator(vector<Card*> data, int top);
    Card* next();
    bool hasNext();
private:
    int top;
    vector<Card*> data;
};