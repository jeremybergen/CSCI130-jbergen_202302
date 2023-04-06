/*
Name: Jeremy Bergen

Vectors
*/
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

void numberOfNumbers(int&);

template <class T1>
void readNumbers(vector<T1>&, int);

template <typename T1>
void printVector(vector<T1>&);

int main(int argc, char *argv[]) {
    int counter = 5;
    vector<float> myNums;

    numberOfNumbers(counter);
    readNumbers<float>(myNums, counter);

    printVector<float>(myNums);

    sort(myNums.begin(), myNums.end());

    printVector<float>(myNums);

    return 0;
}

template <typename T1>
void printVector(vector<T1>& myVector) {
    // for(size_t i = 0; i < myVector.size(); i++) {
    //     cout << myVector.at(i) << " ";
    // }
    for(auto it = myVector.begin(); it != myVector.end(); it++) {
        cout << *it << " ";
    }
    // for(auto elem: myVector) {
    //     cout << elem << " ";
    // }
    cout << endl;
}

void numberOfNumbers(int& nums) {
    cout << "How many numbers do you want to read in? ";
    cin >> nums;
}

template <class T1>
void readNumbers(vector<T1>& myNumbers, int count) {
    T1 inputNumber;
    for(int i = 0; i < count; i++) {
        cout << "Please enter something: ";
        cin >> inputNumber;

        myNumbers.push_back(inputNumber);
    }
}








    // vector<long> myNums;
    // vector<long> myNums2;
    // vector<float> myFloats;
    // vector<string> myStrings;

    // vector< vector<int> > multiVector;

    // multiVector.push_back({42});
    // multiVector.push_back({42, 15, 23, 9000, -15});

    // // cout << "multiVector.at(0): " << multiVector[1][3] << endl;
    // // cout << "multiVector.at(0): " << multiVector.at(1).at(3) << endl;
    // for(size_t i = 0; i < multiVector.size(); i++) {
    //     for(auto it = multiVector[i].begin(); it != multiVector[i].end(); it++) {
    //         if (*it == 42) {
    //             cout << "42 is in the vector" << endl;
    //         }
    //     }
    // }

    // multiArray[0][0]

    // myNums.push_back(42);
    // myNums.push_back(15);
    // myNums.push_back(23);
    // myNums.push_back(9000);
    // myNums.push_back(-92);
    // myNums.push_back(42);
    // myNums.push_back(15);
    // myNums.push_back(23);
    // myNums.push_back(9000);
    // myNums.push_back(-92);

    // myNums.back();
    // myNums.at(myNums.size()-1);

    // myNums.front();
    // myNums.at(0);

    // cout << "myNums.size(): " << myNums.size() << endl;
    // myNums.clear();
    // cout << "myNums.size(): " << myNums.size() << endl;
    // cout << "myNums.empty(): " << myNums.empty() << endl;

    // cout << "myNums.max_size(): " << myNums.max_size() << endl;

    // myNums2 = myNums;

    // cout << "myNums.size(): " << myNums.size() << endl;
    // cout << "myNums.capacity(): " << myNums.capacity() << endl;
    
    // for(size_t i = 0; i < myNums.size(); i++) {
    //     cout << myNums.at(i) << " ";
    // }
    // cout << endl;

    // myNums.erase(myNums.begin()+3);

    // for(auto it = myNums.begin(); it != myNums.end(); it++) {
    //     cout << *it << " ";
    // }
    // cout << endl;

    // myNums.erase(myNums.end()-1);

    // for(int bob : myNums) {
    //     cout << bob << " ";
    // }
    // cout << endl;

    // for(auto it = myNums.rbegin(); it != myNums.rend(); it++) {
    //     cout << *it << " ";
    // }
    // cout << endl;

    // string firstName = "Jeremy";

    // for(auto it = firstName.begin(); it != firstName.end(); it++) {
    //     cout << "*it: " << *it << endl;
    // }


