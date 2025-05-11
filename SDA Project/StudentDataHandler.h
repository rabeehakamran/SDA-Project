#ifndef STUDENTDATAHANDLER_H
#define STUDENTDATAHANDLER_H

#include "IUserDataHandler.h"
#include "Student.h"

class StudentDataHandler : public IUserDataHandler {
public:
    void saveUserData(const User& user) override;
    void loadUserData() override;
    void getUserById(int id) override;
};

#endif // STUDENTDATAHANDLER_H
