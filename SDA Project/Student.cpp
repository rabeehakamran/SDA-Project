// Student.cpp
#include "Student.h"
#include "progressReport.h"
#include <iostream>
#include <iomanip> // setprecision
using namespace std;

Student::Student(int uid, int sid, string nm, string em, string pw)
    : User(uid, nm, em, pw), studentID(sid), classCount(0) {}

void Student::joinClass(string classCode) {
    for (int i = 0; i < classCount; i++) {
        if (joinedClasses[i] == classCode) {
            cout << name << " already joined class: " << classCode << endl;
            return;
        }
    }

    if (classCount < 10) {
        joinedClasses[classCount++] = classCode;
        cout << name << " joined class: " << classCode << endl;
    }
    else {
        cout << "Cannot join more than 10 classes.\n";
    }
}

void Student::selectClass(int classID) {
    if (classID >= 0 && classID < classCount) {
        cout << name << " selected class: " << joinedClasses[classID] << endl;
    }
    else {
        cout << "Invalid class selection by " << name << endl;
    }
}

void Student::update(string notification) {
    cout << "[Notification for " << name << "]: " << notification << endl;
}

void Student::calculateGPA(float grades[], int size) {
    if (size <= 0) {
        cout << "No grades available for GPA calculation.\n";
        return;
    }

    float sum = 0;
    for (int i = 0; i < size; i++) {
        sum += grades[i];
    }

    float gpa = sum / size;
    cout << fixed << setprecision(2);
    cout << "GPA of " << name << ": " << gpa << endl;
}

void Student::generateReport(string progressIDStr) {
    int pid = stoi(progressIDStr);
    int avg = 85; // dummy average score

    string remark;
    if (avg >= 90) remark = "Excellent";
    else if (avg >= 75) remark = "Good";
    else if (avg >= 60) remark = "Satisfactory";
    else remark = "Needs Improvement";

    progressReport report = { pid, avg, remark };

    cout << "\n---- Progress Report ----\n";
    cout << "Progress ID: " << report.progressID << endl;
    cout << "Student: " << name << " (ID: " << studentID << ")\n";
    cout << "Average Score: " << report.avgScore << endl;
    cout << "Remarks: " << report.remarks << endl;
    cout << "Classes Joined:\n";
    for (int i = 0; i < classCount; i++) {
        cout << " - " << joinedClasses[i] << endl;
    }
    cout << "-------------------------\n";
}
