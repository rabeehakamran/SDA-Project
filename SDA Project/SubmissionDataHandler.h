// SubmissionDataHandler.h
#ifndef SUBMISSIONDATAHANDLER_H
#define SUBMISSIONDATAHANDLER_H

#include "ISubmissionHandler.h"
#include <iostream>
#include <fstream>
#include <string>

class SubmissionDataHandler : public ISubmissionHandler {
public:
    void saveSubmission(const std::string& studentName, const std::string& assignmentTitle,
        const std::string& fileURL, const std::string& timestamp) override {
        std::ofstream file("submissions.txt", std::ios::app);
        if (file.is_open()) {
            file << studentName << "," << assignmentTitle << "," << fileURL << "," << timestamp << "\n";
            file.close();
        }
        else {
            std::cout << "Error: Unable to save submission.\n";
        }
    }

    void viewAllSubmissions() override {
        std::ifstream file("submissions.txt");
        std::string line;
        if (file.is_open()) {
            std::cout << "\n--- All Submissions ---\n";
            while (std::getline(file, line)) {
                std::cout << line << std::endl;
            }
            file.close();
        }
        else {
            std::cout << "No submissions found.\n";
        }
    }
};

#endif
