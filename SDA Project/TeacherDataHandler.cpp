// TeacherDataHandler.h
#ifndef TEACHERDATAHANDLER_H
#define TEACHERDATAHANDLER_H

#include "IUserDataHandler.h"
#include "Teacher.h"
#include <fstream>
#include <sstream>
#include <iostream>
using namespace std;

class TeacherDataHandler : public IUserDataHandler {
public:
    void saveUserData(const User& user) override {
        const Teacher& teacher = static_cast<const Teacher&>(user);

        ofstream teacherFile("teachers.txt", ios::app);
        if (teacherFile.is_open()) {
            teacherFile << teacher.getTeacherID() << ","
                << teacher.getName() << ","
                << teacher.getEmail() << "\n";
            teacherFile.close();
            cout << "Teacher data saved successfully.\n";
        }
        else {
            cout << "Error opening file for saving data.\n";
        }
    }

    void loadUserData() override {
        ifstream teacherFile("teachers.txt");
        string line;
        if (teacherFile.is_open()) {
            while (getline(teacherFile, line)) {
                stringstream ss(line);
                string teacherID, name, email;
                getline(ss, teacherID, ',');
                getline(ss, name, ',');
                getline(ss, email);
                cout << "Loaded Teacher: " << teacherID << ", " << name << ", " << email << "\n";
            }
            teacherFile.close();
        }
        else {
            cout << "Error opening file for loading data.\n";
        }
    }

    void getUserById(int id) override {
        ifstream teacherFile("teachers.txt");
        string line;
        if (teacherFile.is_open()) {
            while (getline(teacherFile, line)) {
                stringstream ss(line);
                string teacherIDStr, name, email;
                getline(ss, teacherIDStr, ',');
                int teacherID = stoi(teacherIDStr);
                if (teacherID == id) {
                    getline(ss, name, ',');
                    getline(ss, email);
                    cout << "Teacher Found: " << teacherID << ", " << name << ", " << email << "\n";
                    teacherFile.close();
                    return;
                }
            }
            teacherFile.close();
            cout << "Teacher with ID " << id << " not found.\n";
        }
        else {
            cout << "Error opening file.\n";
        }
    }
};

#endif
