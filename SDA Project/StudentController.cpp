#include "StudentController.h"
#include<iostream>


void StudentController::joinClass(Student& student, string classCode) {
    student.addClass(classCode);
    cout << "Class joined successfully: " << classCode << endl;
}

void StudentController::calculateGPA(float grades[], int size) {
    float sum = 0;
    for (int i = 0; i < size; i++) sum += grades[i];
    float gpa = (size > 0) ? sum / size : 0;
    cout << "Calculated GPA: " << gpa << endl;
}

void StudentController::generateReport(const Student& student) {
    cout << "Generating report for student ID: " << student.getStudentID() << endl;
    // Add more logic as needed
}

void StudentController::submitWork(string fileURL) {
    cout << "Submitting assignment file: " << fileURL << endl;
    submission.uploadSubmission(fileURL);
}

void StudentController::resubmitWork(string newFileURL) {
    cout << "Resubmitting with new file: " << newFileURL << endl;
}

void StudentController::viewAnnouncement() {
    announcementHandler->loadAllAnnouncements();
}

void StudentController::viewAssignment() {
    assignmentHandler->loadAllAssignments();
}
void StudentController::saveStudent(Student& s) {
    dataHandler->saveUserData(&s);
}
void StudentController::loadStudent() {
    dataHandler->loadUserData();
}
void StudentController::addComment() {
    int cId = rand() % 1000;
    string text;
    cout << "Enter the text for comment" << endl;
    getline(cin, text);
    commentHandler->saveComment(cId, text);
}