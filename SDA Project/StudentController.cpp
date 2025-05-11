#include "StudentController.h"
#include<iostream>
void StudentController::joinClass(Student& student, string classCode) {
    student.addClass(classCode);
    cout << "Class joined successfully: " << classCode << endl;
}

void StudentController::calculateGPA(float grades[], int size) {
    float sum = 0;
    for (int i = 0; i < size; ++i) sum += grades[i];
    float gpa = (size > 0) ? sum / size : 0;
    cout << "Calculated GPA: " << gpa << endl;
}

void StudentController::generateReport(const Student& student) {
    cout << "Generating report for student ID: " << student.getStudentID() << endl;
    // Add more logic as needed
}

void StudentController::submitWork(string fileURL) {
    cout << "Submitting assignment file: " << fileURL << endl;
}

void StudentController::resubmitWork(string newFileURL) {
    cout << "Resubmitting with new file: " << newFileURL << endl;
}

void StudentController::viewGrade() {
    cout << "Viewing current assignment grade...\n";
}

void StudentController::viewReport() {
    cout << "Viewing progress report...\n";
}
