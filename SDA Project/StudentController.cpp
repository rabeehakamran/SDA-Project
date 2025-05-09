// StudentController.h
#include <iostream>
#include <string>
using namespace std;

class StudentController {
public:
    void submitWork(string fileURL) {
        cout << "Submitting assignment file: " << fileURL << endl;
    }
    void resubmitWork(string newFileURL) {
        cout << "Resubmitting with new file: " << newFileURL << endl;
    }
    void viewGrade() {
        cout << "Viewing current assignment grade...\n";
    }
    void viewReport() {
        cout << "Viewing progress report...\n";
    }
};