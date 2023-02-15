/*
Name: Jeremy Bergen

Functions pass-by-value vs pass-by-reference
*/
#include <iostream>

using namespace std;

void addToNum(int&);
void promptSides(int&, int&);

int main() {
    int side1, side2;

    promptSides(side1, side2);

    cout << "You entered: " << side1 << " " << side2 << endl;
    // int num1;
    // cout << "The memory address of num1 in main is: " << &num1 << endl;

    // num1 = 42;
    // addToNum(num1);

    // cout << "num1: " << num1 << endl;
    return 0;
}

void promptSides(int& side1, int & side2) {
    cout << "Please enter the two sides of a rectangle: ";
    cin >> side1 >> side2;
}

void addToNum(int &num1) {
    cout << "The memory address of num1 in addToNum is: " << &num1 << endl;
    num1 = num1 + 10;
}