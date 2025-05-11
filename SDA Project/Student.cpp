#include "Student.h"
#include<iostream>
// Constructor
Student::Student(int uid, int sid, string nm, string em, string pw)
    : User(uid, nm, em, pw), studentID(sid), classCount(0) {}

// Set and get student ID
void Student::setStudentID(int id) {
    studentID = id;
}

int Student::getStudentID() const {
    return studentID;
}

// Join a new class
void Student::addClass(string classCode) {
    if (classCount < 10) {
        joinedClasses[classCount++] = classCode;
    }
    else {
        cout << "Cannot join more classes. Limit reached." << endl;
    }
}

// Get class code by index
string Student::getClassCode(int index) const {
    if (index >= 0 && index < classCount) {
        return joinedClasses[index];
    }
    return "";
}

// Get total number of joined classes
int Student::getClassCount() const {
    return classCount;
}
