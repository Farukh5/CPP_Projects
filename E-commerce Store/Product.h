#ifndef PRODUCT_H
#define PRODUCT_H

#include <iostream>
#include <string>
using namespace std;

class Product {
private:
    int productId;
    string name;
    double price;
    int stock;

public:
    Product() : productId(0), name(""), price(0.0), stock(0) {}

    Product(int id, sstring n, double p, int s) : productId(id), name(n), price(p), stock(s) {}

    void displayProduct() const {
        cout << "Product ID: " << productId << endl;
        cout << "Name: " << name << endl;
        cout << "Price: $" << price << endl;
        cout << "Stock: " << stock << endl;
    }

    int getProductId() const { return productId; }
    double getPrice() const { return price; }
    int getStock() const { return stock; }

    void reduceStock(int quantity) {
        if (quantity <= stock) {
            stock -= quantity;
        } else {
            cout << "Insufficient stock!" << endl;
        }
    }
};

#endif
