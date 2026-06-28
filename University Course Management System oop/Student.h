//
// Created by MD SOUROV on 6/21/26.
//

#ifndef UNIVERSITY_COURSE_MANAGEMENT_SYSTEM_OOP_STUDENT_H
#define UNIVERSITY_COURSE_MANAGEMENT_SYSTEM_OOP_STUDENT_H

#include <string>
#include <vector>

class Course;
using namespace std;

class Student {
private:
    //Your code:
    string id;
    vector<Course *> courses;
public:
    //Your code:
    Student(string id): id(id){}

    void assign_course (Course &course);

    void remove_course(Course &course);

    string get_id();

    string get_course_list();
};
#endif //UNIVERSITY_COURSE_MANAGEMENT_SYSTEM_OOP_STUDENT_H
