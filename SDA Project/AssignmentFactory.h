#pragma once
//AssignmentFactory.h
#include "AssignmentDetails.h"
#include<iostream>
#include <string>
using namespace std;

class AssignmentFactory {
public:
    AssignmentDetails createAssignment(string title, string description, string fileURL) {
        {
            AssignmentDetails assignment;
            assignment.title = title;
            assignment.description = description;
            assignment.attachedFilesURL = fileURL;
            return assignment;
        }
    }
};