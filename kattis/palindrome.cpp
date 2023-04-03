/*
Name: Jeremy Bergen

Palindrome checker
*/
#include <iostream>
#include <string>

using namespace std;

int main(int argc, char *argv[]) {
    string inputString = "";
    string reverseString = "";
    string sanitizeString = "";

    cout << "Please enter a string to check palindromness:" << endl;
    getline(cin, inputString);

    for(size_t i = 0; i < inputString.length(); i++) {
        // if(inputString.at(i) != ' ' && inputString.at(i) != ',') {
        if((inputString.at(i) >= 65 && inputString.at(i) <= 90) || (inputString.at(i) >= 97 && inputString.at(i) <= 122)) {
            sanitizeString += tolower(inputString.at(i));
        }
    }

    for(auto it = sanitizeString.rbegin(); it != sanitizeString.rend(); it++) {
        reverseString += *it;
    }

    // cout << "DEBUG: inputString:\t" << sanitizeString << endl;
    // cout << "DEBUG: reverseString:\t" << reverseString << endl;

    if (sanitizeString == reverseString) {
        cout << "Your phrase is a palindrome" << endl;
    }

    return 0;
}