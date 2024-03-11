#pragma once
#include "user.h"

class Account
{
private:
    int id;
    User* owner;
    double balance;
public:
    Account(int id, User* owner, double startBalance);
    void deposit(double amount);
    double withdraw(double amount);
    void printBalance();
    ~Account();
};
