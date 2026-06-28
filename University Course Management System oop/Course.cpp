//
// Created by MD SOUROV on 6/21/26.
//

#include "Course.h"
#include "Student.h"
#include "Teacher.h"


Course::Course(string id, Teacher& teacher) : id(id), teacher(&teacher) {}
    void Course:: reassign_teacher (Teacher& new_teacher){
        teacher = &new_teacher;
    }
    void Course:: add_student(Student& student) {
    if(find(students.begin(), students.end(), &student)
    != students.end() )  return;
            students.push_back(&student);
        student.assign_course(*this);
        }

void Course::remove_student(Student& student){
    students.erase(remove(students.begin(), students.end(), &student), students.end());

}



string Course:: get_id ()  {
        return id;
    }
    string Course:: get_teacher_id ()  {
        return teacher? teacher -> get_id(): " ";
    }
string Course::get_student_list() {
    string student_list = "";
    for (Student* student: students) {
        student_list += student->get_id();
        student_list += ", ";
    }
    return student_list;
}