#include <iostream>
#include "CardStack.h"

using namespace std;

int main(){
    CardStack* deck = CardStack::createSevenToAceDeck();

    deck->shuffle();

    IIterator* it = deck->getIterator();
    while (it->hasNext())
    {
        Card* card = it->next();
        cout << card->getNumber() << " " << card->getSymbol() << endl;
    }

    return 0;
}