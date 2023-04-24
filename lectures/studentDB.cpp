/*
Name: Jeremy Bergen

Student database
*/
#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <sstream>
#include <iomanip>

using namespace std;

struct Student {
    string fName;
    string lName;
    float gpa;
    string favClass;
};

void readData(ifstream&, vector<Student>&);
void printData(vector<Student>&);

int main(int argc, char *argv[]) {
    vector<Student> students;
    // ifstream fin("files/students.csv");
    ifstream fin;
    int colWidths[4];

    fin.open("files/students.csv");

    readData(fin, students);

    printData(students);

    fin.close();
    return 0;
}

void printData(vector<Student>& students) {
    cout << left << setw(19) << "First Name: " << setw(13) << "Last Name: " << setw(7) << "GPA: " << setw(18) << "Favorite Class: " << endl;
    for(auto it=students.begin(); it != students.end(); it++) {
        cout << left << setw(19) << it->fName << setw(13) << it->lName << setw(7) << it->gpa << setw(18) << it->favClass << endl;
    }
}

void readData(ifstream& fin, vector<Student>& students) {
    string currentLine;
    while(getline(fin, currentLine)) {
        Student newStudent;
        int counter = 0;
        stringstream ss(currentLine);
        string token;

        while(getline(ss, token, ',')) {
            switch(counter) {
                case 0:
                    newStudent.fName = token;
                    break;
                case 1:
                    newStudent.lName = token;
                    break;
                case 2:
                    newStudent.gpa = stof(token);
                    break;
                case 3:
                    newStudent.favClass = token;
                    break;
                default:
                    cout << "Should never get here..." << endl;
                    break;
            }
            counter++;
            // cout << "DEBUG: token: " << token << endl;
        }
        students.push_back(newStudent);
    }
    // for(auto it = students.begin(); it != students.end(); it++) {
    //     cout << it->gpa << endl;
    // }
}

// void readData(ifstream& fin, vector<Student>& students) {
//     string currentLine;
//     while(getline(fin, currentLine)) {
//         Student newStudent;
//         // cout << "DEBUG: currentLine: " << currentLine << endl;
//         size_t commaIdx;
//         int counter = 0;
//         for(size_t i = 0; i < currentLine.size(); i++) {
//             commaIdx = currentLine.find(',', i);
//             // cout << "DEBUG: commaIdx: " << commaIdx << endl;
//             if(commaIdx == string::npos) {
//                 // cout << "DEBUG: currentLine.substr(): " << currentLine.substr(i) << endl;
//                 newStudent.favClass = currentLine.substr(i);
//                 break;
//             } else {
//                 if(counter == 0) {
//                     newStudent.fName = currentLine.substr(i, commaIdx - i);
//                 } else if (counter == 1) {
//                     newStudent.lName = currentLine.substr(i, commaIdx - i);
//                 } else {
//                     newStudent.gpa = stof(currentLine.substr(i, commaIdx - i));
//                 }
//                 // cout << "DEBUG: currentLine.substr(): " << currentLine.substr(i, commaIdx - i) << endl;
//             }
//             counter++;
//             i = commaIdx;
//         }
//         students.push_back(newStudent);
//     }

//     // for(auto elem: students) {
//     //     cout << elem.fName << endl;
//     // }
// }