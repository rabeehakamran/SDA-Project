// Teacher.cpp
#include "Teacher.h"
#include <iostream>
using namespace std;

Teacher::Teacher(int uid, int tid, int coid, string nm, string em, string pw)
    : User(uid, nm, em, pw), teacherID(tid), coTeacherID(coid), classCount(0) {}

void Teacher::createClass(int classID, string classCode, string title) {
    if (classCount < 10) {
        createdClasses[classCount++] = classCode;
        cout << "Class created: " << title << " [Code: " << classCode << ", ID: " << classID << "] by " << name << endl;
    }
    else {
        cout << name << " cannot create more than 10 classes.\n";
    }
}

void Teacher::deleteClass(int classID) {
    if (classID < 0 || classID >= classCount) {
        cout << "Invalid class ID.\n";
        return;
    }

    cout << "Deleting class: " << createdClasses[classID] << endl;

    // Shift array
    for (int i = classID; i < classCount - 1; i++) {
        createdClasses[i] = createdClasses[i + 1];
    }
    classCount--;
}

void Teacher::removeStudent(int studentID) {
    cout << "Student with ID " << studentID << " removed by teacher " << name << endl;
}

void Teacher::inviteStudent(int studentID) {
    cout << name << " invited student with ID: " << studentID << endl;
}

void Teacher::inviteCoTeacher(int coID) {
    cout << name << " invited co-teacher with ID: " << coID << endl;
}

void Teacher::acceptInvite(int fromTeacherID) {
    cout << name << " accepted co-teach invite from teacher ID: " << fromTeacherID << endl;
}

void Teacher::removeCoTeacher(int coID) {
    cout << name << " removed co-teacher with ID: " << coID << endl;
}
string generateClassCode() {
    const char charset[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    string code = "";
    int length = 6;

    srand(time(0)); // seed once per program run

    for (int i = 0; i < length; ++i) {
        int index = rand() % (sizeof(charset) - 1);
        code += charset[index];
    }