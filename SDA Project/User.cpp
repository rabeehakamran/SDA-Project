#include "User.h"
#include <iostream>
using namespace std;

User::User() {
    userID = 0;
    name = "";
    email = "";
    password = "";
    loggedIn = false;
}

User::User(int userID, string name, string email, string password) {
    this->userID = userID;
    this->name = name;
    this->email = email;
    this->password = password;
    loggedIn = false;
}

void User::signup(int userID, string name, string email, string password) {
    this->userID = userID;
    this->name = name;
    this->email = email;
    this->password = password;
    cout << "User signed up successfully.\n";
}

bool User::login(string email, string password) {
    if (this->email == email && this->password == password) {
        loggedIn = true;
        cout << "Login successful.\n";
        return true;
    }
    cout << "Login failed.\n";
    return false;
}

void User::logout() {
    loggedIn = false;
    cout << "User logged out.\n";
}

string User::getEmail() const {
    return email;
}

string User::getName() const {
    return name;
}

int User::getUserID() const {
    return userID;
}

bool User::isLoggedIn() const {
    return loggedIn;
}