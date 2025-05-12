// Teacher.cpp
#include "Teacher.h"
#include <iostream>
using namespace std;

Teacher::Teacher()
    : User(), teacherID(0), coTeacherID(0), classCount(0) {}

Teacher::Teacher(int uid, int tid, int coid, string nm, string em, string pw)
    : User(uid, nm, em, pw), teacherID(tid), coTeacherID(coid), classCount(0) {}

int Teacher::getTeacherID() {
    return this->teacherID;
}
void Teacher::createClass(int classID, string classCode, string title) {
    if (classCount < 10) {
        createdClasses[classCount++] = classCode;
        Classroom c(classID, classCode, title);
        classDataHandler->saveClassroomData(c);
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

   
void Teacher::postAssignment() {
        string title, description, dueDate;
        cout << "Enter assignment title: ";
        getline(cin, title);
        cout << "Enter assignment description: ";
        getline(cin, description);
        cout << "Enter due date: ";
        getline(cin, dueDate);

        assignmentFactory.createAssignment(title, description, dueDate);
        assignmentHandler->saveAssignment(1, title, description);
        cout << "Assignment created successfully.\n";
    }
void Teacher::viewSubmission() {
    ss.viewSubmission();
}
void Teacher::createAnnouncement() {
    string msg;
    cout << "Enter announcement text" << endl;
    getline(cin, msg);
    announcement.postAnnouncement(msg);
    announcementHandler->saveAnnouncement(1, msg);
}
void Teacher::saveTeacherData(Teacher& t) {
    dataHandler->saveUserData(&t);
}
void Teacher::loadTeacher() {
    dataHandler->loadUserData();
}
void Teacher::addComment() {
    int count = rand() % 1000;
    string comment;
    cout << "Enter the text for comment" << endl;
    getline(cin, comment);
    commentHandler->saveComment(count, comment);
}