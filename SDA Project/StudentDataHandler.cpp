#include "StudentDataHandler.h"
#include <fstream>
#include <sstream>
#include <iostream>
using namespace std;

void StudentDataHandler::saveUserData(const User& user) {
    const Student& student = static_cast<const Student&>(user);

    ofstream studentFile("students.txt", ios::app);
    if (studentFile.is_open()) {
        studentFile << student.getStudentID() << ","
            << student.getName() << ","
            << student.getEmail() << "\n";
        studentFile.close();
        cout << "Student data saved successfully.\n";
    }
    else {
        cout << "Error opening file for saving data.\n";
    }
}

void StudentDataHandler::loadUserData() {
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

void StudentDataHandler::getUserById(int id) {
    ifstream studentFile("students.txt");
    string line;
    if (studentFile.is_open()) {
        while (getline(studentFile, line)) {
            stringstream ss(line);
            string studentIDStr, name, email;
            getline(ss, studentIDStr, ',');
            int studentID = stoi(studentIDStr);
            if (studentID == id) {
                getline(ss, name, ',');
                getline(ss, email);
                cout << "Student Found: " << studentID << ", " << name << ", " << email << "\n";
                studentFile.close();
                return;
            }
        }
        studentFile.close();
        cout << "Student with ID " << id << " not found.\n";
    }
    else {
        cout << "Error opening file.\n";
    }
}
