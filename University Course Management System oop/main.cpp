/*Implement the classes and their functions based of the class diagram below:
Class diagram
Student Class
Student (id : string)
sets the id of the student to the in the parameters given id
assign_course (course : Course&) : void
adds the given course to the student's course list
courses should be added to the end of the course list
remove_course (course : Course&) : void
removes the given course from the student's course list
get_id () : string
returns the student's id
get_course_list () : string
is given to create the expected output
do not change it
Teacher Class
Teacher (id : string)
sets the id of the teacher to the in the parameters given id
get_id () : string
returns the teacher's id
Course Class
Course (id : string, teacher : Teacher&)
sets the id of the course to the in the parameters given id
sets the given teacher as the teacher of the course
reassign_teacher (new_teacher : Teacher&) : void
replaces the teacher of the course with the given new_teacher
add_student (student : Student&) : void
adds the given student to the course's student list
students should be added to the end of the student list
adds the this course to the student's course list
courses should be added to the end of the student's course list
each student has to be unique (no duplicates allowed)
remove_student (student : Student&) : void
removes the given student from the course's student list
removes this course from the student's course list
get_id () : string
returns the course's id
get_teacher_id () : string
returns the id of the course's teacher
get_student_list () : string
is given to create the expected output
do not change it
*/
#include <iostream>
#include "Teacher.h"
#include "Student.h"
#include "Course.h"

using namespace std;
int main() {
    Teacher teacher_a("Teacher A");
    Teacher teacher_b("Teacher B");

    Student student_a("Student A");
    Student student_b("Student B");
    Student student_c("Student C");
    Student student_d("Student D");

    Course course_a1("Course A1", teacher_a);
    Course course_a2("Course A2", teacher_a);
    Course course_b1("Course B1", teacher_b);

    course_a1.add_student(student_a);
    course_a1.add_student(student_b);
    course_a1.add_student(student_c);

    course_a2.add_student(student_a);
    course_a2.add_student(student_d);

    course_b1.add_student(student_b);
    course_b1.add_student(student_c);
    course_b1.add_student(student_d);


    cout << "Teacher of course A1: " << course_a1.get_teacher_id() << endl;
    cout << "Students of course A1: " << course_a1.get_student_list() << endl;
    cout << "---" << endl;

    cout << "Teacher of course B1: " << course_b1.get_teacher_id() << endl;
    cout << "Students of course B1: " << course_b1.get_student_list() << endl;
    cout << "---" << endl;

    cout << "Courses of Student D: " << student_d.get_course_list() << endl;

    return 0;
}