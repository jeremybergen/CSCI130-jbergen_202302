#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
    float number;

    cout << "Please enter a number: ";
    cin >> number;

    if (number > 0) {
        number++;
    }
    cout << "The floor of the number is: " << (int)number << endl;

    return 0;
}