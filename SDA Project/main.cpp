#include <iostream>
#include "StudentController.h"
#include "Teacher.h"
#include "Ui.h" // Add this!

using namespace std;

int main() {
    int role;
    UI ui;

    cout << "Are you a Student or a Teacher? (1 = Student, 2 = Teacher): ";
    cin >> role;

    if (role == 1) {
        StudentController student;
        ui.showStudentMenu(student);
    }
    else if (role == 2) {
        Teacher teacher;
        ui.showTeacherMenu(teacher);
    }
    else {
        cout << "Invalid role selected. Exiting." << endl;
        return 1;
    }

    return 0;
}
