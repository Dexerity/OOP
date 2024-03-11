#include "bank.h"

Bank::Bank(int accountSize)
{
    this->accountSize = accountSize;
    this->count = 0;
    this->accounts = new Account* [accountSize];
}

bool Bank::addAccount(Account* account)
{
    if(this->count == this->accountSize)
        return false;
    
    this->accounts[this->count++] = account;
    return true;
}

Account* Bank::getAccount(int index)
{
    if(index >= this->count || index < 0)
        return nullptr;

    return this->accounts[index];
}