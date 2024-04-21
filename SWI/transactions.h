#pragma once

#include "users.h"
#include "reservations.h"

using namespace std;

class Payments{
private:
    int payment_ID;
    int reservation_ID;
    date time;
    string payMethod;
    string state;
    double price;
public:
    Payments(int payment_ID, Reservations reservation, date time, string payMethod, string state, double price);
    bool checkPayment();
    string checkState();
    int getPaymentID();
    int getReservationID();
};






/*o	ID platby
o	Rezervace
o	Čas
o	Platební metoda
o	Stav
o	Cena
*/