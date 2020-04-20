#include <iostream>
#include <cstdlib>
#include<array>
#include <cstdio>
#include <string>
#include <cassert>
//#include <ctime>
//#include <typeinfo>

using namespace std;

#include "Bank_acc.h"
#include "functions.h"

#pragma warning( push )
#pragma warning( disable : 4244 )
#pragma warning( disable : 4018 )


void Bank_acc::pay_in(unsigned long long x) {
        balance += x;
        cout<<"Transfer successful."<<endl;
        cout << "New account balance:"<<endl;
        cout << long(balance / 100) << "." << abs(balance % 100) << " $" << endl;;
        cout<<endl;
    }
void Bank_acc::pay_out(unsigned long long x) {
        if (x <= balance) {
            balance -= x;
            cout<<"Payout successful."<<endl;
            cout<<"New account balance:"<<endl;
        }
        else {
            cout<<"Payout unsuccessful. Not enough money."<<endl;
            cout<<"Balance of the account:"<<endl;
        }
        cout << long(balance / 100) << "." << abs(balance % 100) << " $" << endl;;
        cout<<endl;
    }
void Bank_acc::pay_out_and_loan(unsigned long long x) {
        if (x <= balance) {
            cout<<"Payout successful. No loan needed."<<endl;
        }
        else {
            cout<<"Loan application successful."<<endl;
            cout<<"Loan size:"<<endl;
            int loan_size = x - balance;
            balance -= x;
            cout << long(loan_size / 100) << "." << loan_size % 100 << " $" << endl;
            cout<<"New account balance:"<<endl;
            cout << long(balance / 100) << "." << abs(balance % 100) << " $" << endl;
            cout << endl;

        }
    }
void Bank_acc::check_bal() {
    cout<<"Balance of the account:"<<endl;
    cout << long(balance / 100) << "." << abs(balance % 100) << " $" << endl;
    cout<<endl;
    }
void Bank_acc::check_owner() {
    cout<<"This account is owned by ";
    cout << owner<<endl;
    cout<<endl;
    }
void Bank_acc::transfer_acc(string x) {
    cout << "Account transferred from ";
    cout << owner;
        owner = x;
        cout << " to ";
        cout << owner;
        cout << "."<<endl;
        cout<<endl;
    }
Bank_acc::Bank_acc(long long x = 0, string y = "Owner not declared!") {
        balance = x;
        owner = y;
        print("Bank account opened.");
    }


Bank_acc::~Bank_acc() {
    }
    

#pragma warning( pop )
