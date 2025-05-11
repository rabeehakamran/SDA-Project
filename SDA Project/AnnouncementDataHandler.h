#ifndef ANNOUNCEMENTDATAHANDLER_H
#define ANNOUNCEMENTDATAHANDLER_H

#include <iostream>
#include <fstream>
#include<string>
using namespace std;

class AnnouncementDataHandler {
public:
    static void saveAnnouncement(string message, string date) {
        ofstream file("announcements.txt", ios::app);
        if (file.is_open()) {
            file << message << "," << date << "\n";
            file.close();
        }
        else {
            cout << "Error: Unable to save announcement.\n";
        }
    }

    static void viewAllAnnouncements() {
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
};

#endif

