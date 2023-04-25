/*
Name: Jeremy Bergen

Shape calculator
*/
#include <iostream>
#include "triangle.h"
#include "rectangle.h"

using namespace std;

int main(int argc, char *argv[]) {
    string name;
    float side1, side2, side3;
    float area, perim;

    string shape;

    promptName(name);
    greetPlayer(name);

    cout << "What shape do you want to calculate? ";
    cin >> shape;

    if (shape == "rectangle") {
        rectangle::promptSides(side1, side2);

        rectangle::calcArea(side1, side2, area);

        rectangle::calcPerim(side1, side2, perim);

        rectangle::printValues(area, perim, side1, side2);
    } else if (shape == "triangle") {
        triangle::promptSides(side1, side2, side3);

        triangle::calcArea(side1, side2, side3, area);

        triangle::calcPerim(side1, side2, side3, perim);

        triangle::printValues(area, perim, side1, side2, side3);
    }

    return 0;
}