#ifndef USER_H
#define USER_H

#include <string>
using namespace std;

class User {
protected:
    int userID;
    string name;
    string email;
    string password;
    bool loggedIn;
public:
    User();
    User(int userID, string name, string email, string password);

    virtual void signup(int userID, string name, string email, string password);
    virtual bool login(string email, string password);
    virtual void logout();

    string getEmail() const;
    string getName() const;
    int getUserID() const;
    bool isLoggedIn() const;
};

#endif