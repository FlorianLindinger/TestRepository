#pragma once
#include <string>


class Bank_acc {
private:
    long long balance;
    string owner;
public:
    void pay_in(unsigned long long x);
    void pay_out(unsigned long long x);
    void pay_out_and_loan(unsigned long long x);
    void check_bal();
    void check_owner();
    void transfer_acc(string x);
    Bank_acc(long long x, string y);
    
    ~Bank_acc();
};




