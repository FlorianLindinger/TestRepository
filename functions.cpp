#pragma once

#include <iostream>
#include <cstdlib>
//#include <ctime>
#include<array>
//#include <typeinfo>
#include <cstdio>
#include <string>
#include <cassert>

using namespace std; 

#include "functions.h"

#pragma warning( push )
#pragma warning( disable : 4244 )
#pragma warning( disable : 4018 )

void print() {
    cout << endl;
}



/*

void print(string x, string y) {
    cout << x << y << endl;
}
void print(string x, string y, string z, string a) {
    cout << x << y << z << a << endl;
}
void print(string x, string y, string z) {
    cout << x << y << z << endl;    
}
void prints(string x, string y) {
    cout << x << y;
}
void prints(string x, string y, string z, string a) {
    cout << x << y << z << a;
}
void prints(string x, string y, string z, string a, string b) {
    cout << x << y << z << a << b;
}
void print(string x, string y, string z, string a, string b) {
    cout << x << y << z << a << b << endl;
}
void prints(string x, string y, string z, string a, string b, string c) {
    cout << x << y << z << a << b << c;
}
void print(string x, string y, string z, string a, string b, string c) {
    cout << x << y << z << a << b << c << endl;
}
void prints(string x, string y, string z) {
    cout << x << y << z;
}
void print(string x) {
    cout << x << endl;
}
void print() {
    cout << endl;
}
void print(char x) {
    cout << x << endl;
}
void print(int x) {
    cout << x << endl;
}
void print(unsigned int x) {
    cout << x << endl;
}
void print(float x) {
    cout << x << endl;
}
void print(long x) {
    cout << x << endl;
}
void print(double x) {
    cout << x << endl;
}

*/

/*
template <typename T>
void print(T arr[], int size) {
    cout << ("{ ");
    for (int x = 0; x < size; x++) {
        if (x < size - 1) {
            cout << arr[x] << ",";
        }
        else {
            cout << arr[x];
        }
    }
    cout<<" }"<<endl;
}
*/
/*
void prints(string x) {
    cout << x;
}
void prints(char x) {
    cout << x;
}
void prints(int x) {
    cout << x;
}
void prints(unsigned int x) {
    cout << x;
}
void prints(float x) {
    cout << x;
}
void prints(long x) {
    cout << x;
}
void prints(double x) {
    cout << x;
}
*/

/*
template <typename a>
void prints(a arr[], int size) {
    cout << ("{ ");
    for (int x = 0; x < size; x++) {
        if (x < size - 1) {
            cout << arr[x] << ",";
        }
        else {
            cout << arr[x];
        }
    }
    cout << " }" << endl;
}
*/

/*
int len(int arr[]) {
    int size = (*(&arr + 1) - arr);
    return size;
}
*/


/*
void printM(long long x) {

    cout << long long(x / 100) << "." << abs(x % 100) << " $" << endl;
}

*/



#pragma warning( pop )
