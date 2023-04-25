#include "rectangle.h"
#include <string>
#include <iostream>

using namespace std;

void promptName(string& playerName) {
    cout << "Please enter your name: ";
    getline(cin, playerName);
}

void greetPlayer(string name) {
    cout << "Welcome " << name << " to our rectangle calculator" << endl;
}

namespace rectangle {
// template <class T1, class T2>
// void promptSides(T1& side1, T2& side2) {
void promptSides(float& side1, float& side2) {
    cout << "Please enter the two sides of your rectangle: ";
    cin >> side1 >> side2;
}

// template <class T1, class T2, class T3>
void calcArea(float& side1, float& side2, float& area) {
    area = side1 * side2;
}

// template <class T1, class T2, class T3>
void calcPerim(float& side1, float& side2, float& perimeter) {
    perimeter = (2 * side1) + (2 * side2);
}

// template <class T1, class T2, class T3, class T4>
void printValues(float area, float perimeter, float side1, float side2) {
    // printf("The rectangle with sides %d and %d\nhas an area of %d and a perimeter of %d\n", side1, side2, area, perimeter);

    cout << "The rectangle with sides " << side1 << " and " << side2 << endl;
    cout << "has an area of " << area << " and a perimeter of " << perimeter << endl;

}
}