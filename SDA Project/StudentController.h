// StudentController.h
#ifndef STUDENTCONTROLLER_H
#define STUDENTCONTROLLER_H

#include "Student.h"
#include <iostream>
#include"IUserDataHandler.h"
#include"ISubmissionHandler.h"
#include"SubmissionService.h"
#include "AnnouncementDataHandler.h"
#include "AssignmentDataHandler.h"
#include "CommentDataHandler.h"
using namespace std;

class StudentController {
private:
    IUserDataHandler* dataHandler;
    ISubmissionHandler* submissionHandler;
    SubmissionService submission;
    AnnouncementDataHandler* announcementHandler;
    AssignmentDataHandler* assignmentHandler;
    CommentDataHandler* commentHandler;
public:
    StudentController() {

    }
    StudentController(IUserDataHandler* handler, AnnouncementDataHandler* anHandler,
    AssignmentDataHandler* asHandler,
    CommentDataHandler* cmHandler, ISubmissionHandler* subHandler) : dataHandler(handler), announcementHandler(anHandler), assignmentHandler(asHandler), commentHandler(cmHandler), submission(subHandler){};
    void joinClass(Student& student, string classCode);
    void calculateGPA(float grades[], int size);
    void generateReport(const Student& student);

    void submitWork(string fileURL);
    void resubmitWork(string newFileURL);
    void viewAnnouncement();
    void viewAssignment();
    void addComment();
    void saveStudent(Student& s);
    void loadStudent();
};

#endif
