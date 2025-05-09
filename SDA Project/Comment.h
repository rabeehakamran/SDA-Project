// Comment.h
#ifndef COMMENT_H
#define COMMENT_H

#include <string>
using namespace std;

class Comment {
private:
    int commentID;
    string content;
    string timestamp;
    int studentID;
    int teacherID;

public:
    Comment();
    Comment(int id, string c, string t, int sID, int tID);

    void setCommentID(int id);
    void setContent(string c);
    void setTimestamp(string t);
    void setStudentID(int id);
    void setTeacherID(int id);

    int getCommentID();
    string getContent();
    string getTimestamp();
    int getStudentID();
    int getTeacherID();

    void addComment(string newContent);
    void editComment(string newContent);
    void deleteComment();
    void viewComment();
};

#endif