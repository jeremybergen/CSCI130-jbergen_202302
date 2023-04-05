/*
Name: Jeremy Bergen

Palindrome checker
*/
#include <iostream>
#include <string>

using namespace std;

void promptString(string&);
void sanitizeString(string&, string);
bool checkPalindrome(string);

int main(int argc, char *argv[]) {
    string inputString = "";
    // string reverseString = "";
    string sanitizedString = "";
    bool isPalindrome = true;

    promptString(inputString);

    sanitizeString(sanitizedString, inputString);

    // for(auto it = sanitizeString.rbegin(); it != sanitizeString.rend(); it++) {
    //     reverseString += *it;
    // }

    isPalindrome = checkPalindrome(sanitizedString);

    // cout << "DEBUG: inputString:\t" << sanitizeString << endl;
    // cout << "DEBUG: reverseString:\t" << reverseString << endl;

    // if (sanitizeString == reverseString) {
    if(isPalindrome) {
        cout << "Your phrase is a palindrome" << endl;
    } else {
        cout << "Your phrase is NOT a palindrome!" << endl;
    }

    return 0;
}

bool checkPalindrome(string sanitizedString) {
    size_t sanStrLength = sanitizedString.length()-1;
    for(size_t i = 0; i < sanitizedString.length()/2; i++) {
        // cout << "i: " << i << endl;
        if(sanitizedString.at(i) != sanitizedString.at(sanStrLength - i)) {
            // isPalindrome = false;
            return false;
            // break;
        }
        // sanStrLength--;
    }

    return true;
}

void sanitizeString(string &sanitizedString, string inputString) {
    for(size_t i = 0; i < inputString.length(); i++) {
        // if(inputString.at(i) != ' ' && inputString.at(i) != ',') {
        if((inputString.at(i) >= 'A' && inputString.at(i) <= 'Z') || (inputString.at(i) >= 97 && inputString.at(i) <= 122)) {
            sanitizedString += tolower(inputString.at(i));
        }
    }
}

void promptString(string &inputString) {
    cout << "Please enter a string to check palindromness:" << endl;
    getline(cin, inputString);
}