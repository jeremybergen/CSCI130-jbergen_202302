/*
Name: Jeremy Bergen

Pointers!!!
*/
#include <iostream>
#include <string>

using namespace std;

// int main(int argc, char **argv)
int main(int argc, char *argv[]) {
    int num1, num2, num3, num4;
    int *ptr1;

    num1 = 42;
    num2 = 15;
    num3 = 9000;
    num4 = -5;

    ptr1 = &num1;

    cout << "*ptr1: " << *ptr1 << endl;

    ptr1 = ptr1 + 1;

    cout << "*ptr1: " << *ptr1 << endl;
    // int num1 = 0;
    // int *ptr1;

    // ptr1 = NULL;

    // if (ptr1 == NULL) {
    //     ptr1 = &num1;
    // }

    // cout << "&num1: " << &num1 << endl;
    // cout << "ptr1: " << ptr1 << endl;
    // cout << "&ptr1: " << &ptr1 << endl;

    // char num1;
    // char *ptr1;
    // // int **ptr2;

    // // num1 = 42;
    // num1 = 'J';
    // ptr1 = &num1;

    // cout << "ptr1: " << ptr1 << endl;

    // ptr2 = &ptr1;
    // cout << "&num1: " << &num1 << endl;
    // cout << "&num2: " << &num2 << endl;
    // cout << "&num3: " << &num3 << endl;

    // cout << "&num1: " << &num1 << endl;
    // cout << "ptr1: " << ptr1 << endl;
    // // cout << "&ptr1: " << &ptr1 << endl;
    // // cout << "ptr2: " << ptr2 << endl;

    // cout << "num1: " << num1 << endl;
    // cout << "*ptr1: " << *ptr1 << endl;

    // *ptr1 = 15;

    // cout << "num1: " << num1 << endl;
    // cout << "*ptr1: " << *ptr1 << endl;
    // cout << "**ptr2: " << **ptr2 << endl;

    return 0;
}