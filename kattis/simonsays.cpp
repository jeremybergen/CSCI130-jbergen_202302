/*
Name: Jeremy Bergen

Kattis simonsays
*/
#include <iostream>
#include <string>
#include <cassert>

using namespace std;

void solve();
string answer(string);
void tests();

int main(int argc, char *argv[]) {
    if(argc >= 2 && (string)argv[1] == "test") {
        tests();
        return 0;
    }
    
    solve();
    return 0;
}

void tests() {
    assert(answer("Simon says hi.") == " hi.");
    assert(answer("Goodbye") == "");
    cout << "All test cases passed" << endl;
}

string answer(string inputLine) {
    size_t foundSimon;
    foundSimon = inputLine.find("Simon says");
    if(foundSimon != string::npos) {
        // cout << inputLine.substr(10) << endl;
        return inputLine.substr(10);
    }
    return "";
}

void solve() {
    int numLines;

    // our input: 1\n
    cin >> numLines;
    // cin.get();
    cin.ignore(1000, '\n');

    // cout << "DEBUG: numLines: " << numLines << endl;

    string inputLines[numLines];

    for (int i = 0; i < numLines; i++) {
        // WRONG!!!: cin >> inputLines[i];
        getline(cin, inputLines[i]);
    }

    // for (int i = 0; i < numLines; i++) {
    //     cout << "DEBUG: inputLines[" << i << "]: " << inputLines[i] << endl;
    // }
    for(int i = 0; i < numLines; i++) {
        string result = answer(inputLines[i]);
        if (result != "") {
            cout << result << endl;
        }
        // cout << answer(inputLines[i]) << endl;
    }
}