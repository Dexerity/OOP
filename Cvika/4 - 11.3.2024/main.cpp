#include <iostream>
#include "bank.h"

using namespace std;


int main() {

    Bank* bank = new Bank(5);
    bank->addAccount(new Account(1, new User("Martin", "Ozdinec"), 10000));

    cout<<Account::counter<<endl;

    delete bank;

    cout<<Account::counter<<endl;

    return 0;
}