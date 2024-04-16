#pragma once
#include <vector>
#include "Card.h"
#include "CardStackIterator.h"
#include "ICollection.h"

using namespace std;

class CardStack : public ICollection{
public:
    CardStack(int size);
    ~CardStack();
    static CardStack* createSevenToAceDeck();
    void push(string number, string symbol);
    void push(Card* card);
    Card* pop();
    bool isEmpty();
    void shuffle();
    IIterator* getIterator();
private:
    int top;
    vector<Card*> data;
};