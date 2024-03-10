#pragma once
#include <string>

using namespace std;

class Osoba {
public: 
    Osoba(string jmeno, string prijmeni);
    string getName();
private:
    string jmeno;
    string prijmeni;
};

class Adresa{
public:
    Adresa(string ulice, string cisloPopisne, string mesto, string psc);
    void printAdress();
private:
    string ulice;
    string cisloPopisne;
    string mesto;
    string psc;
};

class PolozkaFaktury{
public:
    PolozkaFaktury(string nazev, double cena);
    string getNazev();
    double getCena();
private:
    string nazev;
    double cena;
};

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