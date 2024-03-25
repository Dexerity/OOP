#pragma once
#include <vector>
#include "Card.h"
#include "CardStackIterator.h"

using namespace std;

class CardStack{
public:
    CardStack(int size);
    ~CardStack();
    static CardStack* createSevenToAceDeck();
    void push(string number, string symbol);
    void push(Card* card);
    Card* pop();
    bool isEmpty();
    void shuffle();
    CardStackIterator* getIterator();
private:
    int top;
    vector<Card*> data;
};