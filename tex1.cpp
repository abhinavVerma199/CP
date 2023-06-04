// given the head node of the singly ll, retun a pointer pointing to the middle of the linked list
//if there are an odd number of elements, return the middle element if there are even elements return the one which is father from the head node.

//for example, let the linked list be 1->2->3-4->null

//since the number of elements in this linked list is 4 so we have 2 middle elements, i.e 2 and 3 but we return 3 as it is farther head node i.e 1.


int getLength(Node* head){

int len = 0;
while(head != NULL){
    len++;
    head = head -> next;

}
return len;


}
Node *findMiddle(Node* head){
    int len = getLength(head);
int ans = (len/2)+1;

Node* temp = head;
while(ans--){
    temp= temp-> next;

}
return temp;
}