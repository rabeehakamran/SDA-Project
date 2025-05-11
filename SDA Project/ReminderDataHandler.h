#pragma once
#ifndef REMINDERDATAHANDLER_H
#define REMINDERDATAHANDLER_H

#include <iostream>
#include <fstream>
#include<string>
using namespace std;

class ReminderDataHandler {
public:
    static void saveReminder(string message, string dueDate) {
        ofstream file("reminders.txt", ios::app);
        if (file.is_open()) {
            file << message << "," << dueDate << "\n";
            file.close();
        }
        else {
            cout << "Error: Unable to save reminder.\n";
        }
    }

    static void viewAllReminders() {
        ifstream file("reminders.txt");
        string line;
        if (file.is_open()) {
            cout << "\n--- All Reminders ---\n";
            while (getline(file, line)) {
                cout << line << endl;
            }
            file.close();
        }
        else {
            cout << "No reminders found.\n";
        }
    }
};

#endif
