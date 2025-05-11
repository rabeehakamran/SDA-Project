// ReminderDataHandler.h
#ifndef REMINDERDATAHANDLER_H
#define REMINDERDATAHANDLER_H

#include "IReminderHandler.h"
#include <iostream>
#include <fstream>
#include <string>

class ReminderDataHandler : public IReminderHandler {
public:
    void saveReminder(const std::string& message, const std::string& dueDate) override {
        std::ofstream file("reminders.txt", std::ios::app);
        if (file.is_open()) {
            file << message << "," << dueDate << "\n";
            file.close();
        }
        else {
            std::cout << "Error: Unable to save reminder.\n";
        }
    }

    void viewAllReminders() override {
        std::ifstream file("reminders.txt");
        std::string line;
        if (file.is_open()) {
            std::cout << "\n--- All Reminders ---\n";
            while (std::getline(file, line)) {
                std::cout << line << std::endl;
            }
            file.close();
        }
        else {
            std::cout << "No reminders found.\n";
        }
    }
};

#endif
