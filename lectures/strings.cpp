/*
Name: Jeremy

String (theory...not really)
*/
#include <iostream>
#include <string>

using namespace std;

int main(int argc, char *argv[]) {
    string phrase = "how much wood could a woodchuck chuck if a woodchuck could chuck wood";
    string searchStr = "";
    // cout << "The first instance of wood is: " << phrase.find("wood") << endl;
    // cout << "Our substring is: " << phrase.substr(phrase.find("wood"), 4) << endl;

    cout << "What do you want to search for? ";
    getline(cin, searchStr);

    for(size_t i = 0; i < phrase.length(); i++) {
        i = phrase.find(searchStr, i);
        if (i != string::npos) {
            cout << "Our substring is: " << phrase.substr(i, searchStr.length()) << endl;
        } else {
            break;
        }
    }

    return 0;
}




    // string firstName;
    // string lastName;
    // string fullName = "";
    // string searchStr;

    // cout << "Please enter your first name: ";
    // getline(cin, firstName);

    // cout << "Please enter your last name: ";
    // getline(cin, lastName);

    // // fullName = firstName + " " + lastName;
    // fullName.append(firstName);
    // fullName.append(" ");
    // fullName.append(lastName);

    // // char someWord[13] = {'J','e','r','e','m','y','\0','B','e','r','g','e','n'};
    // // cout << someWord << endl;

    // cout << "Welcome " << fullName << endl;
    // // fullName[6] = '\u0000';
    // // cout << "Welcome " << fullName << endl;

    // cout << "The length of our string is: " << fullName.length() << endl;

    // // for(size_t i = 0; i < fullName.length()+1; i++) {
    // //     cout << "fullName[" << i << "]: " << fullName[i] << endl;
    // //     cout << "fullName.at(" << i << "): " << fullName.at(i) << endl;
    // //     // fullName[i] = tolower(fullName[i]);
    // // }

    // // cout << "Our string uppercase is: " << fullName << endl;

    // fullName.append(" is Awesome");
    // // fullName = fullName + " is Awesome";
    // cout << fullName << endl;

    // // fullName.at()
    // // cout << "fullName.begin(): " << *fullName.begin() << endl;
    // // cout << "fullName.begin(): " << *(fullName.begin()+1) << endl;
    // // for(auto i = fullName.begin(); i != fullName.end(); i++) {
    // //     cout << *i << endl;
    // // }
    // // for(auto ch: fullName) {
    // //     cout << ch << endl;
    // // }
    // // cout << "We found the character at: " << fullName.find('e', 0) << endl;
    // // cout << "We found the character at: " << fullName.find('e', 2) << endl;
    // // cout << "We found the character at: " << fullName.find('e', 4) << endl;
    // // cout << "We found the character at: " << fullName.find('e', 9) << endl;

    // // size_t foundIndex = 0;
    // cout << "What do you want to search for? ";
    // getline(cin, searchStr);

    // for(size_t i = 0; i < fullName.length(); i++) {
    //     i = fullName.find(searchStr, i);
    //     if (i != string::npos) {
    //         cout << "We found the string at: " << i << endl;
    //     } else {
    //         break;
    //     }
    // }