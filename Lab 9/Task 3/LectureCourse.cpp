#include <iostream>
#include "LectureCourse.h"
using namespace std;

LectureCourse::LectureCourse(string code, int cred, float mid, float final, float assignment)
    : Course(code, cred), midtermScore(mid), finalExamScore(final), assignmentScore(assignment) {}


    float LectureCourse::calculateGrade() {
        return (midtermScore * 0.3f) + (finalExamScore * 0.5f) + (assignmentScore * 0.2f);
    }
    
    void LectureCourse::displayInfo() {
        cout << "Lecture Course Information:" << endl;
        cout << "Course Code: " << courseCode << endl;
        cout << "Credits: " << credits << endl;
        cout << "Midterm Score: " << midtermScore << endl;
        cout << "Final Score: " << finalExamScore << endl;
        cout << "Assignment Score: " << assignmentScore << endl;
        cout << "Final Grade: " << calculateGrade() << endl << endl;
    } 
