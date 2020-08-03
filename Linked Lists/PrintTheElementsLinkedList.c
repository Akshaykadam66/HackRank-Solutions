//https://www.hackerrank.com/challenges/print-the-elements-of-a-linked-list/problem

void printLinkedList(SinglyLinkedListNode* head) {
    while(head!=NULL){  
        printf("%d\n",head->data);
        head=head->next;
    }

}