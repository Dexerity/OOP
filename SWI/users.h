#pragma once

#include <string>

using namespace std;

class Users{
private:
    int user_ID;
    string firstName;
    string lastName;
    string email;
    int tel;
    date dateBirth;
    int authorization;
public:
    Users(int user_ID, string firstName, string lastName, string email, int tel, date dateBirth, int authorization);
    void login(string email, string password);
    void logout();
    void addRoomToCart(int room_ID);
    void removeRoomFromCart(int room_ID);
    void makeReservation();
    void viewCart();
    int checkAuthorization();
    void setAuthorization(int authorization);
    void changePassword(string password);
    int getUserID();
    void getPastReservations();
};


/*
- user_ID
- firstName:string
- lastName:string
- email:string
- tel:int
- dateBirth:date 
- authorization:int 
*/