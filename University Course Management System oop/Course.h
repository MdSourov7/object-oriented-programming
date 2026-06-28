//
// Created by MD SOUROV on 6/21/26.
//

#ifndef UNIVERSITY_COURSE_MANAGEMENT_SYSTEM_OOP_COURSE_H
#define UNIVERSITY_COURSE_MANAGEMENT_SYSTEM_OOP_COURSE_H
#include<vector>
#include <string>

class Student;
class Teacher;
using namespace std;

class Course {
private:
    //Your code:
    string id;
    Teacher *teacher;
    vector<Student*> students;
public:
    //Your code:
    Course(string id, Teacher& teacher);
    void reassign_teacher(Teacher &new_teacher);

    void add_student(Student &student);

    void remove_student(Student &student);

    string get_id();

    string get_teacher_id();

    string get_student_list();
};
#endif //UNIVERSITY_COURSE_MANAGEMENT_SYSTEM_OOP_COURSE_H
