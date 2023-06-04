// Insertion at Any position      **********Singly ll   *****

#include <iostream>
#include <map>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    // constructor
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
    // deleting a node in linkedlist

    // destructor
    ~Node()
    {
        int value = this-> data;
        // memory free
        if (this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }
        cout << " memory is free for node with data " << value << endl;
    }
};

//  Insertion

void insertionAtHead(Node *&head, int d)
{

    // new node create
    Node *temp = new Node(d);
    temp->next = head;
    head = head;
}

void insertionAtTail(Node *&tail, int d)
{
    // new node create
    Node *temp = new Node(d);
    tail->next = temp;
    tail = temp;
}

// HOW TO TRAVEL LINLED LIST
void print(Node *&head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

// Insert in middle
void insertionAtPosition(Node *&tail, Node *&head, int position, int d)
{
    // insert at start
    if (position == 1)
    {
        insertionAtHead(head, d);
        return;
    }
    // if length is given

    Node *temp = head;

    int cnt = 1;

    while (cnt < position - 1)
    {
        temp = temp->next;
        cnt++;
    }

    // insertion at Last Position
    if (temp->next == NULL)
    {
        insertionAtTail(tail, d);
        return;
    }
    // creating a node for d
    Node *nodeToinsert = new Node(d);

    nodeToinsert->next = temp->next;
    temp->next = nodeToinsert;
}

void deleteNode(int position, Node* & head){


//*********  deleting first or start node
if (position == 1)
{
    Node *temp = head;
    head = head->next;
    // memory free start node
    temp = temp = NULL;
    delete temp;
}
else
{
    // deleting any middle node or last node
    // make the two pointers

    Node *curr = head;
    Node *prev = NULL;

    int cnt = 1;
    while (cnt < position)
    {
        prev = curr;
        curr = curr->next;
        cnt++;
    }
    prev->next = curr->next;
    curr -> next = NULL;
    delete curr;
}
}
bool isCircularList(Node* head){
    //empty List
    if(head == NULL){
        return true;

    }
    Node* temp = head -> next;
    while(temp != NULL && temp != head){
        temp = temp -> next;

    }
    if(temp == head){
        return true;

    }
    return false;
}
////////////////////////////   Detect & remove loop

bool Detectloop(Node* head){

if(head == NULL)
return false;

map<Node*, bool> visited;

Node* temp = head;

while(temp !=NULL){

    //Cycle is present
    if(visited[temp] == true){
        cout << "present on element " << temp->data << endl;

        return true;

    }

    visited[temp] == true;
    temp = temp ->next;

}
return false;
}



/// Floyds cycle detection Algorithm


    Node* floydDetectloop(Node* head){

        if(head == NULL)
        return NULL;

        Node* slow = head;
        Node* fast = head;

        while(slow != NULL && fast !=NULL){

            fast = fast -> next;
            if(fast != NULL){
                fast = fast -> next;

            }

            slow = slow -> next;

            if(slow == fast){
                cout << "present at" << slow -> data << endl;
                return slow;

            } 
        }
        return NULL;
    }

        // for cmplt cycle

        Node* getStartingNode(Node* head){

            if(head == NULL)
            return NULL;

            Node* intersection = floydDetectloop(head);
            Node* slow = head;

            while(slow != intersection){
                slow = slow -> next;
                intersection = intersection -> next;

            }
        
        return slow;

        }



        //Remove cycle from ll
void removeLoop(Node* head){

    if( head == NULL)
    return;

    Node* startOfLoop = getStartingNode(head);
    Node* temp = startOfLoop;

    while(temp -> next != startOfLoop){

        temp = temp -> next;

    }
    temp -> next = NULL;

    
}


        
        int main(){

    // create a new node
    Node *node1 = new Node(10);
    // cout<< node1 -> data<<endl;
    // cout<< node1 -> next<<endl;

    // head pointed to node1
    Node *head = node1;
    Node *tail = node1;

    //print(head);

    insertionAtTail(tail, 12);

    //print(head);

    insertionAtTail(tail, 15);

    //print(head);

    insertionAtPosition(tail, head, 4, 22);
    //print(head);

    // Verify in head and tail

    //cout << "head" << head->data << endl;
    //cout << "tail" << tail->data << endl;

    // deleting in any term
    //deleteNode(3, head);
   // print(head);

    tail -> next = head ->next;

    cout << "head" << head-> data << endl;
    cout << "tail" << tail-> data << endl;


if(floydDetectloop(head) != NULL){
    cout << "Cycle is present " << endl;
}
else
{
cout << "no cycle" << endl;

        }


Node* loop = getStartingNode(head);

cout << "loop starts at " << loop -> data << endl;

removeLoop(head);
print(head);



/*
print(head);
if(isCircularList(head)){
    cout << "Linkes List is Circular in nature" << endl;
    }
    else{
        cout << "Linked List is not Circular " << endl;

    }
}






*/
    return 0;

        }   








Node* floyDetectLoop(Node* head){

    if(head == NULL)
    return NULL;

    Node* slow = head;
    Node* fast = head;

    while(slow != NULL && fast != NULL){

        fast = fast -> next;

        if(slow == fast){


            return slow;
        }
    }
    return NULL;
}












        Node* getStartingNode(Node* head){

            if(head == NULL)
            return NULL;

            Node* intersection = floydDetectLoop(head);
            Node* slow = head;

            while(slow != intersection){
                slow = slow -> next;
                intersection = intersection -> next;

            }
            return slow;

        }

        Node* removeLoop(Node* head)
        {
            if(head == NULL)
            return NULL;

            Node* startOfLoop = getStartingNode(head);
            Node* temp = startOfLoop;

            while(temp -> next != startOfLoop){
            temp = temp -> next;

        }

        temp -> next = NULL;
        return head;
        
        }