#include "account.h"
#include <iostream>

using namespace std;

Account::Account(int id, User* owner, double startBalance)
{
    this->id = id;
    this->owner = owner;
    this->balance = startBalance;
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
}