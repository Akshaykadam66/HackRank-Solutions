// https://www.hackerrank.com/challenges/reverse-a-linked-list/problem

SinglyLinkedListNode* reverse(SinglyLinkedListNode* head) {
    struct SinglyLinkedListNode *prev=NULL,*temp=head,*nextp;
    while(temp!=NULL){
        nextp=temp->next;
        temp->next=prev;
        prev=temp;
        temp=nextp;
    }
    head=prev;
    return head;
}
