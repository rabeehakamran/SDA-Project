// ClassroomDescription.h
#include<iostream>
#include <string>
using namespace std;

class ClassroomDescription {
private:
    string title;
    string section;
    string course;
    string description;
    string creationDate;

public:
    ClassroomDescription();
    ClassroomDescription(string t, string s, string c, string d, string date);

    void editInfo(int classID);

    // Getters (optional if needed)
    string getTitle();
    string getSection();
    string getCourse();
    string getDescription();
    string getCreationDate();

    // Setters
    void setTitle(string t);
    void setSection(string s);
    void setCourse(string c);
    void setDescription(string d);
    void setCreationDate(string date);
};

ClassroomDescription::ClassroomDescription() {
    title = section = course = description = creationDate = "";
}

ClassroomDescription::ClassroomDescription(string t, string s, string c, string d, string date) {
    title = t;
    section = s;
    course = c;
    description = d;
    creationDate = date;
}

void ClassroomDescription::editInfo(int classID) {
    cout << "Editing info for class ID: " << classID << endl;
    cout << "Enter new title: ";
    getline(cin, title);

    cout << "Enter new section: ";
    getline(cin, section);

    cout << "Enter new course: ";
    getline(cin, course);

    cout << "Enter new description: ";
    getline(cin, description);

    cout << "Enter new creation date: ";
    getline(cin, creationDate);

    cout << "Classroom info updated successfully.\n";
}

// Getters
string ClassroomDescription::getTitle() { return title; }
string ClassroomDescription::getSection() { return section; }
string ClassroomDescription::getCourse() { return course; }
string ClassroomDescription::getDescription() { return description; }
string ClassroomDescription::getCreationDate() { return creationDate; }

// Setters
void ClassroomDescription::setTitle(string t) { title = t; }
void ClassroomDescription::setSection(string s) { section = s; }
void ClassroomDescription::setCourse(string c) { course = c; }
void ClassroomDescription::setDescription(string d) { description = d; }
void ClassroomDescription::setCreationDate(string date) { creationDate = date; }