#ifndef BANK_CUSTOMER_H
#define BANK_CUSTOMER_H

#include <string>

using namespace std;

class BankCustomer {
private:
    int id;
    string name;
    double balance;

public:
    BankCustomer(int id, const string& name, double balance) {
        this->id = id;
        this->name = name;
        this->balance = balance;
    }

    int getId() const;
    string getName() const;
    double getBalance() const;

    void printInfo() const;
    void setName(const string& name);
    void setBalance(double balance);
    void addBalance(double amount);
    void withdrawBalance(double amount);
};

#endif // BANK_CUSTOMER_H
