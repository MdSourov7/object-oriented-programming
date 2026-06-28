//
// Created by MD SOUROV on 6/28/26.
//

#ifndef INHERITENCE_ACTOR_H
#define INHERITENCE_ACTOR_H


#include<string>
using namespace std;
template <typename Type>
class Actor{
private:
    string name, description;
protected:
    Type value;
public:
    Actor(string name , string description, Type initial_value):
    name (name), description(description), value(initial_value){}

    virtual string get_name();
    virtual string get_description();
    virtual Type get_value();
    virtual bool set_value(Type new_value);
};
#endif //INHERITENCE_ACTOR_H
