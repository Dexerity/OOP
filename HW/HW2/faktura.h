#pragma once
#include <string>
#include "osoba.h"
#include "adresa.h"
#include "polozkaFaktury.h"

using namespace std;

class Faktura{
public:
    Faktura(int cisloFaktury, Osoba* osoba, Adresa* adresa, int pocetPolozek);
    void pridatPolozku(PolozkaFaktury* polozka);
    ~Faktura();
    double finalPrice();
    void printFaktura();
private:
    int cisloFaktury;
    Osoba* osoba;
    Adresa* adresa;
    PolozkaFaktury** polozky;
    int pocetPolozek;
};