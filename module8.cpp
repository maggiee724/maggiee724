#include "BankAccount.h"
#include <iostream>
#include <fstream>

using namespace std;

BankAccount::BankAccount(double initialBalance) {
    balance = initialBalance;
}

void BankAccount::deposit(double amount) {
    if (amount > 0) {
        balance += amount;
        saveTransaction("Deposit: +" + to_string(amount));
    }
}

void BankAccount::purchase(double amount) {
    if (amount > 0 && amount <= balance) {
        balance -= amount;
        saveTransaction("Purchase: -" + to_string(amount));
    } else {
        cout << "Purchase failed. Insufficient funds." << endl;
    }
}

void BankAccount::printBalance() const {
    cout << "Current Balance: $" << balance << endl;
}

void BankAccount::saveTransaction(const string& transaction) const {
    ofstream file("transactions.txt", ios::app);
    if (file.is_open()) {
        file << transaction << endl;
        file.close();
    }
}
