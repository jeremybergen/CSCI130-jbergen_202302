/*
Name: Jeremy Bergen

We are spinnin' round and round
*/
#include <iostream>

using namespace std;

int main() {
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
    for (int i = 0 ; i < 10; i++) {
        if (i%2 == 0) {
            continue;
        }
        cout << i << ": Hello World" << endl;
    }

    cout << "After for loop" << endl;
    // cout << "i is now: " << i << endl;

    return 0;
}