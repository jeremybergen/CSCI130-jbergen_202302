/*
Name: Jeremy Bergen

Multiplication Table

Please enter your first name:
Jeremy
Welcome Jeremy to our multiplication table printer:

    1    2    3    4    5    6    7    8    9   10
    2    4    6    8   10   12   14   16   18   20
    3    6    9   12   15   18   21   24   27   30
    4    8   12   16   20   24   28   32   36   40
    5   10   15   20   25   30   35   40   45   50
    6   12   18   24   30   36   42   48   54   60
    7   14   21   28   35   42   49   56   63   70
    8   16   24   32   40   48   56   64   72   80
    9   18   27   36   45   54   63   72   81   90
   10   20   30   40   50   60   70   80   90  100
*/
#include <iostream>
#include <string>
#include <cstdio>
#include <iomanip>

using namespace std;

string promptName();
void printWelcome(string);
void printTable(int, int);
void tableSize(int&, int&);

int main(int argc, char *argv[]) {
    string name;
    int width = 0;
    int height = 0;

    name = promptName();
    printWelcome(name);

    tableSize(width, height);
    cout << "DEBUG: inside main: " << endl;
    cout << "DEBUG: width: " << width << endl;
    cout << "DEBUG: height: " << height << endl;
    printTable(width, height);

    return 0;
}

void tableSize(int &width, int &height) {
    cout << "Please enter the width of the table: ";
    cin >> width;

    cout << "Please enter the height of the table: ";
    cin >> height;
    cout << "DEBUG: inside tableSize: " << endl;
    cout << "DEBUG: width: " << width << endl;
    cout << "DEBUG: height: " << height << endl;
}

void printTable(int width, int height) {
    /*
     1    2    3    4    5    6    7    8    9   10
     2    4    6    8   10   12   14   16   18   20
     3    6    9   12   15   18   21   24   27   30
     4    8   12   16   20   24   28   32   36   40
     5   10   15   20   25   30   35   40   45   50
     6   12   18   24   30   36   42   48   54   60
     7   14   21   28   35   42   49   56   63   70
     8   16   24   32   40   48   56   64   72   80
     9   18   27   36   45   54   63   72   81   90
    10   20   30   40   50   60   70   80   90  100
    */
    int numChars = 0;
    int maxNum = height * width;
    while(maxNum > 0) {
        maxNum = maxNum/10;
        numChars++;
    }
    for(int i=1; i<=height; i++) {
        for(int j=1; j<width+1; j++) {
            // https://cplusplus.com/reference/iomanip/setw/
            cout << setw(numChars+1) << j*i;
        }
        cout << endl;
    }
}

void printWelcome(string name) {
    printf("Welcome %s to our multiplication table printer:\n", name.c_str());
}

string promptName() {
    string name;
    cout << "Please enter your first name: " << endl;
    getline(cin, name);
    return name;
}