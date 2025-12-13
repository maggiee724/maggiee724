#ifndef BANKACCOUNT_H
#define BANKACCOUNT_H

#include <string>

class BankAccount {
private:
    double balance;

public:
    BankAccount(double initialBalance = 0.0);

    void deposit(double amount);
    void purchase(double amount);
    void printBalance() const;
    void saveTransaction(const std::string& transaction) const;
};

#endif
