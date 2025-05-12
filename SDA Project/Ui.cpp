// UI.cpp
#include "UI.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

string generateClassCode() {
    const char charset[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    string code = "";
    int length = 6;

    srand(time(0)); // seed once per program run

    for (int i = 0; i < length; ++i) {
        int index = rand() % (sizeof(charset) - 1);
        code += charset[index];
    }
    return code;
}

void UI::showStudentMenu(StudentController& studentCtrl) {
    int option;
    do {
        cout << "\n--- Student Menu ---" << endl;
        cout << "1. Submit Work" << endl;
        cout << "2. View Announcement" << endl;
        cout << "3. Add Comment" << endl;
        cout << "0. Logout / Exit" << endl;
        cout << "Enter your choice: ";
        cin >> option;
        cin.ignore();

        string file;
        switch (option) {
        case 1:
            cout << "Enter file URL to submit: ";
            getline(cin, file);
            studentCtrl.submitWork(file);
            break;
        case 2:
            studentCtrl.viewAnnouncement();
            break;
        case 3:
            studentCtrl.addComment();
            break;
        case 0:
            cout << "Logging out...\n";
            break;
        default:
            cout << "Invalid option. Try again.\n";
            break;
        }
    } while (option != 0);
}

void UI::showTeacherMenu(Teacher& teacher) {
    int option;
    int classId;
    string classCode, title;
    do {
        cout << "\n--- Teacher Menu ---" << endl;
        cout << "1. Create Classroom" << endl;
        cout << "2. Post Assignment" << endl;
        cout << "3. Post Announcement" << endl;
        cout << "4. View Submissions" << endl;
        cout << "0. Logout / Exit" << endl;
        cout << "Enter your choice: ";
        cin >> option;
        cin.ignore();

        switch (option) {
        case 1:
            cout << "Enter class ID: ";
            cin >> classId;
            cin.ignore();
            cout << "Enter class title: ";
            getline(cin, title);
            classCode = generateClassCode();
            teacher.createClass(classId, classCode, title);
            break;
        case 2:
            teacher.postAssignment();
            break;
        case 3:
            teacher.createAnnouncement();
            break;
        case 4:
            teacher.viewSubmission();
            break;
        case 0:
            cout << "Logging out...\n";
            break;
        default:
            cout << "Invalid option. Try again.\n";
            break;
        }
    } while (option != 0);
}
