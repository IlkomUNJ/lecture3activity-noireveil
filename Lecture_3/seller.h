#ifndef SELLER_H
#define SELLER_H

#include <string>
#include <vector>
#include "bank_customer.h"
#include "item.h"

using namespace std;

class Seller {
private:
    int id;
    string name;
    BankCustomer& account;      
    vector<Item> items;

public:
    Seller(int id, const string& name, BankCustomer& account)
        : id(id), name(name), account(account) {} 

    int getId() const { return id; }
    string getName() const { return name; }

    void addItem(const Item& item) {
        items.push_back(item);
    }

    const vector<Item>& getItems() const { return items; }

    void deposit(double amount) {
        account.addBalance(amount);
    }

    void withdraw(double amount) {
        account.withdrawBalance(amount);
    }
};

#endif // SELLER_H