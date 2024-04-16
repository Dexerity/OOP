#pragma once
#include "IIterator.h"

class ICollection {
public:
    virtual IIterator* getIterator() = 0;
};