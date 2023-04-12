/*
Name: Jeremy Bergen

Structures
*/
#include <iostream>
#include <string>
#include <cmath>
#include <vector>

using namespace std;

struct Classes {
    string className;
    string professor;
};

struct Student {
    string firstName;
    string lastName;
    Classes myClass;
};

int main(int argc, char *argv[]) {
    Student student1;

    student1.firstName = "Jeremy";
    student1.lastName = "Bergen";
    student1.myClass.className = "CSCI130";
    student1.myClass.professor = "Bob";

    cout << "The student is " << student1.firstName << " " << student1.lastName
         << " and is in class: " << student1.myClass.className << " with professor: "
         <<student1.myClass.professor << endl;

    return 0;
}











// template <class T1, class T2>
// struct Rectangle {
//     T1 side1;
//     T1 side2;
//     T2 area;
//     T2 perimeter;
// };

// // template <class T1, class T2>
// // void promptSides(Rectangle<T1, T2>&);

// // template <class T1, class T2>
// // void calcArea(Rectangle<T1, T2>&);

// // template <class T1, class T2>
// // void calcPerimeter(Rectangle<T1, T2>&);

// // template <class T1, class T2>
// // void printValues(Rectangle<T1, T2>&);

// int main(int argc, char *argv[]) {
//     // Rectangle<float, int> rect1 = {0, 0, (int)42.5, (int)12.3};
//     // Rectangle<float, int> *rect1 = new Rectangle<float, int>({42.5, 12.3});

//     // // promptSides<float, int>(*rect1);
//     // calcArea<float, int>(*rect1);
//     // calcPerimeter<float, int>(*rect1);
//     // printValues<float, int>(*rect1);

//     // delete rect1;
//     // Rectangle *rect1 = new Rectangle();

//     // rect1->side1 = 42;
//     // rect1->side2 = 15;
//     // calcArea(*rect1);
//     // calcPerimeter(*rect1);
//     // printValues(*rect1);

//     // delete rect1;
//     // Rectangle rect1;
//     // Rectangle *ptr1;
//     // Rectangle *ptr2 = nullptr;

//     // ptr1 = &rect1;

//     // // promptSides(rect1);
//     // promptSides(*ptr1);
//     // calcArea(*ptr1);
//     // calcPerimeter(*ptr1);
//     // printValues(*ptr1);
//     // rect1.side1 = 42;
//     // // (*ptr1).side2 = 15;
//     // ptr1->side2 = 15;

//     // cout << "rect1.side1: " << rect1.side1 << endl;
//     // cout << "rect1.side2: " << rect1.side2 << endl;

//     // // Rectangle rectangles[5];
//     // vector<Rectangle> rectangles;

//     // Rectangle rect1;
//     // rect1.side1 = 42;
//     // rect1.side2 = 42;
//     // // cout << "&rect1: " << &rect1 << endl;
//     // cout << "Before for: " << endl;
//     // for(int i = 0; i < 5; i++) {
        
//     //     promptSides(rect1);
//     //     calcArea(rect1);
//     //     calcPerimeter(rect1);
//     //     // promptSides(rectangles.at(i));
//     //     // calcArea(rectangles.at(i));
//     //     // calcPerimeter(rectangles.at(i));

//     //     rectangles.push_back(rect1);
//     // }

//     // cout << "DEBUG: rect1.side1: " << rect1.side1 << endl;
//     // cout << "DEBUG: rect1.side2: " << rect1.side2 << endl;

//     // for(int i = 0; i < 5; i++) {
//     //     cout << "&rectangles.at(" << i << "): " << &rectangles.at(i) << endl;
//     // }

//     // cout << "Our calculated rectangles: " << endl;
//     // for(int i = 0; i < 5; i++) {
//     //     printValues(rectangles.at(i));
//     // }
//     // Rectangle rect1;
//     // Rectangle rect2;

//     // promptSides(rect1);
//     // calcArea(rect1);
//     // calcPerimeter(rect1);
//     // printValues(rect1);

//     // promptSides(rect2);
//     // calcArea(rect2);
//     // calcPerimeter(rect2);
//     // printValues(rect2);
//     return 0;
// }

// template <class T1, class T2>
// void promptSides(Rectangle<T1, T2>& rect) {
//     cout << "Please enter side 1: ";
//     cin >> rect.side1;

//     cout << "Please enter side 2: ";
//     cin >> rect.side2;

// }

// template <class T1, class T2>
// void calcArea(Rectangle<T1, T2>& rect) {
//     rect.area = rect.side1 * rect.side2;

// }

// template <class T1, class T2>
// void calcPerimeter(Rectangle<T1, T2>& rect) {
//     rect.perimeter = (2 * rect.side1) + (2 * rect.side2);

// }

// template <class T1, class T2>
// void printValues(Rectangle<T1, T2>& rect) {
//     cout << "Our rectangle with sides " << rect.side1 << " and " << rect.side2
//          << " has an area of " << rect.area
//          << " and a perimeter of " << rect.perimeter << endl;

// }




// struct Point {
//     int x;
//     int y;
//     int z;
//     int a;
//     int asdf;
    
//     float num1;
    
//     string firstName;
//     char middle;
//     // some amount of padding
// };


    // Point point1;
    // Point point2;

    // cout << "sizeof(point1): " << sizeof(point1) << endl;
    // cout << "sizeof(point2): " << sizeof(point2) << endl;
    // cout << "&point1: " << &point1 << endl;
    // cout << "&point1.x: " << &point1.x << endl;
    // cout << "&point1.y: " << &point1.y << endl;
    // cout << "&point1.z: " << &point1.z << endl;
    // cout << "&point1.a: " << &point1.a << endl << endl;

    // cout << "&point2: " << &point2 << endl;
    // cout << "&point2.x: " << &point2.x << endl;
    // cout << "&point2.y: " << &point2.y << endl;
    // cout << "&point2.z: " << &point2.z << endl;
    // cout << "&point2.a: " << &point2.a << endl;
    // Point point1;
    // Point point2;
    // double distance;

    // point1.x = 0;
    // point1.y = 0;
    // point1.firstName = "Jeremy";
    // point1.middleInitial = 'J';

    // point2.x = 1;
    // point2.y = 1;

    // distance = sqrt(pow(point1.x - point2.x, 2) + pow(point1.y - point2.y, 2));

    // printf("The distance between (%d, %d) and (%d, %d) is %.2f\n", point1.x, point1.y, point2.x, point2.y, distance);
