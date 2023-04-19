/*
Name: Jeremy Bergen

File I/O
*/
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void readData(fstream&, string[], int&);
void writeData(fstream&, string[], int);

int main(int argc, char *argv[]) {
    // int num1, num2, num3, num4, num5;
    string nums[100];
    int numLines = 0;
    // ifstream fin;
    // ofstream fout;

    fstream fs;
    
    fs.open("files/fstest.txt", fstream::in | fstream::out | fstream::app);

    // fin.open("files/input.txt");

    //Windows way
    // fin.open("files\\input.txt");
    // fin.open("c:\\home\\jbergen\\projects\\CSCI130-jbergen\\lectures\\files\\input.txt");
    // absolute path on linux, normally don't use
    // fin.open("/home/jbergen/projects/CSCI130-jbergen/lectures/files/input.txt");
    
    // fout.open("files/output.txt");
    // fout.open("files\\output.txt");

    // absolute path on linux, normally don't use
    // fout.open("/home/jbergen/projects/CSCI130-jbergen/lectures/files/output.txt");

    // fin >> num1 >> num2 >> num3 >> num4 >> num5;

    // fout << "num1: " << num1 << endl;
    // fout << "num2: " << num2 << endl;
    // fout << "num3: " << num3 << endl;
    // fout << "num4: " << num4 << endl;
    // fout << "num5: " << num5 << endl;

    readData(fs, nums, numLines);
    cout << "We are at: " << fs.tellg() << endl;
    fs.seekg(0);
    cout << "We are at: " << fs.tellg() << endl;
    writeData(fs, nums, numLines);

    // fin.close();
    // fout.close();
    fs.close();
    return 0;
}

void writeData(fstream& fout, string nums[], int numLines) {
    for(int i = 0; i < numLines; i++) {
        fout << "nums[" << i << "]: " << nums[i] << endl;
    }
}

void readData(fstream& fin, string nums[], int& numLines) {
    // while(getline(fin, nums[numLines])) {
    while(!fin.eof()) {
        getline(fin, nums[numLines]);
        // if(fin >> nums[numLines])
        numLines++;
    }
}