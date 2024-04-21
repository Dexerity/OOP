#pragma once

#include <string>

using namespace std;

class Rooms{
private:
    int room_ID;
    int capacity;
    string amenities;
    bool availability;
    double price;
    string photo;    
public:
    Rooms(int room_ID, int capacity, string amenities, bool availability, double price, string photo);
    bool checkAvailability();
    void changePrice(double price);
    void changePhoto(string photo);
    int getRoomID();
};

//- room_ID:int- capacity:int- amenities:string- availability:bool- price:double- photo:string