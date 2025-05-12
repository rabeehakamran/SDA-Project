#include <iostream>
#include "StudentController.h"
#include "Teacher.h"
#include "StudentDataHandler.h"
#include "TeacherDataHandler.cpp"
#include "ClassDataHandler.h"
#include"AssignmentDataHandler.h"
#include"CommentDataHandler.h"
#include"AnnouncementDataHandler.h"
#include"SubmissionDataHandler.h"
#include "Ui.h" // add this!

using namespace std;

int main() {
    int role;
    UI ui;

    cout << "Are you a Student or a Teacher? (1 = Student, 2 = Teacher): ";
    cin >> role;

    if (role == 1) {
        StudentDataHandler handler;
        SubmissionDataHandler submissionHandler;
        AnnouncementDataHandler anHandler;
        AssignmentDataHandler asHandler;
        CommentDataHandler cmHandler;
        StudentController student(&handler, &anHandler, &asHandler, &cmHandler);
        ui.showStudentMenu(student);
    }
    else if (role == 2) {
        TeacherDataHandler handler;
        ClassroomDataHandler cHandler;
        AnnouncementDataHandler anHandler;
        AssignmentDataHandler asHandler;
        CommentDataHandler cmHandler;
        Teacher teacher(&handler, &cHandler, &anHandler, &asHandler, &cmHandler);
        ui.showTeacherMenu(teacher);
    }
    else {
        cout << "Invalid role selected. Exiting." << endl;
        return 1;
    }

    return 0;
}
