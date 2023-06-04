
//   You are given singlylinked list of integers. You need to reverse the linked list by changing the links between nodes.


Node reverse1(Node* head){
    //base case
    if(head == NULL  || head->next == NULL){
        return head;
    }
    Node* chotaHead = reverse1(head -> next);

    head -> next -> next = head;
    head -> next = NULL;

    return chotahead;

}

void reverse(Node* &head, Node* curr, Node* prev){

    //base case
    if(curr == NULL){
        head = prev;
        return;
    
}

Node* forward = curr -> next;
reverse(head, forward, curr);
curr -> next = prev;

}

Node* reverseLinkedList(Node *head){

    return reverse1(head);
}