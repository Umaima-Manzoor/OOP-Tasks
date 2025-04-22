#ifndef LECTURE_COURSE_H
#define LECTURE_COURSE_H

#include "Course.h"

class LectureCourse : public Course {
    float midtermScore;
    float finalExamScore;
    float assignmentScore;


public:
    LectureCourse(string code, int cred, float mid, float final, float assignment);
    void displayInfo() ;
    float calculateGrade();
};

#endif
