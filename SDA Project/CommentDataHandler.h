#ifndef COMMENTDATAHANDLER_H
#define COMMENTDATAHANDLER_H

#include <iostream>
#include <fstream>
#include <string>
#include "IPostDataHandler.h"
using namespace std;

class CommentDataHandler : public IPostDataHandler {
public:
    void saveComment(int commentID, const string& commentText) override {
        ofstream file("comments.txt", ios::app);
        if (file.is_open()) {
            file << commentID << ": " << commentText << "\n";
            file.close();
        }
        else {
            cout << "Error: Unable to save comment.\n";
        }
    }

    void loadAllComments() override {
        ifstream file("comments.txt");
        string line;
        if (file.is_open()) {
            cout << "\n--- All Comments ---\n";
            while (getline(file, line)) {
                cout << line << endl;
            }
            file.close();
        }
        else {
            cout << "No comments found.\n";
        }
    }

    // Not relevant for this handler — leave empty
    void saveAssignment(int, const string&, const string&) override {}
    void saveAnnouncement(int, const string&) override {}
    void loadAllAssignments() override {}
    void loadAllAnnouncements() override {}

    ~CommentDataHandler() override = default;
};

#endif
