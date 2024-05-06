#include "Sword.h"

Sword::Sword(double addedDmg, string name): Item(name)
{
    this->addedDmg = addedDmg;
}

double Sword::getDmg()
{
    return this->addedDmg;
}

string Sword::toString()
{
    return this->name + " (+" + to_string(this->addedDmg) + " dmg)";
}

void Sword::use(Hero* hero)
{
    hero->equipSword(this);
    cout << "Equipped " << this->name << endl;
}