#include "CardStackIterator.h"

CardStackIterator::CardStackIterator(vector<Card*> data, int top)
{
    this->data = data;
    this->top = top;
}

bool CardStackIterator::hasNext()
{
    return false;
}

Card* CardStackIterator::next()
{
    return nullptr;
}