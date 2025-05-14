// Teacher.h
#ifndef TEACHER_H
#define TEACHER_H

#include "User.h"
#include "Submission.h"
#include "Announcement.h"
#include "AssignmentFactory.h"
#include "Assignment.h"
#include"IUserDataHandler.h"
#include"IClassDataHandler.h"
#include"IPostDataHandler.h"
#include"Classroom.h"
#include "AnnouncementDataHandler.h"
#include "AssignmentDataHandler.h"
#include "CommentDataHandler.h"
#include"SubmissionService.h"
class Teacher : public User {
private:
    int teacherID;
    int coTeacherID;
    string createdClasses[10];
    int classCount;
    AssignmentFactory assignmentFactory;
    Submission submission;
    SubmissionService ss;
    Announcement announcement;
    IUserDataHandler* dataHandler;
    IClassDataHandler* classDataHandler;
    AnnouncementDataHandler* announcementHandler;
    AssignmentDataHandler* assignmentHandler;
    CommentDataHandler* commentHandler;
    IPostDataHandler* postDataHandler;
public:
    Teacher(IUserDataHandler* uHandler, IClassDataHandler* cHandler, AnnouncementDataHandler* anHandler, AssignmentDataHandler* asHandler, CommentDataHandler* cmHandler, ISubmissionHandler* subHandler)
        : dataHandler(uHandler), classDataHandler(cHandler), announcementHandler(anHandler),assignmentHandler(asHandler), commentHandler(cmHandler) , ss(subHandler) {}
    Teacher();
    Teacher(int uid, int tid, int coid, string nm, string em, string pw);
    int getTeacherID();
    void createClass(int classID, string classCode, string title);
    void deleteClass(int classID);
    void removeStudent(int studentID);
    void inviteStudent(int studentID);
    void inviteCoTeacher(int coID);
    void acceptInvite(int fromTeacherID);
    void removeCoTeacher(int coID);
    void postAssignment();
    void createAnnouncement();
    void viewSubmission();
    int getTeacherID() const { return teacherID; }
    string getName() const { return name; }
    string getEmail() const { return email; }
    void saveTeacherData(Teacher& t);
    void loadTeacher();
    void addComment();
};

#endif