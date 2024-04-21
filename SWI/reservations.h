#pragma once

#include "users.h"
#include "rooms.h"
#include <string>

using namespace std;

class Reservations{
private:
    int reservation_ID;
    int user_ID;
    int room_ID;
    date dateArrive;
    date dateDepart;
    int guestCount;
    double price;
    string payMethod;
    string state;
public:
    Reservations(int reservation_ID, Users user, Rooms room, date dateArrive, date dateDepart, int guestCount, double price, string payMethod, string state);
    void cancelReservation();
    void checkIn();
    void checkOut();
    void pay(string payMethod);
    int getReservationID();
    int getUserID();
};

//- reservation_ID:int- user:Users- room_ID:Rooms- dateArrive:date- dateDepart:date- guestCount:int- price:double- payMethod:string- state:string