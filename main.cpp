/*Account (id : string)
sets the balance of the newly created account to zero (0)
sets the id of the account to the in the parameters given id
deposit (amount : double) : bool
adds the given amount to the account's balance
the amount can't be negative
returns true if the action was successful and false if it wasn't
withdraw (amount : double) : bool
removes the given amount from the account's balance
the amount can't be negative
the balance of the account is not allowed to fall below zero
returns true if the action was successful and false if it wasn't
transfer (target : Account& , amount : double) : void
transfers the given amount from this account to the given target account
the amount can't be negative
the balance of the account is not allowed to fall below zero
get_balance () : double
is given to create the expected output
do not change it
 */
#include <iostream>
#include <string>
#include "associations_oop_problem.h"
using namespace std;
int main(){
    Account accountA = Account("Account A");
    Account accountB = Account("Account B");

    accountA.deposit(100);
    accountB.deposit(100);

    accountA.transfer(accountB, 50);

    cout << "Account A has: " << accountA.get_balance() << endl;
    cout << "Account B has: " << accountB.get_balance() << endl;





    return 0;
}
