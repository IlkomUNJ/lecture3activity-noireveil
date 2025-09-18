#ifndef ITEM_H
#define ITEM_H

#include <string>
using namespace std;

class Item {
private:
    int id;
    string name;
    int quantity;
    double price;

public:
    Item(int id, const string& name, int quantity, double price) {
        this->id = id;
        this->name = name;
        this->quantity = quantity;
        this->price = price;
    }

    int getId() const { return id; }
    string getName() const { return name; }
    int getQuantity() const { return quantity; }
    double getPrice() const { return price; }

    void setName(const string& newName) { name = newName; }
    void setQuantity(int newQuantity) { quantity = newQuantity; }
    void setPrice(double newPrice) { price = newPrice; }

    void update(const string& newName, int newQuantity, double newPrice) {
        this->name = newName;
        this->quantity = newQuantity;
        this->price = newPrice;
    }
};

#endif // ITEM_H