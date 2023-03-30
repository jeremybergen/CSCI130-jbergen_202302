/*
Name: Jeremy Bergen

Kattis simonsays
*/
#include <iostream>
#include <string>

using namespace std;

int main(int argc, char *argv[]) {
    int numLines;

    cin >> numLines;

    string inputLines[numLines];

    for (int i = 0; i < numLines; i++) {
        cin >> inputLines[i];
    }

    size_t foundSimon;
    for(int i = 0; i < numLines; i++) {
        foundSimon = inputLines[i].find("Simon says");
        if()
    }
    return 0;
}