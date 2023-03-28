/*
Name: Jeremy Bergen

Arrays!!!
*/
#include <iostream>
#include <string>
#include <random>

using namespace std;

void printArray(int[], size_t);

//                 char **argv
int main(int argc, char *argv[]) {
    size_t arrSize = 5;
    int nums[arrSize];

    nums[0] = 42;
    nums[1] = 15;
    nums[2] = 23;
    nums[3] = 9000;
    nums[4] = -15;


    cout << "Original Array: " << endl;
    printArray(nums, arrSize);

    for (size_t i = 0; i < arrSize-1; i++) {
        if (nums[i] <= nums[i+1]) {
            int tmpNum;
            tmpNum = nums[i];
            nums[i] = nums[i+1];
            nums[i+1] = tmpNum;
        }
    }

    cout << "First Iteration: " << endl;
    printArray(nums, arrSize);


    return 0;
}

void printArray(int numbers[], size_t arrSize) {
    for(size_t i = 0; i < arrSize; i++) {
        cout << numbers[i] << " ";
    }
    cout << endl;
}



















    // int nums[5];

    // int *myNums;
    // myNums = new int[5];
    
    // int *myNums2 = new int[5];

    // delete[] myNums;
    // delete[] myNums2;
    // cout << "argc: " << argc << endl;

    // for(int i = 0; i < argc; i++) {
    //     cout << "argv[" << i << "]: " << argv[i] << endl;
    // }

    // if (argc >= 2 && (string)argv[1] == "test") {
    //     // This should only run when I pass test as an argument (ex: ./arrays.out test)
    //     cout << "We are running tests" << endl;
    // }


















    // int board[3][3];

    // cout << "board: " << board << endl;
    
    // for(int i = 0; i < 3; i++) {
    //     for(int j = 0; j < 3; j++) {
    //         cout << "&board[i][j]: " << &board[i][j] << endl;;
    //     }
    // }

    // for(int i = 0; i < 3; i++) {
    //     for(int j = 0; j < 3; j++) {
    //         board[i][j] = ' ';
    //     }
    // }

    // board[1][1] = 'X';
    // board[2][0] = 'O';
    // board[0][0] = 'X';
    // board[2][2] = 'O';
    // board[2][1] = 'X';
    // board[0][1] = 'O';

    // cout << "-------" << endl;
    // for(int i = 0; i < 3; i++) {
    //     cout << "|";
    //     for(int j = 0; j < 3; j++) {
    //         cout << board[i][j] << "|";
    //     }
    //     cout << endl;
    //     cout << "-------" << endl;
    // }
    // size_t arrSize = 200000000;
    // int *largeNums = new int[arrSize];

    // // cout << "The size of the array is: " << sizeof(largeNums) << endl;
    // for(size_t i = 0; i < arrSize; i++) {
    //     *(largeNums + i) = i + 100;
    //     //largeNums[i] = "random()";
    // }

    // for(size_t i = 0; i < 10; i++) {
    //     // cout << "largeNums[" << i << "]: " << largeNums[i] << endl;
    //     cout << "*(largeNums + " << i << "): " << *(largeNums + i) << endl;
    // }

    // delete[] largeNums;
    // int num1;
    // int *heapInt = new int;

    // cout << "&num1: " << &num1 << endl;
    // cout << "&heapInt: " << &heapInt << endl;
    // cout << "heapInt: " << heapInt << endl;

    // delete heapInt;

    // int largeNums[2000001];

    // cout << "The size of the array is: " << sizeof(largeNums) << endl;

    // size_t arrSize = 10;
    // arrSize = getArraySize();
    // int nums[arrSize];

    // cout << "The size of the array is: " << sizeof(nums) << endl;

    // // int *ptr1;
    // // cout << "nums: " << nums << endl;
    // // cout << "nums[0]: " << &nums[0] << endl;

    // populateArray(nums, arrSize);

    // printArray(nums, arrSize);
// void printArray(int numbers[], size_t arrSize) {
//     for (size_t i = 0; i < arrSize; i++) {
//         cout << "numbers[" << i << "]: " << numbers[i] << endl;
//     }
// }

// void populateArray(int numbers[], size_t arrSize) {
//     cout << "The size of the array is: " << sizeof(numbers) << endl;
//     for (size_t i = 0; i < arrSize; i++) {
//         cout << "Please enter a number: ";
//         cin >> numbers[i];
//     }
// }

// size_t getArraySize() {
//     size_t arrSize;
//     cout << "Please enter the array size: ";
//     cin >> arrSize;
//     return arrSize;
// }














    // ptr1 = nums + arrSize - 1;
    // for (int i = 0; i < arrSize; i++) {
    //     cout << "*ptr1: " << *ptr1 << endl;
    //     ptr1--;
    // }

    // for(int i = 0; i < arrSize; i++) {
    //     cout << "&nums[" << i << "]: " << &nums[i] << endl;
    // }
    // cout << "&nums[0]: " << &nums[0] << endl;
    // cout << "&nums[1]: " << &nums[1] << endl;
    // cout << "&nums[2]: " << &nums[2] << endl;
    // cout << "&nums[3]: " << &nums[3] << endl;
    // cout << "&nums[4]: " << &nums[4] << endl;

    // cout << "The size of nums is: " << sizeof(nums)/sizeof(char) << endl;

    // for (unsigned int i = 0; i < arrSize; i++) {
    //     nums[i] = -1;
    // }

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