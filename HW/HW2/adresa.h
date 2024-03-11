#pragma once
#include <string>

using namespace std;

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