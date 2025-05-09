// Teacher.h
#ifndef TEACHER_H
#define TEACHER_H

#include "User.h"

class Teacher : public User {
private:
    int teacherID;
    int coTeacherID;
    string createdClasses[10];
    int classCount;

public:
    Teacher(int uid, int tid, int coid, string nm, string em, string pw);

    void createClass(int classID, string classCode, string title);
    void deleteClass(int classID);
    void removeStudent(int studentID);
    void inviteStudent(int studentID);
    void inviteCoTeacher(int coID);
    void acceptInvite(int fromTeacherID);
    void removeCoTeacher(int coID);
};

#endif