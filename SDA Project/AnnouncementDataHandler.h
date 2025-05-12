#ifndef ANNOUNCEMENTDATAHANDLER_H
#define ANNOUNCEMENTDATAHANDLER_H

#include <iostream>
#include <fstream>
#include <string>
#include "IPostDataHandler.h"
using namespace std;

class AnnouncementDataHandler : public IPostDataHandler {
public:
    void saveAnnouncement(int announcementID, const string& message) override {
        ofstream file("announcements.txt", ios::app);
        if (file.is_open()) {
            file << announcementID << "," << message << "\n";
            file.close();
        }
        else {
            cout << "Error: Unable to save announcement.\n";
        }
    }

    void loadAllAnnouncements() override {
        ifstream file("announcements.txt");
        string line;
        if (file.is_open()) {
            cout << "\n--- All Announcements ---\n";
            while (getline(file, line)) {
                cout << line << endl;
            }
            file.close();
        }
        else {
            cout << "No announcements found.\n";
        }
    }

    // Not relevant for this handler — leave empty
    void saveAssignment(int, const string&, const string&) override {}
    void saveComment(int, const string&) override {}
    void loadAllAssignments() override {}
    void loadAllComments() override {}

    ~AnnouncementDataHandler() override = default;
};

#endif
