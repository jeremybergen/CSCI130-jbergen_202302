/*
Name: Jeremy Bergen

Comparisons
*/
#include <iostream>
#include <string>

using namespace std;

int main() {
    int num1, num2;
    bool answer;

    // num1 = 43;
    // num2 = 42;

    // cout << boolalpha << !(num1 > num2) << endl;
    // cout << boolalpha << !(num1 == num2) << endl;

    cout << "Please enter two numbers separated by a space: ";
    cin >> num1 >> num2;

    answer = (num1 >= num2);
    //answer = (num1 < num2);
    if (!(answer)) {
        // cout << "Your statement is true" << endl;
        // cout << "The numbers are NOT equal" << endl;
        cout << "num1 is greater than num2" << endl;
    }

    cout << "After if statement" << endl;

    return 0;
}