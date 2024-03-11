#include "faktura.h"
#include <iostream>

using namespace std;

Faktura::Faktura(int cisloFaktury, Osoba* osoba, Adresa* adresa, int pocetPolozek)
{
    this->cisloFaktury = cisloFaktury;
    this->osoba = osoba;
    this->adresa = adresa;
    this->pocetPolozek = pocetPolozek;
    this->polozky = new PolozkaFaktury* [pocetPolozek];
}

void Faktura::pridatPolozku(PolozkaFaktury* polozka)
{
    for (int i = 0; i < this->pocetPolozek; i++)
    {
        if (this->polozky[i] == nullptr)
        {
            this->polozky[i] = polozka;
            break;
        }
    }
}

Faktura::~Faktura()
{
    delete this->osoba;
    delete this->adresa;

    for (int i = 0; i < this->pocetPolozek; i++)
    {
        delete this->polozky[i];
    }
}

double Faktura::finalPrice()
{
    double price = 0;

    for (int i = 0; i < this->pocetPolozek; i++)
    {
        if (this->polozky[i] != nullptr)
        {
            price += this->polozky[i]->getCena();
        }
    }

    return price;
}

void Faktura::printFaktura()
{
    cout << "Cislo faktury: " << this->cisloFaktury << endl;
    cout << "Osoba: " << this->osoba->getName() << endl;
    cout << "Adresa: " << endl;

    this->adresa->printAdress();

    cout << "Polozky: " << endl;
    for (int i = 0; i < this->pocetPolozek; i++)
    {
        if (this->polozky[i] != nullptr)
        {
            cout << this->polozky[i]->getNazev() << " - " << this->polozky[i]->getCena() << endl;            
        }
    }

    cout << "Celkova cena: " << this->finalPrice() << endl;
}