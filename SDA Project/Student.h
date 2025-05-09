// Student.h
#ifndef STUDENT_H
#define STUDENT_H

#include "User.h"

class Student : public User {
private:
    int studentID;
    string joinedClasses[10];  // max 10 class codes
    int classCount;

public:
    Student(int uid, int sid, string nm, string em, string pw);
    void joinClass(string classCode);
    void selectClass(int classID);
    void update(string notification);
    void calculateGPA(float grades[], int size);
    void generateReport(string progressID);
};

#endif