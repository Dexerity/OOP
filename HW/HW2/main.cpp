#include <iostream>
#include "osoba.h"
#include "adresa.h"
#include "polozkaFaktury.h"
#include "faktura.h"

using namespace std;

int main()
{   
    Osoba* osoba = new Osoba("Martin", "Ozdinec");
    Adresa* adresa = new Adresa("Spojovaci", "12", "Ostrava-Poruba", "70800");
    Faktura* faktura = new Faktura(1432, osoba, adresa);
    faktura->pridatPolozku(new PolozkaFaktury("Talir", 100));
    faktura->pridatPolozku(new PolozkaFaktury("Zidle", 800));
    faktura->pridatPolozku(new PolozkaFaktury("Stul", 1000));

    faktura->printFaktura();

    
    return 0;
}