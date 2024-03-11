#include <iostream>
#include "bank.h"

using namespace std;


int main() {

    Bank bank(5);
    bank.addAccount(new Account(1, new User("Martin", "Ozdinec"), 10000));

    return 0;
}