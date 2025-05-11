#ifndef ASSIGNMENTDATAHANDLER_H
#define ASSIGNMENTDATAHANDLER_H

#include <iostream>
#include <fstream>
#include<string>
using namespace std;

class AssignmentDataHandler {
public:
    static void saveAssignment(string title, string description, string deadline) {
        ofstream file("assignments.txt", ios::app);
        if (file.is_open()) {
            file << title << "," << description << "," << deadline << "\n";
            file.close();
        }
        else {
            cout << "Error: Unable to save assignment.\n";
        }
    }

    static void viewAllAssignments() {
        ifstream file("assignments.txt");
        string line;
        if (file.is_open()) {
            cout << "\n--- All Assignments ---\n";
            while (getline(file, line)) {
                cout << line << endl;
            }
            file.close();
        }
        else {
            cout << "No assignments found.\n";
        }
    }
};

#endif
