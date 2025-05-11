#include <iostream>
#include <fstream>
#include <sstream>
#include "Teacher.h"
using namespace std;

class TeacherDataHandler {
public:
    static void saveTeacherData(Teacher& teacher) {
        ofstream teacherFile("teachers.txt", ios::app); // Open file in append mode
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

    static void loadAllTeachers() {
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
};
