// IUserDataHandler.h
#ifndef IUSERDATAHANDLER_H
#define IUSERDATAHANDLER_H

#include "User.h"

class IUserDataHandler {
public:
    virtual void saveUserData(User* user) = 0;
    virtual void loadUserData() = 0;
    virtual void getUserById(int id) = 0;
    virtual ~IUserDataHandler() {}
};

#endif
