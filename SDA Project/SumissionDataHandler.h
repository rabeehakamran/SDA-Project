#pragma once
#ifndef SUBMISSIONDATAHANDLER_H
#define SUBMISSIONDATAHANDLER_H

#include <iostream>
#include <fstream>
#include<string>
using namespace std;

class SubmissionDataHandler {
public:
    static void saveSubmission(string studentName, string assignmentTitle, string fileURL, string timestamp) {
        ofstream file("submissions.txt", ios::app);
        if (file.is_open()) {
            file << studentName << "," << assignmentTitle << "," << fileURL << "," << timestamp << "\n";
            file.close();
        }
        else {
            cout << "Error: Unable to save submission.\n";
        }
    }

    static void viewAllSubmissions() {
        ifstream file("submissions.txt");
        string line;
        if (file.is_open()) {
            cout << "\n--- All Submissions ---\n";
            while (getline(file, line)) {
                cout << line << endl;
            }
            file.close();
        }
        else {
            cout << "No submissions found.\n";
        }
    }
};

#endif
