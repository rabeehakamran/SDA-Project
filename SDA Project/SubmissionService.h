// SubmissionService.h
#ifndef SUBMISSION_SERVICE_H
#define SUBMISSION_SERVICE_H

#include <string>
#include"ISubmissionHandler.h"
using namespace std;

class SubmissionService {
private:
    ISubmissionHandler* submissionHandler;
public:
    SubmissionService() {

    }
    SubmissionService(ISubmissionHandler* sHandler) : submissionHandler(sHandler) {};
    bool validateFile(string fileURL);
    void uploadSubmission(string fileURL);
    void viewSubmission();
};

#endif