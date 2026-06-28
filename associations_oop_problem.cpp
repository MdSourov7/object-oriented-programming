//
// Created by MD SOUROV on 6/21/26.
//
//Account.cpp
//Your code:
#include"associations_oop_problem.h"
bool Account::deposit(double amount){
    if(amount < 0) return false;
    else
        balance += amount;
    return true;
}
bool Account:: withdraw (double amount){
    if (amount < 0 || amount > balance)
        return false;
    else
        balance -= amount;
    return true;
}
void Account::transfer(Account& target, double amount){
    if(amount <0 || amount > balance )
        return;
    else
        balance -= amount;
    target.balance += amount;

}

//Given. Do not change!
double Account::get_balance()
{
    return balance;
}