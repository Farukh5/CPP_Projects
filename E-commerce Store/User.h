#ifndef USER_H
#define USER_H

#include <iostream>
#include <string>

class User {
private:
    std::string username;
    std::string password;
    std::string address;

public:
    User() : username(""), password(""), address("") {}

    User(std::string u, std::string p, std::string a) : username(u), password(p), address(a) {}

    bool login(std::string u, std::string p) const {
        return username == u && password == p;
    }

    void displayUser() const {
        std::cout << "Username: " << username << std::endl;
        std::cout << "Address: " << address << std::endl;
    }

    std::string getUsername() const { return username; }
    std::string getAddress() const { return address; }
};

#endif
