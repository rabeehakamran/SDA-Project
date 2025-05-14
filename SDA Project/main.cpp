#include <iostream>
#include "StudentController.h"
#include "Teacher.h"
#include "StudentDataHandler.h"
#include "TeacherDataHandler.cpp"
#include "ClassDataHandler.h"
#include"AssignmentDataHandler.h"
#include"CommentDataHandler.h"
#include"AnnouncementDataHandler.h"
#include"SubmissionService.h"
#include "Ui.h"
#include"SubmissionDataHandler.h"

using namespace std;

int main() {
    int role;
    UI ui;

    cout << "\n=====================================\n";
    cout << "         Welcome to GCR         \n";
    cout << "=====================================\n";
    cout << "Select your role:\n";
    cout << "1. Student\n";
    cout << "2. Teacher\n";
    cout << "-------------------------------------\n";
    cout << "Enter choice (1 or 2): ";
    cin >> role;

    if (role == 1) {
        StudentDataHandler handler;
        AnnouncementDataHandler anHandler;
        AssignmentDataHandler asHandler;
        CommentDataHandler cmHandler;
        SubmissionService subHandler;
        SubmissionDataHandler submissionHandler;
        StudentController student(&handler, &anHandler, &asHandler, &cmHandler, &submissionHandler);
        ui.showStudentMenu(student);
    }
    else if (role == 2) {
        TeacherDataHandler handler;
        ClassroomDataHandler cHandler;
        AnnouncementDataHandler anHandler;
        AssignmentDataHandler asHandler;
        CommentDataHandler cmHandler;
        SubmissionDataHandler submissionHandler;
        Teacher teacher(&handler, &cHandler, &anHandler, &asHandler, &cmHandler,&submissionHandler);
        ui.showTeacherMenu(teacher);
    }
    else {
        cout << "Invalid role selected. Exiting." << endl;
        return 1;
    }

    return 0;
}
