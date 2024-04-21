#include "sword.h"

Sword::Sword(double addedDmg)
{
    this->addedDmg = addedDmg;
}

double Sword::getDmg()
{
    return this->addedDmg;
}