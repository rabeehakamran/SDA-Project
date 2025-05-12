// SubmissionService.cpp
#include "SubmissionService.h"
#include <iostream>
using namespace std;

bool SubmissionService::validateFile(string fileURL) {
    if (fileURL.find(".pdf") != string::npos || fileURL.find(".docx") != string::npos) {
        return true;
    }
    return false;
}

void SubmissionService::uploadSubmission(string fileURL) {
    string name,title;
    if (validateFile(fileURL)) {
        cout << "File uploaded successfully: " << fileURL << endl;
    }
    else {
        cout << "Invalid file format. Only .pdf or .docx allowed." << endl;
    }
    cout << "Enter your name : ";
    getline(cin, name);
    cout << "Enter the title of submission : ";
    getline(cin, title);
    submissionHandler->saveSubmission(name,title,fileURL);

}
void SubmissionService::viewSubmission() {
    submissionHandler->viewAllSubmissions();
}