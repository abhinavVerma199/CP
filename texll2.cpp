//you are given a linked list of 'N' nodes and an integer 'K' you hav to reverse the given linked list in groups of size K i.e if the list contains x nodes numbered from 1 to x, then you need to reverse each of the groups{1,K},{K+11,2*K}, and so on.

//for example , if the list is {1, 2, 3, 4, 5, 6} and K= 2, Then the new list will be {2, 1, 3, 4, ,5 , 6} and K = 2 , then the new list will be {1, 2, 4, 3, 6, 5}.
//linked list revese k group


Node* kReverse(Node* head, int k){
    // base call
    if(head == NULL){
        return NULL;
    }

    //step1: reverse first k nodes
    Node* next = NULL;
    Node* curr = head;
    Node* prev = NULL;
    int count = 0;

    while(curr != NULL && cout < k){
        next = curr -> next;
        curr -> = prev;
        prev = curr;
        curr = next;
        count++;
    }

    //step2: Recursion dekhlega aage ka 
    if(next != NULL){
        head -> next = kReverse(next, k);

    }
}
//step3: return head of reversed list
return prev;

