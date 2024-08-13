#include "Product.h"
#include "User.h"
using namespace std;

const int MAX_PRODUCTS = 10;
const int MAX_USERS = 10;

void showProducts(Product products[], int numProducts) {
    for (int i = 0; i < numProducts; ++i) {
        products[i].displayProduct();
        cout << "-----------------------" << endl;
    }
}

int main() {
    Product products[MAX_PRODUCTS] = {
        Product(1, "Laptop", 999.99, 10),
        Product(2, "Smartphone", 499.99, 20),
        Product(3, "Headphones", 149.99, 30),
        Product(4, "Camera", 299.99, 15)
    };
    int numProducts = 4;

    User users[MAX_USERS] = {
        User("alice", "password123", "123 Apple St."),
        User("bob", "password456", "456 Orange Ave.")
    };
    int numUsers = 2;

    string username, password;
    cout << "Enter username: ";
    cin >> username;
    cout << "Enter password: ";
    cin >> password;

    bool authenticated = false;
    User loggedInUser;
    
    for (int i = 0; i < numUsers; ++i) {
        if (users[i].login(username, password)) {
            authenticated = true;
            loggedInUser = users[i];
            break;
        }
    }

    if (authenticated) {
        cout << "Login successful!" << endl;
        loggedInUser.displayUser();
        cout << "-----------------------" << endl;

        cout << "Available products:" << endl;
        showProducts(products, numProducts);

        int choice, quantity;
        cout << "Enter product ID to purchase: ";
        cin >> choice;
        cout << "Enter quantity: ";
        cin >> quantity;

        for (int i = 0; i < numProducts; ++i) {
            if (products[i].getProductId() == choice) {
                if (products[i].getStock() >= quantity) {
                    products[i].reduceStock(quantity);
                    double total = products[i].getPrice() * quantity;
                    cout << "Purchase successful! Total: $" << total << endl;
                } else {
                    cout << "Not enough stock available!" << endl;
                }
                break;
            }
        }


    } else {
        cout << "Login failed. Incorrect username or password." << endl;
    }

    return 0;
}
