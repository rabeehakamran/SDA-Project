// Student.h
#ifndef STUDENT_H
#define STUDENT_H
#include "User.h"
class Student : public User {
private:
    int studentID;
    string joinedClasses[10];
    int classCount;

public:
    Student(int uid, int sid, string nm, string em, string pw);

    // Getters and Setters
    int getStudentID() const { return studentID; }
    void setStudentID(int id);
    void addClass(string classCode);
    string getClassCode(int index) const;
    int getClassCount() const;
};

#endif
