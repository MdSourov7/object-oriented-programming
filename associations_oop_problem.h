//
// Created by MD SOUROV on 6/21/26.
//

#ifndef ASSOCIATIONS_OOP_PROBLEM_ASSOCIATIONS_OOP_PROBLEM_H
#define ASSOCIATIONS_OOP_PROBLEM_ASSOCIATIONS_OOP_PROBLEM_H
#include <iostream>
#include <string>
using namespace std;

//Account.h
class Account {
private:
    //Your code:
    double balance;
    string id;

public:
    //Your code:
    Account (string id) :  balance(0),id(id){}
    void transfer(Account& target, double amount);
    bool withdraw (double amount);
    bool deposit(double amount);
    double get_balance();
};
#endif //ASSOCIATIONS_OOP_PROBLEM_ASSOCIATIONS_OOP_PROBLEM_H
