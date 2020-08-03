// https://www.hackerrank.com/challenges/print-the-elements-of-a-linked-list-in-reverse/problem

void reversePrint(SinglyLinkedListNode* head) {
    if(head->next==NULL){
        printf("%d\n",head->data);
        return;
    }
    reversePrint(head->next);
    printf("%d\n",head->data);
}