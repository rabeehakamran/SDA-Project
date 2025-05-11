#pragma once
// ISubmissionHandler.h
#ifndef ISUBMISSIONHANDLER_H
#define ISUBMISSIONHANDLER_H

#include <string>

class ISubmissionHandler {
public:
    virtual void saveSubmission(const std::string& studentName, const std::string& assignmentTitle,
        const std::string& fileURL, const std::string& timestamp) = 0;
    virtual void viewAllSubmissions() = 0;
    virtual ~ISubmissionHandler() {}
};

#endif
