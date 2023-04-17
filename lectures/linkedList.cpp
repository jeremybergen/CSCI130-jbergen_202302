/*
Name: Jeremy Bergen

Linked Lists!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
*/
#include <iostream>
#include <string>

using namespace std;

struct Node {
    int data;
    Node *head;
    Node *tail;
};

void llSize(int&);
void buildList(Node *, Node *);
void printList(Node *);
void deleteList(Node *);

int main(int argc, char *argv[]) {
    int listSize = 0;
    Node *first = new Node();
    Node *curNode;

    llSize(listSize);

    curNode = first;
    for(int i = 0; i < listSize; i++) {
        if (i < listSize-1) {
            Node *newNode = new Node();
            buildList(curNode, newNode);
            curNode = newNode;
        } else {
            buildList(curNode, first);
        }

        // buildList(first, NULL);
        // if (i == 0) {
        //     buildList(first, NULL);
        //     curNode = first;
        // } else {
        //     Node *newNode = new Node();
        //     buildList(curNode, newNode);
        //     curNode = newNode;
        // }
    }
    

    printList(first);
    deleteList(first);

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




    // delete first;
    // delete second;
    // delete third;
    // delete fourth;
    return 0;
}

void deleteList(Node *first) {
    // Node *curNode;

    // curNode = first;
    while(first != NULL) {
        Node *deleteNode;
        deleteNode = first;
        first = first->tail;
        delete deleteNode;
    }
}

void printList(Node *first) {
    // Node *curNode;

    // curNode = first;
    while(first != NULL) {
        cout << "first->data: " << first->data << endl;
        first = first->tail;
    }

}

void buildList(Node *node, Node *nextNode) {
    cout << "Please enter a number: ";
    cin >> node->data;
    node->tail = nextNode;
    nextNode->head = node;

    // Node *curNode;

    // curNode = first;
    

    // for(int i = 0; i < listSize; i++) {
    //     // if(i == 0) {
    //     //     cout << "Enter a number: ";
    //     //     cin >> first->data;
    //     //     first->next = NULL;
    //     // } else {
    //     Node *newNode = new Node();

    //     cout << "Enter a number: ";
    //     cin >> newNode->data;
    //     newNode->next = NULL;

    //     first->next = newNode;
    //     // curNode = newNode;
    //     first = first->next;
    //     // }
    // }

}

void llSize(int &listSize) {
    cout << "How many elements do you want in your list? ";
    cin >> listSize;
}