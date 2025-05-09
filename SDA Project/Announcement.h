// Announcement.h
#ifndef ANNOUNCEMENT_H
#define ANNOUNCEMENT_H

#include <string>
using namespace std;

class Announcement {
private:
    int announcementID;
    string message;
    string timestamp;

public:
    Announcement();
    Announcement(int id, string msg, string time);

    void setAnnouncementID(int id);
    void setMessage(string msg);
    void setTimestamp(string time);

    int getAnnouncementID();
    string getMessage();
    string getTimestamp();

    void postAnnouncement(string msg);
    void viewAnnouncement();
    void deleteAnnouncement();
};

#endif