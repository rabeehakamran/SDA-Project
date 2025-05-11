#ifndef ICLASSROOMDATAHANDLER_H
#define ICLASSROOMDATAHANDLER_H

#include "Classroom.h"

class IClassDataHandler {
public:
    virtual void saveClassroomData(const Classroom& classroom) = 0;
    virtual void loadClassroomData() = 0;
    virtual void getClassroomById(int id) = 0;
    virtual ~IClassDataHandler() {}
};

#endif
