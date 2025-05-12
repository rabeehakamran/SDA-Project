// Submission.cpp
#include "Submission.h"
#include <iostream>
using namespace std;

Submission::Submission() {
    submissionID = 0;
    submissionDate = "";
    files = "";
    status = "Not Submitted";
    assignmentGrade = -1;
}

Submission::Submission(int id, string date, string fileURL) {
    submissionID = id;
    submissionDate = date;
    files = fileURL;
    status = "Submitted";
    assignmentGrade = -1;
}

void Submission::setSubmissionID(int id) {
    submissionID = id;
}

void Submission::setSubmissionDate(string date) {
    submissionDate = date;
}

void Submission::setFiles(string fileURL) {
    files = fileURL;
}

void Submission::setStatus(string s) {
    status = s;
}

void Submission::setAssignmentGrade(float g) {
    assignmentGrade = g;
}

int Submission::getSubmissionID() {
    return submissionID;
}

string Submission::getSubmissionDate() {
    return submissionDate;
}

string Submission::getFiles() {
    return files;
}

string Submission::getStatus() {
    return status;
}

float Submission::getAssignmentGrade() {
    return assignmentGrade;
}

