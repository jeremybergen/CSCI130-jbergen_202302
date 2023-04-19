/*
Name: Jeremy Bergen

Student database
*/
#include <iostream>
#include <string>
#include <fstream>
#include <vector>

using namespace std;

struct Student {
    string fName;
    string lName;
    float gpa;
    string favClass;
};

void readData(ifstream&, vector<Student>&);

int main(int argc, char *argv[]) {
    vector<Student> students;
    ifstream fin;

    fin.open("files/students.csv");

    readData(fin, students);

    fin.close();
    return 0;
}

void readData(ifstream& fin, vector<Student>& students) {
    string currentLine;
    while(getline(fin, currentLine)) {
        cout << "DEBUG: currentLine: " << currentLine << endl;
        int commaIdx;
        for(int i = 0; i < currentLine.size(); i++) {
            currentLine.find(',');
        }
    }
}