// Comment.cpp
#include "Comment.h"
#include <iostream>
using namespace std;

Comment::Comment() {
    commentID = 0;
    content = "";
    timestamp = "";
    studentID = -1;
    teacherID = -1;
}

Comment::Comment(int id, string c, string t, int sID, int tID) {
    commentID = id;
    content = c;
    timestamp = t;
    studentID = sID;
    teacherID = tID;
}

void Comment::setCommentID(int id) {
    commentID = id;
}

void Comment::setContent(string c) {
    content = c;
}

void Comment::setTimestamp(string t) {
    timestamp = t;
}

void Comment::setStudentID(int id) {
    studentID = id;
}

void Comment::setTeacherID(int id) {
    teacherID = id;
}

int Comment::getCommentID() {
    return commentID;
}

string Comment::getContent() {
    return content;
}

string Comment::getTimestamp() {
    return timestamp;
}

int Comment::getStudentID() {
    return studentID;
}

int Comment::getTeacherID() {
    return teacherID;
}

void Comment::addComment(string newContent) {
    content = newContent;
    cout << "Comment added: " << content << endl;
}

void Comment::editComment(string newContent) {
    content = newContent;
    cout << "Comment edited to: " << content << endl;
}

void Comment::deleteComment() {
    content = "";
    cout << "Comment deleted." << endl;
}

void Comment::viewComment() {
    cout << "Comment ID: " << commentID << endl;
    cout << "Timestamp: " << timestamp << endl;
    cout << "Content: " << content << endl;
    cout << "Student ID: " << studentID << ", Teacher ID: " << teacherID << endl;
}