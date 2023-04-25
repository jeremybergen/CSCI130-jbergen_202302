#pragma once
#include <string>

void promptName(std::string&);
void greetPlayer(std::string);

namespace rectangle {
    // template <class T1, class T2>
    // void promptSides(T1&, T2&);
    void promptSides(float&, float&);

    // template <class T1, class T2, class T3>
    void calcArea(float&, float&, float&);

    // template <class T1, class T2, class T3>
    void calcPerim(float&, float&, float&);

    // template <class T1, class T2, class T3, class T4>
    void printValues(float, float, float, float);
}