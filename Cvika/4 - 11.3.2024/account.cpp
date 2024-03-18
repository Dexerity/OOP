#include "account.h"
#include <iostream>

using namespace std;

int Account::counter = 0;

Account::Account(int id, User* owner, double startBalance)
{
    this->id = id;
    this->owner = owner;
    this->balance = startBalance;
    counter++;
}

Account::Account(int id, User* owner, double startBalance, User* partner)
{
    this->id = id;
    this->owner = owner;
    this->balance = startBalance;
    this->partner = partner;
    counter++;
}

void Account::deposit(double amount)
{
    this->balance += amount;
}

double Account::withdraw(double amount)
{
    if (amount > this->balance)
    {
        return 0;
    }

    this->balance -= amount;
    return amount;    
}

void Account::printBalance()
{
    cout<<this->balance<<endl;
}

Account::~Account()
{
    if(this->owner != nullptr)
        delete this->owner;
    this->owner = nullptr;

    if(this->partner != nullptr)
        delete this->partner;
    this->partner = nullptr;

    counter--;
}