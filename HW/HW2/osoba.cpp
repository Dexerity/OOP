#include "osoba.h"
#include <iostream>

using namespace std;

Osoba::Osoba(string jmeno, string prijmeni)
{
    this->jmeno = jmeno;
    this->prijmeni = prijmeni;
}

string Osoba::getName()
{
    return this->jmeno + " " + this->prijmeni;
}