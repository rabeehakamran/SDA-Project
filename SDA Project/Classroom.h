// Classroom.h
#ifndef CLASSROOM_H
#define CLASSROOM_H

#include <string>
#include "Observer.h"
using namespace std;

class Classroom {
private:
    int classID;
    string classCode;
    string title;
    Observer* observers[50];
    int observerCount;

public:
    Classroom();
    Classroom(int id, string code, string t);

    void addObserver(Observer* observer);
    void removeObserver(Observer* observer);
    void notifyObservers(string message);
};

#endif