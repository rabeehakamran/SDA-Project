// Classroom.cpp
#include "Classroom.h"
#include <iostream>
using namespace std;

Classroom::Classroom() {
    classID = 0;
    classCode = "";
    title = "";
    observerCount = 0;
}

Classroom::Classroom(int id, string code, string t) {
    classID = id;
    classCode = code;
    title = t;
    observerCount = 0;
}

void Classroom::addObserver(Observer* observer) {
    if (observerCount < 50) {
        observers[observerCount++] = observer;
    }
    else {
        cout << "Observer limit reached.\n";
    }
}

void Classroom::removeObserver(Observer* observer) {
    bool found = false;
    for (int i = 0; i < observerCount; ++i) {
        if (observers[i] == observer) {
            for (int j = i; j < observerCount - 1; ++j) {
                observers[j] = observers[j + 1];
            }
            observerCount--;
            found = true;
            break;
        }
    }
    if (!found) {
        cout << "Observer not found.\n";
    }
}

void Classroom::notifyObservers(string message) {
    for (int i = 0; i < observerCount; ++i) {
        observers[i]->update(message);
    }
}