#pragma once
#include "Card.h"

class IIterator {
public:
    virtual bool hasNext() = 0;
    virtual Card* next() = 0;
};