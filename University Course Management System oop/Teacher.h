//
// Created by MD SOUROV on 6/21/26.
//

#ifndef UNIVERSITY_COURSE_MANAGEMENT_SYSTEM_OOP_TEACHER_H
#define UNIVERSITY_COURSE_MANAGEMENT_SYSTEM_OOP_TEACHER_H

#include <string>
using namespace std;
class Teacher {
//Your code:
private:
    string id;
public:
    Teacher ( string id ) : id(id){}
    string get_id()  ;

};
#endif //UNIVERSITY_COURSE_MANAGEMENT_SYSTEM_OOP_TEACHER_H
