#include "CardStack.h"

CardStack::CardStack(int size)
{
    this->data.reserve(size);
    this->top = 0;
}

CardStack::~CardStack()
{
    for (int i = 0; i < this->data.size(); i++)
    {
        delete this->data[i];
        this->data[i] = nullptr;
    }
}

bool CardStack::isEmpty()
{
    return (this->top == 0);
}

void CardStack::push(string number, string symbol)
{
    Card* card = new Card(number, symbol);
    this->data.push_back(card);
    this->top++;
}

void CardStack::push(Card* card)
{
    this->data.push_back(card);
    this->top++;
}

Card* CardStack::pop()
{
    if (this->isEmpty())
    {
        return nullptr;
    }
    Card* card = this->data[--this->top];
    this->data.pop_back();
    return card;
}

void CardStack::shuffle()
{
    
}

CardStackIterator* CardStack::getIterator()
{
    return new CardStackIterator(this->data, this->top);
}