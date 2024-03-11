#pragma once
#include <string>

using namespace std;

class PolozkaFaktury{
public:
    PolozkaFaktury(string nazev, double cena);
    string getNazev();
    double getCena();
private:
    string nazev;
    double cena;
};