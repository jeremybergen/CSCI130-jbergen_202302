/*
Name: Jeremy Bergen

Function testing
*/
#include <iostream>
#include <cassert>

using namespace std;

int addNums(const int&, const int&);
void tests();

int main() {
    tests();
    int num1, num2;

    cout << "Please enter two numbers separated by a space: ";
    cin >> num1 >> num2;

    cout << num1 << " + " << num2 << " = " << addNums(num1, num2) << endl;
    return 0;
}

void tests() {
    int answer = addNums(10, 12);
    int expected = 22;
    assert(answer == expected); // test case 1
    assert(addNums(-5, 10) == 5); // test case 2

    int answer = addNums(42, 15);
    int expected = 57;
    assert(answer == expected); // test case 1
    assert(addNums(-9000, 9000) == 0); // test case 2

    // assert(addNums(42, 15) == 62);
    // assert(addNums(10, 20) == 35);
    cout << "All test cases passed" << endl;
}

int addNums(const int &num1, const int &num2) {
    return num1 + num2;
}