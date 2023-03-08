/*
Name: Jeremy Bergen

Pointers!!!
*/
#include <iostream>
#include <string>
#include <cmath>

using namespace std;

// void addNums(int*);
// void swapPointers(int**, int**);
int* findLarger(int&, int&);

// int main(int argc, char **argv)
int main(int argc, char *argv[]) {

    // int n1, n2;
    // int *ptr1, *ptr2;
    // int **dptr1, **dptr2;

    // ptr1 = &n1;
    // ptr2 = &n2;
    // dptr1 = &ptr1;
    // dptr2 = &ptr2;
    // cout << "Please enter two numbers separated by a space: ";
    // cin >> *ptr1 >> *ptr2;

    // cout << "*ptr1: " << *ptr1 << endl;
    // cout << "*ptr2: " << *ptr2 << endl;

    // cout << "DEBUG: before swapPointers: "<< endl;
    // cout << "dptr1: " << *dptr1 << endl;
    // cout << "dptr2: " << *dptr2 << endl;
    // swapPointers(dptr1, dptr2);

    // cout << "After swap: " << endl;
    // cout << "*ptr1: " << *ptr1 << endl;
    // cout << "*ptr2: " << *ptr2 << endl;
    int n1, n2;
    int *ptr1, *ptr2;
    int *result;

    ptr1 = &n1;
    ptr2 = &n2;

    cout << "Please enter two numbers separated by a space: ";
    cin >> *ptr1 >> *ptr2;
    
    result = findLarger(*ptr1, *ptr2);

    cout << "The larger number between the two is: " << *result << endl;

    return 0;
}

int* findLarger(int& num1, int& num2) {
    // cout << "DEBUG: *num1: " << *num1 << endl;
    // cout << "DEBUG: *num2: " << *num2 << endl;
    if(num1 > num2) {
        return &num1;
    } else {
        return &num2;
    }

    return NULL;
}

// void swapPointers(int** num1, int** num2) {
//     // int tmpNum;
//     // tmpNum = *num1;
//     // *num1 = *num2;
//     // *num2 = tmpNum;
//     cout << "num1: " << *num1 << endl;
//     cout << "num2: " << *num2 << endl;
//     int *tmpPtr;
//     tmpPtr = *num1;
//     *num1 = *num2;
//     *num2 = tmpPtr;
// }




    // int n1, n2;
    // int *ptr1, *ptr2;

    // n1 = 42;
    // n2 = 15;
    // ptr1 = &n1;
    // ptr2 = &n2;

    // cout << "n1: " << n1 << endl;
    // addNums(&n1);
    // cout << "n1: " << n1 << endl;

    // // cout << n1 << " + " << n2 << " = " << addNums(ptr1, ptr2) << endl;

// void addNums(int* num1) {
//     *num1 = *num1 + 10;
//     // return *num1 + 10;
// }



















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
