#include "Armor.h"

using namespace std;

Armor::Armor(double addedArmor, string name) : Item(name)
{
    this->addedArmor = addedArmor;
}

double Armor::getArmor()
{
    return this->addedArmor;
}

string Armor::toString()
{
    return this->name + " (+" + to_string(this->addedArmor) + " armor)";
}

void Armor::use(Hero* hero)
{
    hero->equipArmor(this);
    cout << "Equipped " << this->name << endl;
}
