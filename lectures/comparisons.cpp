/*
Name: Jeremy Bergen

Comparisons
*/
#include <iostream>
#include <string>
#include <cmath>

using namespace std;

void playGame();

int main()
{
    int num1;
    // bool answer;

    // num1 = 43;
    // num2 = 42;

    // cout << boolalpha << !(num1 > num2) << endl;
    // cout << boolalpha << !(num1 == num2) << endl;

    
    cout << "What would you like to do?" << endl;
    cout << "1. print numbers" << endl;
    cout << "2. get numbers" << endl;
    cout << "3. play a game" << endl;
    cout << "4. quit" << endl;
    cout << "Please enter a number: ";
    cin >> num1;

    char ch;
    switch(num1) {
        case 1:
            cout << "We will print out the numbers now" << endl;
            break;
        case 2:
            cout << "Let's get some more numbers" << endl;
            break;
        case 3:
            cout << "Would you like to play a game?" << endl;
            cin >> ch;
            if (ch == 'y') {
                playGame();
            } else {
                cout << "I guess the world lives" << endl;
            }
            break;
        case 4:
        case 400:
        case 500:
            cout << "We are quitting each other" << endl;
            break;
        case 9001:
            cout << "His power is over 9000" << endl;
            break;
        default:
            cout << "You obviously couldn't follow the rules...rude..." << endl;
        // case 0:
        //     cout << "The number is even" << endl;
        //     break;
        // case 1:
        //     cout << "The number is odd" << endl;
        //     break;
        // default:
        //     cout << "We should never get here" << endl;
    }

    // if (num1 == 0) {
    //     cout << num1 << " is zero" << endl;
    // } else if (abs(num1)%2 == 1) {
    //     cout << num1 << " is odd";
    // } else {
    //     cout << num1 << " is even";
    // }   

    // if (num1 != 0) {
    //     if (num1 > 0) {
    //         cout << " and " << num1 << " is positive" << endl;
    //     } else {
    //         cout << " and " << num1 << " is negative" << endl;
    //     }
    // }

    // if (num1 > 0) {
    //     cout << num1 << " is positive" << endl;
    // } else if (num1 == 0) {
    //     cout << num1 << " is zero" << endl;
    // } else {
    //     cout << num1 << " is negative" << endl;
    // }

    // if (num1 == 0) {
    //     cout << num1 << " is zero" << endl;
    // }
    // else {
    //     if (num1 > 0) {
    //         cout << num1 << " is positive" << endl;
    //     }
    //     else {
    //         cout << num1 << " is negative" << endl;
    //     }
    // }

    // answer = (num1 >= num2);
    // answer = (num1 < num2);
    // if (num1 > num2) {
    //     // cout << "Your statement is true" << endl;
    //     // cout << "The numbers are NOT equal" << endl;
    //     cout << "num1 is greater than num2" << endl;
    // } else {
    //     cout << "num1 is NOT greater than num2" << endl;
    // }

    // cout << "After if statement" << endl;

    return 0;
}

void playGame() {
    cout << "Would you like to play global thermonuclear war?" << endl;
    cout << "The world ends..." << endl;
}