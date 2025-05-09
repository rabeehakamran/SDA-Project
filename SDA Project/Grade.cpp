#include<iostream>
#include "GradingStrategy.cpp"
class Grade {
private:
    GradingStrategy* strategy;  // Pointer to strategy
    float score;                // Final grade

public:
    Grade() : strategy(nullptr), score(0.0f) {}

    void setStrategy(GradingStrategy* newStrategy) {
        strategy = newStrategy;
    }

    void computeGrade(const Submission& submission) {
        if (strategy) {
            score = strategy->calculateGrade(submission);
        }
        else {
            score = 0.0f; // default if no strategy set
        }
    }

    float getScore() const {
        return score;
    }
};