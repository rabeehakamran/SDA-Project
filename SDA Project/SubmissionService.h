// SubmissionService.h
#ifndef SUBMISSION_SERVICE_H
#define SUBMISSION_SERVICE_H

#include <string>
using namespace std;

class SubmissionService {
public:
    bool validateFile(string fileURL);
    void uploadSubmission(string fileURL);
};

#endif