/*
Name: Jeremy Bergen

All about the variables
*/
#include <iostream>

using namespace std;

int main() {
    unsigned int inputSeconds;
    unsigned int numHours, numMins, numSeconds;

    cout << "Please enter the number of seconds: ";
    cin >> inputSeconds;

    numHours = inputSeconds/3600;
    numMins = (inputSeconds/60)%60;
    numSeconds = inputSeconds%60;

    cout << "The number of hours:minutes:seconds from " << inputSeconds << " seconds is: " << numHours << ":" << numMins << ":" << numSeconds << endl;

    // int num1, num2;
    // float fNum1, fNum2;
    // float total;

    // cout << "Please enter two numbers separated by a space: ";
    // cin >> num1 >> num2;

    // cout << num1 << "%" << num2 << " = " << num1 % num2 << endl;


    // total = (((num1 * 42) / num2) + 23) - 5 * (100 * 5);

    // fNum1 = float(num1);
    // fNum2 = float(num2);

    // cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
    // cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
    // cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
    // cout << num1 << " / " << num2 << " = " << fNum1 / fNum2 << endl;
    // cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;

    // string line3;

    // line3 = "This is a s\tentence.";
    // cout << line3 << endl;
    // line3 = "This is a s-\tentence.";
    // cout << line3 << endl;
    // line3 = "This is a s--\tentence.";
    // cout << line3 << endl;
    // line3 = "This is a s---\tentence.";
    // cout << line3 << endl;
    // line3 = "This is a s----\tentence.";
    // cout << line3 << endl;

    // string firstName, lastName, fullName;

    // // cout << "Please enter your full name with a space: ";
    // // cin >> firstName >> lastName;

    // cout << "Please enter you first name: ";
    // // cin >> firstName;
    // getline(cin, firstName);

    // cout << "Please enter your last name: ";
    // // cin >> lastName;
    // getline(cin, lastName);

    // // Option 1
    // // fullName = firstName + " " + lastName;
    // // fullName = "Welcome " + firstName + " " + lastName;
    // // cout << "Welcome " << fullName << endl;

    // // Option 2
    // // cout << "Welcome " << firstName + " " + lastName << endl;

    // // Option 3
    // cout << "Welcome " + firstName + " " + lastName << endl;

    // int number1;
    // int number2;
    // int total;

    // cout << "Please enter a whole number: ";
    // cin >> number1;

    // cout << "The value of number1 is: " << number1 << endl;

    // cout << "Please enter a whole number: ";
    // cin >> number2;
    
    // cout << "The value of number2 is: " << number2 << endl;

    // total = number1 + number2;

    // cout << "The total of number1 + number2 is: " << total << endl;

    // number1 = 42;

    // cout << "The address of number1 is: " << &number1 << endl;
    // cout << "The value of number1 is: " << number1 << endl;

    // number1 = -9000;

    // cout << "The address of number1 is: " << &number1 << endl;
    // cout << "The value of number1 is: " << number1 << endl;

    // number2 = 24;

    // cout << "The value of number2 is: " << number2 << endl;

    // total = number1 + number2;

    // cout << "The sum of number1 and number2 is: " << total << endl;

    return 0;
}