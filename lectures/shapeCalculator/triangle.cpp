#include "triangle.h"
#include <iostream>
#include <cmath>

namespace triangle {
void promptSides(float& s1, float& s2, float& s3) {
    std::cout << "Please enter the 3 sides of your triangle: ";
    std::cin >> s1 >> s2 >> s3;
}

void calcArea(float& side1, float& side2, float& side3, float& area) {
    float perim;
    float sperim;
    calcPerim(side1, side2, side3, perim);
    sperim = perim/2;

    area = sqrt(sperim * (sperim - side1) * (sperim - side2) * (sperim * side3));

    // area = side1 * side2;
}

// template <class T1, class T2, class T3>
void calcPerim(float& side1, float& side2, float& side3, float& perimeter) {
    perimeter = side1 + side2 + side3;
}

// template <class T1, class T2, class T3, class T4>
void printValues(float area, float perimeter, float side1, float side2, float side3) {
    // printf("The rectangle with sides %d and %d\nhas an area of %d and a perimeter of %d\n", side1, side2, area, perimeter);

    std::cout << "The triangle with sides " << side1 << " and " << side2 << " and " << side3 << std::endl;
    std::cout << "has an area of " << area << " and a perimeter of " << perimeter << std::endl;

}
}