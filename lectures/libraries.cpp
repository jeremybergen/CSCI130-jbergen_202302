/*
Name: Jeremy Bergen


Libraries
*/
#include <iostream>
#include <iomanip>
#include <cstdio>

using namespace std;

int main() {
    int num1, num2;

    cout << "Please enter two numbers separated by a space: ";

    cin >> num1 >> num2;

    cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
    printf("%d + %d = %d\n", num1, num2, num1+num2);

    // cout << setw(10) << "num1" << setw(10) << "num2" << endl;
    // cout << setfill('-');
    // cout << setw(20) << "" << endl;
    // cout << setfill(' ') << setprecision(8) << showpoint;
    // cout << setw(10) << num1 << setw(10) << num2 << endl;
    // char someChar;

    // cout << "Please enter a single character: ";
    // cin >> someChar;

    // cout << "You entered: " << char(toupper(someChar)) << endl;
    // string firstName;

    // cout << "Please enter your first name: ";
    // cin >> firstName;

    // cout << "Welcome " << firstName << endl;

    // cout << "Press enter to quit.";
    // cin.ignore();
    // cin.get();
    
    // float something, anotherThing;
    // float result;

    // cout << "Please enter the base and power: ";
    // cin >> something >> anotherThing;

    // result = pow(something, anotherThing);

    // cout << something << " raised to the power " << anotherThing << " is: " << result << endl;
    // int num1;

    // cout << "Please enter a number: ";
    // cin >> num1;

    // cout << "The square root of " << num1 << " is: " << sqrt(abs(num1)) << endl;
    return 0;
}