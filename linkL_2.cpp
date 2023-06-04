#include <iostream>
using namespace std;

class Node {

public:
    int data;
    Node *next;

//constructor
    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }
};

void insertAtHead(Node* &head, int d){

    //new node create
    Node* temp = new Node(d);
    temp -> next = head;
    head = temp;

}

void insertAtTail(Node* &tail, int d){
    //New node create
    Node* temp = new Node(d);
    tail -> next = temp;
    tail = temp;
}

void print(Node* &head){
    Node* temp = head;

    while(temp != NULL){
        cout << temp -> data <<" ";
        temp = temp -> next;
    }
    cout << endl;
}

//*******Insert in middle **********

void insertAtPosition(Node* & head, int position, int d){

    Node* temp = head;
    int cnt = 1;

    while(cnt < position-1){
        temp = temp->next;
        cnt++;

    }

    //creating a node for d
    Node* nodeToInsert = new Node (d);

    nodeToInsert -> next = temp -> next;

    temp -> next = nodeToInsert;
}
/*
//********** Singly linkedlist ********

void insertAtHead(Node* &head, int d){

    //new node create
    Node* temp = new Node(d);
    temp -> next = head;
    head = temp;
}
void print(node* &head) {
    Node* temp = head;

    while(temp != NULL){
        cout << temp -> data << " ";
        temp = temp -> next;
    }

}
*/

int main()
{
    //created a new node

    Node *node1 = new Node(10);
   // cout << node1->data << endl;
    //cout << node1->next << endl;

// head pointer to node1
Node* head = node1;
Node* tail = node1;
print(head);

insertAtTail(tail, 12);

print(head);

insertAtTail(tail, 15);
print(head);

insertAtPosition(head, 1, 22);
print(head);

    return 0;
}