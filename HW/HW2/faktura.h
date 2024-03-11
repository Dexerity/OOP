#pragma once
#include <string>
#include "osoba.h"
#include "adresa.h"
#include "polozkaFaktury.h"

using namespace std;

class Faktura{
public:
    Faktura(int cisloFaktury, Osoba* osoba, Adresa* adresa);
    void pridatPolozku(PolozkaFaktury* polozka);
    ~Faktura();
    double finalPrice();
    void printFaktura();
private:
    int cisloFaktury;
    Osoba* osoba;
    Adresa* adresa;
    PolozkaFaktury* polozky[10];
    int pocetPolozek = 0;
};