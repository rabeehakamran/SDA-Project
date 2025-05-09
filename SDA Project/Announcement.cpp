// Announcement.cpp
#include "Announcement.h"
#include <iostream>
using namespace std;

Announcement::Announcement() {
    announcementID = 0;
    message = "";
    timestamp = "";
}

Announcement::Announcement(int id, string msg, string time) {
    announcementID = id;
    message = msg;
    timestamp = time;
}

void Announcement::setAnnouncementID(int id) {
    announcementID = id;
}

void Announcement::setMessage(string msg) {
    message = msg;
}

void Announcement::setTimestamp(string time) {
    timestamp = time;
}

int Announcement::getAnnouncementID() {
    return announcementID;
}

string Announcement::getMessage() {
    return message;
}

string Announcement::getTimestamp() {
    return timestamp;
}

void Announcement::postAnnouncement(string msg) {
    message = msg;
    cout << "Announcement posted: " << message << endl;
}

void Announcement::viewAnnouncement() {
    cout << "Announcement ID: " << announcementID << endl;
    cout << "Timestamp: " << timestamp << endl;
    cout << "Message: " << message << endl;
}

void Announcement::deleteAnnouncement() {
    message = "";
    cout << "Announcement deleted." << endl;
}