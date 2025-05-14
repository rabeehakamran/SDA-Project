#include "UI.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>

using namespace std;

// Generates a random class code
string generateClassCode() {
    const char charset[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    string code = "";
    int length = 6;

    srand(time(0)); // Seed once per program run

    for (int i = 0; i < length; ++i) {
        int index = rand() % (sizeof(charset) - 1);
        code += charset[index];
    }
    return code;
}

// Student Menu
void UI::showStudentMenu(StudentController& studentCtrl) {
    int option;
    do {
        cout << "\n=====================================\n";
        cout << "           Student Dashboard         \n";
        cout << "=====================================\n";
        cout << "1. Submit Assignment\n";
        cout << "2. View Announcements\n";
        cout << "3. Add Comment\n";
        cout << "0. Logout / Exit\n";
        cout << "-------------------------------------\n";
        cout << "Enter your choice: ";
        cin >> option;
        cin.ignore();

        string file;
        switch (option) {
        case 1:
            cout << "\nEnter file URL to submit: ";
            getline(cin, file);
            studentCtrl.submitWork(file);
            break;
        case 2:
            cout << "\nAnnouncements:\n";
            studentCtrl.viewAnnouncement();
            break;
        case 3:
            cout << "\nAdd Comment:\n";
            studentCtrl.addComment();
            break;
        case 0:
            cout << "\nLogging out... Goodbye!\n";
            break;
        default:
            cout << "\nInvalid option. Please try again.\n";
            break;
        }
    } while (option != 0);
}

// Teacher Menu
void UI::showTeacherMenu(Teacher& teacher) {
    int option;
    int classId;
    string classCode, title;

    do {
        cout << "\n=====================================\n";
        cout << "           Teacher Dashboard         \n";
        cout << "=====================================\n";
        cout << "1. Create New Classroom\n";
        cout << "2. Post Assignment\n";
        cout << "3. Post Announcement\n";
        cout << "4. View Submissions\n";
        cout << "5. Add Comment\n";
        cout << "0. Logout / Exit\n";
        cout << "-------------------------------------\n";
        cout << "Enter your choice: ";
        cin >> option;
        cin.ignore();

        switch (option) {
        case 1:
            cout << "\nEnter Class ID: ";
            cin >> classId;
            cin.ignore();
            cout << "Enter Class Title: ";
            getline(cin, title);
            classCode = generateClassCode();
            teacher.createClass(classId, classCode, title);
            cout << "Classroom created with code: " << classCode << "\n";
            break;
        case 2:
            cout << "\nPosting Assignment...\n";
            teacher.postAssignment();
            break;
        case 3:
            cout << "\nCreating Announcement...\n";
            teacher.createAnnouncement();
            break;
        case 4:
            cout << "\nViewing Submissions...\n";
            teacher.viewSubmission();
            break;
        case 5:
            cout << "\nAdding Comment...\n";
            teacher.addComment();
            break;
        case 0:
            cout << "\nLogging out... Goodbye!\n";
            break;
        default:
            cout << "\nInvalid option. Please try again.\n";
            break;
        }
    } while (option != 0);
}
