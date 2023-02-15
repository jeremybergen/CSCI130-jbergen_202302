/*
Name: Jeremy Bergen

Functions and more functions
*/
#include <iostream>
#include <string>
#include <cmath>

using namespace std;

void sayHello();
void sayGoodbye();

template <class T1, class T2>
T1 addNums(T1, T2);

int main() {
    sayHello();
    // int n1;
    // float n2;

    // n1 = 42.5;
    // n2 = 15.2;

    // cout << n1 << " + " << n2 << " = " << addNums<int>(n1, n2) << endl;

    return 0;
}

template <class T1, class T2>
T1 addNums(T1 num1, T2 num2) {
    return num1 + num2;
}

void sayHello() {
    cout << "Hello World" << endl;
    sayGoodbye();
}

void sayGoodbye() {
    cout << "Goodbye World" << endl;
    sayHello();
}

// float addNums(float num1, float num2) {
//     return num1 + num2;
// }

// float addNums(float num1, int num2) {
//     return num1 + num2;
// }

// template <class T1>
// T1 addNums(T1 num1, T1 num2) {
//     T1 answer;
//     answer = num1 + num2;
//     return answer;
// }

// void addNums(int n1, int n2) {
//     float answer;
//     answer = n1 + n2 + 5.5;
//     cout << answer << endl;
// }

// void greetUser(string somethingElse) {
//     cout << "Welcome " << somethingElse << " to my program." << endl;
// }

// string promptName() {
//     string firstName;
//     cout << "Please enter your first name: ";
//     cin >> firstName;
//     greetUser(firstName);
//     return firstName;
// }

// void showNum(int num1) {
//     cout << "showNum num1: " << &num1 << endl;
// }
// int numbers(int n1, int number2, float thirdNumber) {
//     int result;
//     result = abs(n1) * number2 - sqrt(thirdNumber);
//     return result;
// }



    // cout << "Your answer is: " << numbers(-42, 15, 5.5) << endl;
    // string firstName;

    // firstName = promptName();

    // greetUser("Bob");

    // int num1;
    // num1 = 42;

    // showNum(num1);
    // cout << "in Main num1: " << &num1 << endl;
    // string userName;
    // userName = promptName();
    // greetUser(userName);
    // greetUser("Bob");
    // greetUser("This is a string");
    // int bob, alice;
    // float result;

    // cout << "Please enter two numbers separated by a space: ";
    // cin >> bob >> alice;

    // addNums(bob, alice);
    // // cout << "The answer is: " << result << endl;