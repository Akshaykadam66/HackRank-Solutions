// https://www.hackerrank.com/challenges/delete-a-node-from-a-linked-list/problem

SinglyLinkedListNode* deleteNode(SinglyLinkedListNode* head, int position) {
    int c=0;
    struct SinglyLinkedListNode *temp=head,*del,*prev;
    while(c<position && temp->next!=NULL){
        prev=temp;
        temp=temp->next;
        c+=1;
    }
    if(position!=0){
        prev->next=temp->next;
    }else{
        head=temp->next;
    }
    free(temp);
    return head;
}
