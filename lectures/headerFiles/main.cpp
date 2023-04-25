/*
Name: Jeremy Bergen

Header Files
*/
#include <iostream>
#include "myFunctions.h"

using namespace std;

int main(int argc, char *argv[]) {
    int num1, num2;

    cout << "Please enter 2 numbers separated by a space: ";
    cin >> num1 >> num2;

    cout << num1 << " + " << num2 << " = " << addNums(num1, num2) << endl;
    cout << num1 << " - " << num2 << " = " << subNums(num1, num2) << endl;
    return 0;
}