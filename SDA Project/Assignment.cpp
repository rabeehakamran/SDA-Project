// Assignment.cpp
#include "Assignment.h"

Assignment::Assignment() {
    assignmentID = 0;
    title = "";
    description = "";
    dueDate = "";
    maxMarks = 0;
}

Assignment::Assignment(int id, string t, string d, string date, int marks) {
    assignmentID = id;
    title = t;
    description = d;
    dueDate = date;
    maxMarks = marks;
}

void Assignment::setAssignmentID(int id) {
    assignmentID = id;
}

void Assignment::setTitle(string t) {
    title = t;
}

void Assignment::setDescription(string d) {
    description = d;
}

void Assignment::setDueDate(string date) {
    dueDate = date;
}

void Assignment::setMaxMarks(int marks) {
    maxMarks = marks;
}

int Assignment::getAssignmentID() {
    return assignmentID;
}

string Assignment::getTitle() {
    return title;
}

string Assignment::getDescription() {
    return description;
}

string Assignment::getDueDate() {
    return dueDate;
}

int Assignment::getMaxMarks() {
    return maxMarks;
}

void Assignment::editAssignment(string newTitle, string newDesc) {
    title = newTitle;
    description = newDesc;
}

void Assignment::extendDeadline(string newDate) {
    dueDate = newDate;
}
