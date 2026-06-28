#include <iostream>
#include "Shared_Account.h"
#include "Class.h"
using namespace std;

int main (){
    User user_a = User("User A");
    User user_b = User("User B");
    User user_c = User("User C");

    Shared_account account_ab = Shared_account("Shared Account AB", user_a, user_b);
    cout << "Account AB is owned by: " << account_ab.get_owners() << endl;

    cout << "Removing owner C: " << account_ab.remove_owner(user_c) << endl;
    cout << "Account AB is owned by: " << account_ab.get_owners() << endl;

    return 0;
}
