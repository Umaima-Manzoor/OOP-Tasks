#include <iostream>
#include "LabCourse.h"
using namespace std;

LabCourse::LabCourse(string code, int cred, float work, float report, float final)
    : Course(code, cred), workScore(work), reportScore(report), finalScore(final) {}

    void LabCourse::displayInfo() {
        cout << "Lab Course Information:" << endl;
        cout << "Course Code: " << courseCode << endl;
        cout << "Credits: " << credits << endl;
        cout << "Lab Work Score: " << workScore << endl;
        cout << "Lab Report Score: " << reportScore << endl;
        cout << "Lab Final Score: " << finalScore << endl;
        cout << "Final Grade: " << calculateGrade() << endl << endl;
    } 
    

float LabCourse::calculateGrade() {
    return (workScore * 0.4f) + (reportScore * 0.3f) + (finalScore * 0.3f);
}

