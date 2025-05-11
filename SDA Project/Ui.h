#pragma once
#include "StudentController.h"
#include "Teacher.h"

class UI {
public:
    void showStudentMenu(StudentController& studentCtrl);
    void showTeacherMenu(Teacher& teacher);
};
