#include "polozkaFaktury.h"
#include <iostream>

using namespace std;

PolozkaFaktury::PolozkaFaktury(string nazev, double cena)
{
    this->nazev = nazev;
    this->cena = cena;
}

string PolozkaFaktury::getNazev()
{
    return this->nazev;
}

double PolozkaFaktury::getCena()
{
    return this->cena;
}