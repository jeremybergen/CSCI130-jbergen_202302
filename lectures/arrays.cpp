/*
Name: Jeremy Bergen

Arrays!!!
*/
#include <iostream>
#include <string>

using namespace std;

int main(int argc, char *argv[]) {
    unsigned int arrSize = 10;
    int nums[arrSize];

    cout << "Please enter a new array size: ";
    cin >> arrSize;

    for (unsigned int i = 0; i < arrSize; i++) {
        nums[i] = -1;
    }

    // // nums[0] = 42;
    // // nums[1] = 15;
    // // nums[2] = 9000;
    // // nums[3] = -15;
    // // nums[4] = 9;
    // // DO NOT DO!!!
    // // nums[5] = 234;

    // for (size_t i = 0; i < arrSize; i++) {
    //     cout << "nums[" << i << "]: " << nums[i] << endl;
    // }
    // cout << "nums[0]: " << nums[0] << endl;
    // cout << "nums[1]: " << nums[1] << endl;
    // cout << "nums[2]: " << nums[2] << endl;
    // cout << "nums[3]: " << nums[3] << endl;
    // cout << "nums[4]: " << nums[4] << endl;
    // DO NOT DO!!!
    // cout << "nums[5]: " << nums[5] << endl;

    // int num1, num2;
    // long num3, num4;
    // float num5, num6;
    // int num7, num8;

    // int *ptr;

    // num1 = 42;
    // num2 = 15;
    // num3 = 5000000000;
    // num4 = 6000000000;
    // num5 = 123.7;
    // num6 = -14.8;
    // num7 = 90;
    // num8 = -5;

    // cout << "&num1: " << &num1 << endl;
    // cout << "&num2: " << &num2 << endl;

    // cout << "&num5: " << &num5 << endl;
    // cout << "&num6: " << &num6 << endl;
    // cout << "&num7: " << &num7 << endl;
    // cout << "&num8: " << &num8 << endl;

    // cout << "&num3: " << &num3 << endl;
    // cout << "&num4: " << &num4 << endl;

    // ptr = &num1;
    // cout << "*ptr: " << *ptr << endl;
    // ptr++;

    // cout << "*ptr: " << *ptr << endl;
    // ptr++;
    // cout << "*ptr: " << *ptr << endl;
    // ptr++;
    // cout << "*ptr: " << *ptr << endl;
    // ptr++;
    // cout << "*ptr: " << *ptr << endl;
    // ptr++;
    // cout << "*ptr: " << *ptr << endl;
    // ptr++;
    // cout << "*ptr: " << *ptr << endl;
    // ptr++;
    // cout << "*ptr: " << *ptr << endl;
    // ptr++;
    // cout << "*ptr: " << *ptr << endl;
    // ptr++;
    // cout << "*ptr: " << *ptr << endl;
    // ptr++;

    return 0;
}