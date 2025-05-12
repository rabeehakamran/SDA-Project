// Submission.h
#ifndef SUBMISSION_H
#define SUBMISSION_H

#include <string>
using namespace std;

class Submission {
private:
    int submissionID;
    string submissionDate;
    string files; // file URL
    string status;
    float assignmentGrade;

public:
    Submission();
    Submission(int id, string date, string fileURL);

    void setSubmissionID(int id);
    void setSubmissionDate(string date);
    void setFiles(string fileURL);
    void setStatus(string s);
    void setAssignmentGrade(float g);

    int getSubmissionID();
    string getSubmissionDate();
    string getFiles();
    string getStatus();
    float getAssignmentGrade();
};
#endif