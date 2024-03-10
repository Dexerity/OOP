#include "classes.h"
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

Faktura::Faktura(int cisloFaktury, Osoba* osoba, Adresa* adresa)
{
    this->cisloFaktury = cisloFaktury;
    this->osoba = osoba;
    this->adresa = adresa;
}

void Faktura::pridatPolozku(PolozkaFaktury* polozka)
{
    for (int i = 0; i < 10; i++)
    {
        if (this->polozky[i] == nullptr)
        {
            this->polozky[i] = polozka;
            break;
        }
    }

    pocetPolozek++;
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
        price += this->polozky[i]->getCena();
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
        cout << this->polozky[i]->getNazev() << " - " << this->polozky[i]->getCena() << endl;
    }

    cout << "Celkova cena: " << this->finalPrice() << endl;
}