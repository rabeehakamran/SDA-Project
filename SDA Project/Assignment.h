// Assignment.h
#ifndef ASSIGNMENT_H
#define ASSIGNMENT_H

#include <string>
using namespace std;

class Assignment {
private:
    int assignmentID;
    string title;
    string description;
    string dueDate;
    int maxMarks;

public:
    Assignment();
    Assignment(int id, string t, string d, string date, int marks);

    void setAssignmentID(int id);
    void setTitle(string t);
    void setDescription(string d);
    void setDueDate(string date);
    void setMaxMarks(int marks);

    int getAssignmentID();
    string getTitle();
    string getDescription();
    string getDueDate();
    int getMaxMarks();

    void editAssignment(string newTitle, string newDesc);
    void extendDeadline(string newDate);
};

#endif