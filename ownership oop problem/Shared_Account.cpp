//
// Created by MD SOUROV on 6/21/26.
//
#include"Shared_Account.h"
bool Shared_account::add_owner(User& user){
    if(owners.size()>= 2) return false;
    for(User* u : owners){
        if( u== &user){
            return false;
        }
    }
    owners.push_back(&user);
    return true;
}
bool Shared_account:: remove_owner (User& user){
    if(owners.size()<= 1){
        return false;
    }
    for(auto it = owners.begin(); it!= owners.end(); it++){
        if(*it == &user){
            owners.erase(it);
            return true;
        }
    }
    return false;
}


string Shared_account::get_owners() {
    string names = "";
User* user_a = owners.front();
names += user_a->get_id();

if (owners.size() <= 1)
return names;

names += " & ";
User* user_b = owners.back();
names += user_b->get_id();

return names;
}