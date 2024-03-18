#pragma once
#include "user.h"

class Account
{
private:
    int id;
    User* owner;
    User* partner;
    double balance;
public:
    static int counter;
    Account(int id, User* owner, double startBalance);
    Account(int id, User* owner, double startBalance, User* partner);
    void deposit(double amount);
    double withdraw(double amount);
    void printBalance();
    ~Account();
};
