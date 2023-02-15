/*
Name: Jeremy Bergen

Rectangle Calculator

step1: prompt for name
step2: greet name
step3: Prompt sides of rectangle
step4: calc area
step5: calc perimeter
step6: print out values
*/
#include <iostream>
#include <string>
#include <cstdio>
#include <cstdlib>
#include <cmath>

using namespace std;

void promptName(string&);
void greetPlayer(string);
void promptSides(int&, int&);
void calcArea(int&, int&, int&);
void calcPerim(int&, int&, int&);
void printValues(int, int, int, int);

int main() {
    string personName;
    int s1, s2;
    int rectangleArea;
    int rectanglePerim;
    //prompt for name
    promptName(personName);

    //greet name
    greetPlayer(personName);

    //Prompt sides of rectangle
    // s1 = promptSides();
    // s2 = promptSides();
    promptSides(s1, s2);

    // cout << "DEBUG: s1: " << s1 << endl;
    // cout << "DEBUG: s2: " << s2 << endl;

    //calc area
    calcArea(s1, s2, rectangleArea);

    //calc perimeter
    calcPerim(s1, s2, rectanglePerim);

    // cout << "DEBUG: area: " << rectangleArea << endl;
    // cout << "DEBUG: perim: " << rectanglePerim << endl;

    printValues(rectangleArea, rectanglePerim, s1, s2);

    return 0;
}

void promptName(string& playerName) {
    cout << "Please enter your name: ";
    getline(cin, playerName);
}

void greetPlayer(string name) {
    cout << "Welcome " << name << " to our rectangle calculator" << endl;
}

void promptSides(int& side1, int& side2) {
    cout << "Please enter the two sides of your rectangle: ";
    cin >> side1 >> side2;
}

void calcArea(int& side1, int& side2, int& area) {
    area = side1 * side2;
}

void calcPerim(int& side1, int& side2, int& perimeter) {
    perimeter = (2 * side1) + (2 * side2);
}

void printValues(int area, int perimeter, int side1, int side2) {
    printf("The rectangle with sides %d and %d\nhas an area of %d and a perimeter of %d\n", side1, side2, area, perimeter);
    /*
    cout << "The rectangle with sides " << side1 << " and " << side2 << endl;
    cout << "has an area of " << area << " and a perimeter of " << perimeter << endl;
    */
}

// string promptName() {
//     string playerName;
//     cout << "Please enter your name: ";
//     getline(cin, playerName);
//     return playerName;
// }

// void greetPlayer(string name) {
//     cout << "Welcome " << name << " to our rectangle calculator" << endl;
// }

// int promptSides() {
//     int side1;
//     cout << "Please enter the a side of your rectangle: ";
//     cin >> side1;
//     return side1;
// }



// int calcPerim(int side1, int side2) {
//     int perimeter;
//     perimeter = (2 * side1) + (2 * side2);
//     return perimeter;
// }

// void printValues(int area, int perimeter, int side1, int side2) {
//     printf("The rectangle with sides %d and %d\nhas an area of %d and a perimeter of %d\n", side1, side2, area, perimeter);
//     /*
//     cout << "The rectangle with sides " << side1 << " and " << side2 << endl;
//     cout << "has an area of " << area << " and a perimeter of " << perimeter << endl;
//     */
// }

// int calcArea(int side1, int side2) {
//     cout << "Inside int calcArea" << endl;
//     int area;
//     area = side1 * side2;
//     return area;
// }

// float calcArea(float side1, float side2) {
//     cout << "Inside float calcArea" << endl;
//     float area;
//     area = side1 * side2;
//     return area;
// }

// float calcArea(string side1, string side2) {
//     cout << "Inside string calcArea" << endl;
//     float area;
//     area = atof(side1.c_str()) * atof(side2.c_str());
//     return area;
// }