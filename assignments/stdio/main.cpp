/*
Name: Jeremy Bergen

Homework 1
*/
#include <iostream>
#include <string>

using namespace std;

int main() {
    cout << "Stage 0:" << endl;


    string top = "|------------|\n";
    string side = "|";
    string head = "O";

    cout << top << head << side << side << side << side;

    string line0 = "|-----------|\n";
    string line1 = "|          \\|\n";
    string line2 = "|\n";
    cout << line0 << line1 << line2;
    cout << "|" << endl;
    cout << "|" << endl;
    cout << "|__________________" << endl;

    cout << "Stage 1:" << endl;
    string stage1 = "|-----------|\n|          \\|\n|           O\n";
    string stage2 = "|-----------|\n|          \\|\n|          \\O\n";

    cout << stage1;

    return 0;
}