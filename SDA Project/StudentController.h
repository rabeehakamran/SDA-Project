// StudentController.h
#ifndef STUDENTCONTROLLER_H
#define STUDENTCONTROLLER_H

#include "Student.h"
#include <iostream>
using namespace std;

class StudentController {
public:
    void joinClass(Student& student, string classCode);
    void calculateGPA(float grades[], int size);
    void generateReport(const Student& student);

    void submitWork(string fileURL);
    void resubmitWork(string newFileURL);
    void viewGrade();
    void viewReport();
};

#endif
