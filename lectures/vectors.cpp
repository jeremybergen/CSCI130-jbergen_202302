/*
Name: Jeremy Bergen

Vectors
*/
#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(int argc, char *argv[]) {
    vector<int> myNums;
    vector<float> myFloats;
    vector<string> myStrings;


    myNums.push_back(42);
    myNums.push_back(42);
    myNums.push_back(42);
    myNums.push_back(42);
    myNums.push_back(42);
    cout << "myNums.capacity(): " << myNums.capacity() << endl;
    cout << "myNums.size(): " << myNums.size() << endl;

    myNums.erase(myNums.at(2));

    return 0;
}