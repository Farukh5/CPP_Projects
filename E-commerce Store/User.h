#ifndef USER_H
#define USER_H

#include <iostream>
#include <string>
using namespace std;

class User {
private:
    string username;
    string password;
    string address;

public:
    User() : username(""), password(""), address("") {}

    User(string u, string p, string a) : username(u), password(p), address(a) {}

    bool login(string u, string p) const {
        return username == u && password == p;
    }

    void displayUser() const {
        cout << "Username: " << username << endl;
        cout << "Address: " << address << endl;
    }

    string getUsername() const { return username; }
    string getAddress() const { return address; }
};

#endif
