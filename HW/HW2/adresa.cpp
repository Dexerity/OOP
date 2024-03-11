#include "adresa.h"
#include <iostream>

using namespace std;

Adresa::Adresa(string ulice, string cisloPopisne, string mesto, string psc)
{
    this->ulice = ulice;
    this->cisloPopisne = cisloPopisne;
    this->mesto = mesto;
    this->psc = psc;
}

void Adresa::printAdress()
{
    cout << this->ulice << " " << this->cisloPopisne << endl;
    cout << this->psc << " " << this->mesto << endl;
}