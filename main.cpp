#include <iostream>
#include <cstdlib>
#include<array>
#include <cstdio>
#include <string>
#include <cassert>
//#include <ctime>
//#include <typeinfo>

using namespace std;

// #include "Bank_acc.h"
#include "functions.h"

void print_menu(string name);

//#pragma warning( push )
//#pragma warning( disable : 4930 )


int main() {
    
    print("test")

    return 0;
 
}


//#pragma warning( pop )











/*
int main(){
    int arr[6] = { 1,2,3,4,5,6 };
    print(arr,6);     
    print(arr[0]);
    int len = *(&arr + 1) - arr;
    print(len);
    print(*(&arr + 1) - arr);
    
    array<int, 5> myints;
    print(myints.size());
    
    
    
    
    return 0;
}
























/*

class Klasse {
public:
    string Eig1;
    int Eig2;
    Klasse(){}
    Klasse(string aEig1, int aEig2) {
        Eig1 = aEig1;
        Eig2 = aEig2;
    }
    
};
class Unterklasse : public Klasse{
public: 
    Unterklasse(string aEig1, int aEig2) {
        Eig1 = aEig1;
        Eig2 = aEig2;
    }
   
};



int main(){
    Klasse Objekt("2",3);
    Unterklasse Subobjekt("4",5);
    cout << Objekt.Eig2;
    cout << Subobjekt.Eig1;
    





    return 0;
}






/*int main() {
    for (int i = 0; i < 3; i++){
        for (int y = 0; y < 2; y++) {
            cout << numberGrid[i][y] << " ";
        }
        cout << '\n';
    }
    return 0;
}
    
    
    
    
/*float power(float baseNum, int expNum) {
    float result = 1;
    if (expNum >= 0) {
        for (int i = 0; i < expNum; i++) {
            result = result * baseNum;
        }
    }
    else {
        for (int i = 0; i > expNum; i--) {
            result = result / baseNum;
        }
    }
    return result;
}
    
    
    
    
    
    
    
    
    
    /*   int secretNum = 7;
    int guess =secretNum+1;
    
    while(guess != secretNum){ 
        cout << "Guess Integer: ";
        cin >> guess;
        if (guess == secretNum) {
            cout << "Correct\n";
        } 
        else {
            cout << "Wrong\n";
        }
        

    }




    return 0;
}














/*{string day_of_week(int date_number) {
    string day_name;
    switch (date_number) {
    case 0:
        day_name = "Monday";
        break;
    case 1:
        day_name = "Tuesday";
        break;
    case 2:
        day_name = "Wednesday";
        break;
    case 3:
        day_name = "Thursday";
        break;
    case 4:
        day_name = "Friday";
        break;
    case 5:
        day_name = "Saturday";
        break;
    case 6:
        day_name = "Sunday";
        break;
    default:
        day_name = "Invalid Day Number";
    }
    return day_name;
    
}

int main()
{
    string dateIn;
    cout << "Date? ("dd.mm.yyyy")";
    cin >> dateIn;
    int month, day, year,month_len;
    for i 
    int switch (month) {
    case 1,3,5,7,8,10,12:
        month_len = 31;
        break;
    case 2:
        if (year % 4 == 0 and year%100 =!0 or year % 4 == 0 and year%400=0) {
            month_len = 29;
        }
        else {
            month_len = 28;

        }
        break;
    case 4,6,9,11:
        month_len = 30;
        break;
    default:
        cout << "Wrong Month Number";
    }
    if (year % 4 == 0 and year % 100 = !0 or year % 4 == 0 and year % 400 = 0) {
        year*365,25
    }
    if (year % 4 == 1 and year % 100 = !0 or year % 4 == 0 and year % 400 = 0) {

    }
    if (year % 4 == 0 and year % 100 = !0 or year % 4 == 0 and year % 400 = 0) {

    }
    


    cout << day_of_week(0);
    return 0;
    
}


    double num1, num2;
    char op;
    cout << "Enter a number ";
    cin >>  num1;
    cout << "Enter an operator ";
    cin >> op;
    cout << "Enter a number ";
    cin >>  num2;
    double result{};
    if (op == '+'){
        result = num1 + num2;
        cout << result;
    } else if (op == '-'){
        result = num1 - num2;
        cout << result;
    }else if (op == '*'){
        result = num1 * num2;
        cout << result;
    }
    else if (op == '/' or op == ':') {
        result = num1 / num2;
        cout << result;
    }
    else {
        cout<< "Invalid Operator\n";
    }
    */

// Programm ausführen: STRG+F5 oder Menüeintrag "Debuggen" > "Starten ohne Debuggen starten"
// Programm debuggen: F5 oder "Debuggen" > Menü "Debuggen starten"

// Tipps für den Einstieg: 
//   1. Verwenden Sie das Projektmappen-Explorer-Fenster zum Hinzufügen/Verwalten von Dateien.
//   2. Verwenden Sie das Team Explorer-Fenster zum Herstellen einer Verbindung mit der Quellcodeverwaltung.
//   3. Verwenden Sie das Ausgabefenster, um die Buildausgabe und andere Nachrichten anzuzeigen.
//   4. Verwenden Sie das Fenster "Fehlerliste", um Fehler anzuzeigen.
//   5. Wechseln Sie zu "Projekt" > "Neues Element hinzufügen", um neue Codedateien zu erstellen, bzw. zu "Projekt" > "Vorhandenes Element hinzufügen", um dem Projekt vorhandene Codedateien hinzuzufügen.
//   6. Um dieses Projekt später erneut zu öffnen, wechseln Sie zu "Datei" > "Öffnen" > "Projekt", und wählen Sie die SLN-Datei aus.

