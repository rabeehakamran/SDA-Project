// Reminder.h
#ifndef REMINDER_H
#define REMINDER_H

#include <string>
using namespace std;

class Reminder {
private:
    int reminderID;
    string title;
    string description;
    string createdDate;
    string dueDate;
    int assignmentID;

public:
    Reminder();
    Reminder(int id, string t, string d, string cDate, string dDate, int aID);

    void createReminder(string t, string d, string cDate, string dDate, int aID);
    void viewReminder();
    void deleteReminder();

    // Setters
    void setReminderID(int id);
    void setTitle(string t);
    void setDescription(string d);
    void setCreatedDate(string cDate);
    void setDueDate(string dDate);
    void setAssignmentID(int aID);

    // Getters
    int getReminderID();
    string getTitle();
    string getDescription();
    string getCreatedDate();
    string getDueDate();
    int getAssignmentID();
};

#endif