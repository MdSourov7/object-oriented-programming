//
// Created by MD SOUROV on 6/21/26.
//

#ifndef OWNERSHIP_OOP_PROBLEM_SHARED_ACCOUNT_H
#define OWNERSHIP_OOP_PROBLEM_SHARED_ACCOUNT_H
#include<string>
#include<vector>
#include <iostream>
#include"Class.h"

using namespace std;

class Shared_account {
private:
    string id;
    double balance;
    vector<User *> owners;
public:
    Shared_account(string id, User &UserA) : id(id), balance(0) {
        owners.push_back(&UserA);
    }

    Shared_account(string id, User &UserA, User &UserB) : id(id), balance(0) {
        owners.push_back(&UserA);
        owners.push_back(&UserB);
    }

    bool add_owner(User &user);
    bool  remove_owner (User& user);
    string get_owners();
};
#endif //OWNERSHIP_OOP_PROBLEM_SHARED_ACCOUNT_H
