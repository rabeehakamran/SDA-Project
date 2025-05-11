#pragma once
#include<iostream>
#include <string>
#include<ctime>
using namespace std;
#include "submission.h"

class GradingStrategy {
public:
    virtual int calculateGrade(const Submission& submission) = 0;
    virtual ~GradingStrategy() {}
};

// ======== ProjectGradingStrategy ========
class ProjectGradingStrategy : public GradingStrategy {
public:
    int calculateGrade(const Submission& submission) override {
        srand(time(0));
        return rand() % 11;
    }
};

// ======== EssayGradingStrategy ========
class EssayGradingStrategy : public GradingStrategy {
public:
    int calculateGrade(const Submission& submission) override {
        srand(time(0));
        return rand() % 11;
    }
};

// ======== MCQGradingStrategy ========
class MCQGradingStrategy : public GradingStrategy {
public:
    int calculateGrade(const Submission& submission) override {
        srand(time(0));
        return rand() % 11;
    }
};