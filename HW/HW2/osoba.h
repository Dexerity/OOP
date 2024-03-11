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
