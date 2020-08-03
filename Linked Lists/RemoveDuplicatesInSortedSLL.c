// hackerrank.com/challenges/delete-duplicate-value-nodes-from-a-sorted-linked-list/problem

SinglyLinkedListNode* removeDuplicates(SinglyLinkedListNode* head) {
    struct SinglyLinkedListNode *prev=NULL,*cur=head;
    while(head->next!=NULL){
        if(head->data==head->next->data){
            if(head==cur){
                head=head->next;
                cur=head;
            }else{
                head=head->next;
                prev->next=head;
                // head=prev->next->next;
            }
        }else{
            prev=head;
            head=head->next;
        }
    }    
    return cur;
}
