#pragma once
#include "Card.h"
#include "IIterator.h"
#include <vector>

using namespace std;

class CardStackIterator : public IIterator{
public:
    CardStackIterator(vector<Card*> data, int top);
    Card* next();
    bool hasNext();
private:
    int top;
    vector<Card*> data;
};