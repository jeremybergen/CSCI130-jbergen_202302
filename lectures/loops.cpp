/*
Name: Jeremy Bergen

We are spinnin' round and round
*/
#include <iostream>

using namespace std;

bool program();

int main(int argc, char *argv[]) {
    bool keepRunning = true;
    while (keepRunning) {
        if (!program()) {// call program
            keepRunning = false; // break loop if program returned false
        } else {
            cin.ignore(100, '\n');
            cout << "Enter to continue...";
            cin.get();
        }
    }
    cout << "Quitting program" << endl;
    return 0;
}

bool program() {
    int num1;
    char runAgain;

    num1 = 42;
    cout << num1 + 10 << endl;
    cout << "Do you want to run again? ";
    cin >> runAgain;

    if (runAgain == 'y' || runAgain == 'Y') {
        return true;
    }

    return false;
}








    // char inputChar = 'y';

    // do {
    //     cout << "Press y to quit: ";
    //     cin >> inputChar;
    //     if (inputChar != 'y' && inputChar != 'Y') {
    //         cout << "You didn't follow the rules so try again..." << endl;
    //     }
    // } while(inputChar != 'y' && inputChar != 'Y');
    // while(inputChar != 'y' && inputChar != 'Y') {
    //     cout << "Press y to quit: ";
    //     cin >> inputChar;
    //     if (inputChar != 'y' && inputChar != 'Y') {
    //         cout << "You didn't follow the rules so try again..." << endl;
    //     }
    // }
    // int counter = 0;
    // while(counter != 50) {
    //     cout << counter << ": Hello World" << endl;
    //     counter++;
    // }

    // for (int i = 0; i < 10; i++) {
    //     cout << i << ": Hello World" << endl;
    // }
    // int insideFor;

    // insideFor = 0;
    // These are the same:
    // i++;
    // i = i + 1;
    // i += 1;
    // ++i;
    // for (int i = 0; i < 10; i++) {
    // for (int i = 0, j = 5; i < 10 || j > 0; i++, j--) {
    // for (int i = 0; i < 10; i++) {
    //     int insideFirst = 0;
    //     for (int j = 0; j < 10; j++) {
    //         int insideSecond = 0;
    //         // cout << "i: " << i << " j: " << j << endl;
    //         cout << i << j << endl;
    //         cout << insideFirst << " " << insideSecond << endl;
    //         cout << "--------------" << endl;
    //         insideFirst++;
    //         insideSecond++;
    //     }
    //     // insideFor = 0;
    //     // cout << "i: " << i << " j: " << j << endl;
    //     // cout << "insideFor: " << insideFor << endl;
    //     // insideFor++;
    // }
    // for (int i = 0; i < 10; i++) {
    //     if (i%2 == 0) {
    //         continue;
    //     }
    //     cout << i << ": Hello World" << endl;
    // }

    // cout << "After for loop" << endl;
    // cout << "i is now: " << i << endl;
