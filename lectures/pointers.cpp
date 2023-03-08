/*
Name: Jeremy Bergen

Pointers!!!
*/
#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int addNums(int*, int*);

// int main(int argc, char **argv)
int main(int argc, char *argv[]) {
    int n1, n2;
    int *ptr1, *ptr2;

    n1 = 42;
    n2 = 15;
    ptr1 = &n1;
    ptr2 = &n2;

    cout << n1 << " + " << n2 << " = " << addNums(ptr1, ptr2) << endl;

    return 0;
}

int addNums(int* num1, int* num2) {
    return (*num1 + *num2);
}



















    // long num1, num2, num3, num4;
    // int *ptr1;

    // num1 = 5000000000;
    // num2 = 15;
    // num3 = 9000;
    // num4 = -82;

    // ptr1 = (int*)&num1;

    // cout << "ptr1: " << ptr1 << endl;
    // cout << "*ptr1: " << *ptr1 << endl;

    // ptr1++;

    // cout << "ptr1: " << ptr1 << endl;
    // cout << "*ptr1: " << *ptr1 << endl;

    // ptr1++;

    // cout << "ptr1: " << ptr1 << endl;
    // cout << "*ptr1: " << *ptr1 << endl;

    // ptr1++;

    // cout << "ptr1: " << ptr1 << endl;
    // cout << "*ptr1: " << *ptr1 << endl;

    // ptr1--;

    // cout << "ptr1: " << ptr1 << endl;
    // cout << "*ptr1: " << *ptr1 << endl;

    // int num1;
    // int *ptr1;

    // num1 = 42;
    // ptr1 = &num1;

    // cout << "ptr1: " << ptr1 << endl;
    // cout << "*ptr1: " << *ptr1 << endl;


    // int num1, num2, num3, num4;
    // int *ptr1;

    // num1 = 42;
    // num2 = 15;
    // num3 = 9000;
    // num4 = -5;

    // ptr1 = &num1;

    // cout << "*ptr1: " << *ptr1 << endl;

    // ptr1 = ptr1 + 1;

    // cout << "*ptr1: " << *ptr1 << endl;
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
