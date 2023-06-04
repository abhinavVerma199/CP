//// Remove Duplicates from sorted List

/* you want to play with your friend, but your friend has pending homework, help him complete that

you are given a 'head' of a sorted linked list. You can remove some values from the linked list.
In the end, you must return a sorted linked list that contains no adjacent values that are equal.

*/

Node* uniqueSortedList(Node* head){
    // empty list
    if(head == NULL)
    return NULL;

    //non empty List
    Node* curr = head;
    while(curr != NULL){

        if(curr ->next != NULL) && curr -> data == curr -> next -> data{
            Node* next_next = curr ->next -> next;
            Node* nodeToDelete = curr -> next;
            delete(nodeToDelete);
            curr -> next = next_next;

        }
        else //not equal
        {
            curr = curr -> next;

        }
    }
    return head;
}