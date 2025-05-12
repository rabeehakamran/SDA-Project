#ifndef ASSIGNMENTDATAHANDLER_H
#define ASSIGNMENTDATAHANDLER_H

#include <iostream>
#include <fstream>
#include <string>
#include "IPostDataHandler.h"
using namespace std;

class AssignmentDataHandler : public IPostDataHandler {
public:
    void saveAssignment(int assignmentID, const string& title, const string& content) override {
        ofstream file("assignments.txt", ios::app);
        if (file.is_open()) {
            file << assignmentID << "," << title << "," << content << "\n";
            file.close();
        }
        else {
            cout << "Error: Unable to save assignment.\n";
        }
    }

    void loadAllAssignments() override {
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

    // Not relevant for this handler — leave empty
    void saveAnnouncement(int, const string&) override {}
    void saveComment(int, const string&) override {}
    void loadAllAnnouncements() override {}
    void loadAllComments() override {}

    ~AssignmentDataHandler() override = default;
};

#endif
