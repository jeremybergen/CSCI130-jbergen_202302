/*
Name: Jeremy Bergen

Linked Lists!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
*/
#include <iostream>
#include <string>

using namespace std;

struct Node {
    int data;
    Node *next;
};

int main(int argc, char *argv[]) {
    int listSize = 0;
    Node *first = new Node({0, NULL});
    Node *curNode;


    cout << "How many elements do you want in your list? ";
    cin >> listSize;

    curNode = first;
    for(int i = 0; i < listSize; i++) {
        Node *newNode = new Node();

        cout << "Enter a number: ";
        cin >> newNode->data;
        newNode->next = NULL;

        curNode->next = newNode;
        // curNode = newNode;
        curNode = curNode->next;
    }

    // Node *second = new Node();
    // Node *third = new Node();
    // Node *fourth = new Node();

    // first->data = 42;
    // first->next = second;

    // second->data = 15;
    // second->next = third;

    // third->data = 23;
    // third->next = fourth;

    // fourth->data = 9000;
    // fourth->next = NULL;

    // cout << "first->data: " << first->data << endl;
    // cout << "second->data: " << second->data << endl;
    // cout << "third->data: " << third->data << endl;

    curNode = first;
    while(curNode != NULL) {
        cout << "curNode->data: " << curNode->data << endl;
        curNode = curNode->next;
    }

    curNode = first;
    while(curNode != NULL) {
        Node *deleteNode;
        deleteNode = curNode;
        curNode = curNode->next;
        delete deleteNode;
    }

    // delete first;
    // delete second;
    // delete third;
    // delete fourth;
    return 0;
}