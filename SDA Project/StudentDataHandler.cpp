#include <iostream>
#include <fstream>
#include <sstream>
#include "Student.h"
using namespace std;

class StudentDataHandler {
public:
    // Function to save student data to a file
    static void saveStudentData(const Student& student) {
        ofstream studentFile("students.txt", ios::app); // Open file in append mode
        if (studentFile.is_open()) {
            studentFile << student.getStudentID() << ","  // student ID
                << student.getName() << ","    // student name
                << student.getEmail() << "\n"; // student email
            studentFile.close();
            cout << "Student data saved successfully.\n";
        }
        else {
            cout << "Error opening file for saving data.\n";
        }
    }

    // Function to load all students from file
    static void loadAllStudents() {
        ifstream studentFile("students.txt");
        string line;
        if (studentFile.is_open()) {
            while (getline(studentFile, line)) {
                stringstream ss(line);
                string studentID, name, email;
                getline(ss, studentID, ',');
                getline(ss, name, ',');
                getline(ss, email);

                cout << "Loaded Student: " << studentID << ", " << name << ", " << email << "\n";
            }
            studentFile.close();
        }
        else {
            cout << "Error opening file for loading data.\n";
        }
    }
};
