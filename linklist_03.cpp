// 3rd  CIRCULAR Linked list


#include<iostream>
using namespace std;


class Node {
    public:
    int data;
    Node* next;

    //construtor
    Node(int d){
        this->data = d;
        this->next = NULL;
    }

    //distructor
~Node(){
    int value = this->data;
    if(this->next != NULL){
        delete next;
        next = NULL;

    }
    cout << "memory is free for node with data " << value << endl;

}
    };
    // insert

    void insertNode(Node* &tail, int element, int d){

        //assum that the element is present in the list
        //empty list
        if(tail == NULL){
            Node* newNode = new Node(d);
            tail = newNode;
            newNode -> next = newNode;
        }
        else{
            //non - empty list
            //assuming that the element is present in the list

            Node* curr = tail;

            while(curr->data != element){
                curr = curr -> next;

            }
            //element found -> curr is representing elemenr wala node
            Node* temp = new Node(d);
            temp -> next = curr -> next;
            curr -> next = temp;
        }
     

        }
    
void print(Node* tail){

Node* temp = tail;

// Emptu list
if(tail == NULL){
    cout << "List is empty" << endl;
    return;
}

do{
cout << tail->data << " ";
tail = tail -> next;
}
while(tail != temp);
    cout << endl;

}

//deletion

void deletion(Node* &tail, int value){

    //empty list
    if(tail == NULL){
        cout << " List is empty, please check again " << endl;
        return;
    }
    else{
        //non- empty

        //assuming that "value" is present in the Linked List
        Node* prev = tail;
        Node* curr = prev -> next;

        while(curr -> data != value){
            prev = curr;
            curr = curr -> next;
        }

        prev -> next = curr -> next;

        //1 Node linked list
        if(curr == prev){
            tail = NULL;
        }

        //>=2 Node linked list
         else if(tail == curr){
            tail = prev;
        }
    curr -> next = NULL;
         delete curr;


        }
    
}

int main()
{
    Node* tail = NULL;

//Empty list me insert krre hai
insertNode(tail, 5, 3);

print(tail);



insertNode(tail, 3, 5);
print(tail);

/*
insertNode(tail, 5, 7);
print(tail);

insertNode(tail, 7, 9);
print(tail);

insertNode(tail, 5, 6);
print(tail);

insertNode(tail, 9, 10);
print(tail);

insertNode(tail, 3, 4);
print(tail);
*/
deletion(tail,3);
print(tail);

return 0;
}