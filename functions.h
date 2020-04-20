#pragma once

#include <string>

using namespace std;


template<typename T>
void printM(T x) {
    cout << int(x / 100) << "." << abs(x % 100) << " $" << endl;
}
template<typename T>
void printC(T x) {
    cout << x << " $" << endl;
}
void print();



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
template <typename T>
void printl(T arr[], int size) {
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
template <typename T>
string printr(T arr[], int size) {
    string result="{ ";
    for (int x = 0; x < size; x++) {
        if (x < size - 1) {
            result+= to_string(arr[x]) +",";
        }
        else {
            result += to_string(arr[x]);
        }
    }
    result +=" }";
    return result;
}
template<typename T>
void print(T x) {
    cout << x << endl;
}
template<typename T>
void printl(T x) {
    cout << x;
}
template<typename T,typename V>
void print(T x, V y) {
    cout << x <<" "<< y << endl;
}
template<typename T, typename V>
void printl(T x, V y) {
    cout << x <<" "<< y;
}
template<typename T, typename V>
void printsl(T x, V y) {
    cout << x  << y;
}
template<typename T, typename V>
void prints(T x, V y) {
    cout << x << y << endl;
}
template<typename T, typename V,typename U>
void print(T x, V y,U z) {
    cout << x << " " << y << " "<<z<<endl;
}
template<typename T, typename V,typename U>
void printl(T x, V y,U z) {
    cout << x << " " << y<<" "<<z;
}
template<typename T, typename V,typename U>
void printsl(T x, V y,U z) {
    cout << x << y<<z;
}
template<typename T, typename V,typename U>
void prints(T x, V y,U z) {
    cout << x << y <<z<< endl;
}
template<typename T, typename V, typename U,typename W>
void print(T x, V y, U z, W a) {
    cout << x << " " << y << " " << z <<" "<<a<< endl;
}
template<typename T, typename V, typename U,typename W>
void printl(T x, V y, U z,W a) {
    cout << x << " " << y << " " << z<<" "<<a;
}
template<typename T, typename V, typename U,typename W>
void printsl(T x, V y, U z,W a) {
    cout << x << y << z<<a;
}
template<typename T, typename V, typename U,typename W>
void prints(T x, V y, U z,W a) {
    cout << x << y << z <<a<< endl;
}
template<typename T, typename V, typename U, typename W, typename L>
void print(T x, V y, U z, W a, L b) {
    cout << x << " " << y << " " << z << " " << a <<" "<<b<< endl;
}
template<typename T, typename V, typename U, typename W, typename L>
void printl(T x, V y, U z, W a, L b) {
    cout << x << " " << y << " " << z << " " << a<<" "<<b;
}
template<typename T, typename V, typename U, typename W, typename L>
void printsl(T x, V y, U z, W a, L b) {
    cout << x << y << z << a<<b;
}
template<typename T, typename V, typename U, typename W,typename L>
void prints(T x, V y, U z, W a, L b) {
    cout << x << y << z << a <<b<< endl;
}