#include <iostream>
#include "BankAccount.h"

using namespace std;

int main() {
    BankAccount account(100.0);

    account.deposit(50.0);
    account.purchase(30.0);
    account.purchase(20.0);

    account.printBalance();

    return 0;
}
