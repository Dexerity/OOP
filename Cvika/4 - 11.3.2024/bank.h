#pragma once
#include "account.h"

class Bank{
public:
    Bank(int accountSize);
    bool addAccount(Account* account);
    Account* getAccount(int index);
private:
    Account** accounts;
    int accountSize;
    int count;
};