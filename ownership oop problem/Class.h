//
// Created by MD SOUROV on 6/21/26.
//

#ifndef OWNERSHIP_OOP_PROBLEM_CLASS_H
#define OWNERSHIP_OOP_PROBLEM_CLASS_H
#include <string>
using namespace std;
class User {
private :
    string id;
public:
    User(string id) : id(id) {}
    string get_id();


};
#endif //OWNERSHIP_OOP_PROBLEM_CLASS_H
