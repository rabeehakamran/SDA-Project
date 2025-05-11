#ifndef CLASSROOMDATAHANDLER_H
#define CLASSROOMDATAHANDLER_H

#include "IClassDataHandler.h"
#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;

class ClassroomDataHandler : public IClassDataHandler {
public:
    void saveClassroomData(const Classroom& classroom) override {
        ofstream classFile("classrooms.txt", ios::app);
        if (classFile.is_open()) {
            // Save ID, code, title only (no need to save observers in file)
            classFile << classroom.getClassID() << ","
                << classroom.getClassCode() << ","
                << classroom.getTitle() << "\n";
            classFile.close();
            cout << "Classroom data saved successfully.\n";
        }
        else {
            cout << "Error opening file for saving classroom data.\n";
        }
    }

    void loadClassroomData() override {
        ifstream classFile("classrooms.txt");
        string line;
        if (classFile.is_open()) {
            while (getline(classFile, line)) {
                stringstream ss(line);
                string idStr, code, title;
                getline(ss, idStr, ',');
                getline(ss, code, ',');
                getline(ss, title);

                cout << "Loaded Classroom: " << idStr << ", " << code << ", " << title << "\n";
            }
            classFile.close();
        }
        else {
            cout << "Error opening file for loading classroom data.\n";
        }
    }

    void getClassroomById(int id) override {
        ifstream classFile("classrooms.txt");
        string line;
        if (classFile.is_open()) {
            while (getline(classFile, line)) {
                stringstream ss(line);
                string idStr, code, title;
                getline(ss, idStr, ',');
                int classID = stoi(idStr);
                if (classID == id) {
                    getline(ss, code, ',');
                    getline(ss, title);
                    cout << "Classroom Found: " << classID << ", " << code << ", " << title << "\n";
                    classFile.close();
                    return;
                }
            }
            classFile.close();
            cout << "Classroom with ID " << id << " not found.\n";
        }
        else {
            cout << "Error opening file.\n";
        }
    }
};

#endif
