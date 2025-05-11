#pragma once
// IReminderHandler.h
#ifndef IREMINDERHANDLER_H
#define IREMINDERHANDLER_H

#include <string>

class IReminderHandler {
public:
    virtual void saveReminder(const std::string& message, const std::string& dueDate) = 0;
    virtual void viewAllReminders() = 0;
    virtual ~IReminderHandler() {}
};

#endif
