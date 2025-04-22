#ifndef LAB_COURSE_H
#define LAB_COURSE_H

#include "Course.h"

class LabCourse : public Course {
    float reportScore;
    float finalScore;
    float workScore;

public:
    LabCourse(string code, int cred, float work, float report, float final);
    void displayInfo() ;
    float calculateGrade() ;
};

#endif
