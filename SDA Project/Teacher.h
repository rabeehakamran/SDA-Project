// Teacher.h
#ifndef TEACHER_H
#define TEACHER_H

#include "User.h"
#include "Submission.h"
#include "Announcement.h"
#include "AssignmentFactory.cpp"

class Teacher : public User {
private:
    int teacherID;
    int coTeacherID;
    string createdClasses[10];
    int classCount;
    AssignmentFactory assignmentFactory;
    Submission submission;
    Announcement announcement;

public:
    Teacher();
    Teacher(int uid, int tid, int coid, string nm, string em, string pw);

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
};

#endif