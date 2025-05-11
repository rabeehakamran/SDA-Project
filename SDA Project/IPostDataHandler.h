#pragma once
#ifndef IPOSTDATAHANDLER_H
#define IPOSTDATAHANDLER_H

#include <string>
using namespace std;

class IPostDataHandler {
public:
    virtual void saveAssignment(int assignmentID, const string& title, const string& content) = 0;
    virtual void saveAnnouncement(int announcementID, const string& message) = 0;
    virtual void saveComment(int commentID, const string& commentText) = 0;

    virtual void loadAllAssignments() = 0;
    virtual void loadAllAnnouncements() = 0;
    virtual void loadAllComments() = 0;

    virtual ~IPostDataHandler() {}
};

#endif

