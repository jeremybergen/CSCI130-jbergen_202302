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
    int num1, num2, num3;

    cout << "Please enter three numbers separated by a space: ";
    cin >> num1 >> num2 >> num3;

    if ((num1 > 0 && num2 > 0) || num3 == 42) {
        cout << "num1 and num2 are positive or num3 is 42" << endl;
    }

    // if (num1 > 0 || num2 > 0) {
    //     cout << "Both numbers are positive" << endl;
    // } else if (num1 < 0 || num2 > 0) {
    //     cout << "num2 is positive and num1 is negative" << endl;
    // } else if (num2 < 0 || num1 > 0) {
    //     cout << "num1 is positive and num2 is negative" << endl;
    // } else {
    //     cout << "Both are negative" << endl;
    // }

    return 0;
}









void playGame() {
    cout << "Would you like to play global thermonuclear war?" << endl;
    cout << "The world ends..." << endl;
}



    // char num1;
    // // bool answer;

    // // num1 = 43;
    // // num2 = 42;

    // // cout << boolalpha << !(num1 > num2) << endl;
    // // cout << boolalpha << !(num1 == num2) << endl;

    
    // cout << "What would you like to do?" << endl;
    // cout << "A. print numbers" << endl;
    // cout << "B. get numbers" << endl;
    // cout << "C. play a game" << endl;
    // cout << "D. quit" << endl;
    // cout << "Please enter a letter: ";
    // cin >> num1;

    // char ch;
    // switch(num1) {
    //     case 'A':
    //         cout << "We will print out the numbers now" << endl;
    //         break;
    //     case 'B':
    //         cout << "Let's get some more numbers" << endl;
    //         break;
    //     case 67:
    //         cout << "Would you like to play a game?" << endl;
    //         cin >> ch;
    //         if (ch == 'y') {
    //             playGame();
    //         } else {
    //             cout << "I guess the world lives" << endl;
    //         }
    //         break;
    //     case 68:
    //     case 400:
    //     case 500:
    //         cout << "We are quitting each other" << endl;
    //         break;
    //     case 9001:
    //         cout << "His power is over 9000" << endl;
    //         break;
    //     default:
    //         cout << "You obviously couldn't follow the rules...rude..." << endl;
    //     // case 0:
    //     //     cout << "The number is even" << endl;
    //     //     break;
    //     // case 1:
    //     //     cout << "The number is odd" << endl;
    //     //     break;
    //     // default:
    //     //     cout << "We should never get here" << endl;
    // }

    // // if (num1 == 0) {
    // //     cout << num1 << " is zero" << endl;
    // // } else if (abs(num1)%2 == 1) {
    // //     cout << num1 << " is odd";
    // // } else {
    // //     cout << num1 << " is even";
    // // }   

    // // if (num1 != 0) {
    // //     if (num1 > 0) {
    // //         cout << " and " << num1 << " is positive" << endl;
    // //     } else {
    // //         cout << " and " << num1 << " is negative" << endl;
    // //     }
    // // }

    // // if (num1 > 0) {
    // //     cout << num1 << " is positive" << endl;
    // // } else if (num1 == 0) {
    // //     cout << num1 << " is zero" << endl;
    // // } else {
    // //     cout << num1 << " is negative" << endl;
    // // }

    // // if (num1 == 0) {
    // //     cout << num1 << " is zero" << endl;
    // // }
    // // else {
    // //     if (num1 > 0) {
    // //         cout << num1 << " is positive" << endl;
    // //     }
    // //     else {
    // //         cout << num1 << " is negative" << endl;
    // //     }
    // // }

    // // answer = (num1 >= num2);
    // // answer = (num1 < num2);
    // // if (num1 > num2) {
    // //     // cout << "Your statement is true" << endl;
    // //     // cout << "The numbers are NOT equal" << endl;
    // //     cout << "num1 is greater than num2" << endl;
    // // } else {
    // //     cout << "num1 is NOT greater than num2" << endl;
    // // }

    // // cout << "After if statement" << endl;
