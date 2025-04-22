#include <iostream>
#include "LectureCourse.h"
#include "LabCourse.h"
using namespace std;

int main() {
    LectureCourse lecture("CS201", 3, 85.5, 90.0, 88.5);
    LabCourse lab("CS201L", 1, 92.0, 88.5, 95.0);


    Course* courses[2];
    courses[0] = &lecture;
    courses[1] = &lab;

    for (int i = 0; i < 2; ++i) {
        courses[i]->displayInfo();
        cout << "Final Grade: " << courses[i]->calculateGrade() << "\n\n";
    }

    return 0;
}
