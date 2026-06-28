//
// Created by MD SOUROV on 6/21/26.
//
#include "Student.h"
#include "Course.h"
#include <algorithm>

using namespace std;

string Student:: get_id() {
    return id;
}

void Student:: assign_course ( Course& course) {
    if(find
    (courses.begin(), courses.end(), &course)
     != courses.end()) return;
    courses.push_back(&course);
    course.add_student(*this);

}
void Student:: remove_course (Course& course ){

    auto it = find(courses.begin(), courses.end(), &course);
        if(it != courses.end()){
            courses.erase(it);
            course.remove_student(*this);
    }

}

string Student:: get_course_list(){
    string course_list = "";
    for (Course* course: courses) {
        course_list += course -> get_id();
        course_list += ", ";
    }
    return course_list;
}