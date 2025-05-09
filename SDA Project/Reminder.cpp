// Reminder.cpp
#include "Reminder.h"
#include <iostream>
using namespace std;

Reminder::Reminder() {
    reminderID = 0;
    title = "";
    description = "";
    createdDate = "";
    dueDate = "";
    assignmentID = 0;
}

Reminder::Reminder(int id, string t, string d, string cDate, string dDate, int aID) {
    reminderID = id;
    title = t;
    description = d;
    createdDate = cDate;
    dueDate = dDate;
    assignmentID = aID;
}

void Reminder::createReminder(string t, string d, string cDate, string dDate, int aID) {
    title = t;
    description = d;
    createdDate = cDate;
    dueDate = dDate;
    assignmentID = aID;
    cout << "Reminder Created Successfully.\n";
}

void Reminder::viewReminder() {
    cout << "Reminder ID: " << reminderID << endl;
    cout << "Title: " << title << endl;
    cout << "Description: " << description << endl;
    cout << "Created Date: " << createdDate << endl;
    cout << "Due Date: " << dueDate << endl;
    cout << "Assignment ID: " << assignmentID << endl;
}

void Reminder::deleteReminder() {
    title = "";
    description = "";
    cout << "Reminder Deleted.\n";
}

// Setters
void Reminder::setReminderID(int id) {
    reminderID = id;
}
void Reminder::setTitle(string t) {
    title = t;
}
void Reminder::setDescription(string d) {
    description = d;
}
void Reminder::setCreatedDate(string cDate) {
    createdDate = cDate;
}
void Reminder::setDueDate(string dDate) {
    dueDate = dDate;
}
void Reminder::setAssignmentID(int aID) {
    assignmentID = aID;
}

// Getters
int Reminder::getReminderID() {
    return reminderID;
}
string Reminder::getTitle() {
    return title;
}
string Reminder::getDescription() {
    return description;
}
string Reminder::getCreatedDate() {
    return createdDate;
}
string Reminder::getDueDate() {
    return dueDate;
}
int Reminder::getAssignmentID() {
    return assignmentID;
}