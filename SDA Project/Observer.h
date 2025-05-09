// Observer.h
#ifndef OBSERVER_H
#define OBSERVER_H

#include <string>
using namespace std;

class Observer {
public:
    virtual void update(string notification) = 0;
};

#endif