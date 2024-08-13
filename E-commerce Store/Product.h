#ifndef PRODUCT_H
#define PRODUCT_H

#include <iostream>
#include <string>

class Product {
private:
    int productId;
    std::string name;
    double price;
    int stock;

public:
    Product() : productId(0), name(""), price(0.0), stock(0) {}

    Product(int id, std::string n, double p, int s) : productId(id), name(n), price(p), stock(s) {}

    void displayProduct() const {
        std::cout << "Product ID: " << productId << std::endl;
        std::cout << "Name: " << name << std::endl;
        std::cout << "Price: $" << price << std::endl;
        std::cout << "Stock: " << stock << std::endl;
    }

    int getProductId() const { return productId; }
    double getPrice() const { return price; }
    int getStock() const { return stock; }

    void reduceStock(int quantity) {
        if (quantity <= stock) {
            stock -= quantity;
        } else {
            std::cout << "Insufficient stock!" << std::endl;
        }
    }
};

#endif
