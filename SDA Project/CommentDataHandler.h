#pragma once
#ifndef COMMENTDATAHANDLER_H
#define COMMENTDATAHANDLER_H

#include <iostream>
#include <fstream>
#include<string>
using namespace std;

class CommentDataHandler {
public:
    static void saveComment(string user, string commentText) {
        ofstream file("comments.txt", ios::app);
        if (file.is_open()) {
            file << user << ": " << commentText << "\n";
            file.close();
        }
        else {
            cout << "Error: Unable to save comment.\n";
        }
    }

    static void viewAllComments() {
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
};

#endif
