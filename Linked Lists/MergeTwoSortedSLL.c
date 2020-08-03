// https://www.hackerrank.com/challenges/merge-two-sorted-linked-lists/problem

SinglyLinkedListNode* mergeLists(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2){
    struct SinglyLinkedListNode *newnode,*newhead=NULL,*temp;
    while(head1!=NULL && head2!=NULL){
        newnode=malloc(sizeof(struct SinglyLinkedListNode));
        newnode->next=NULL;
        if(head1->data<head2->data){
            newnode->data=head1->data;
            head1=head1->next;      
        }else{
            newnode->data=head2->data;
            head2=head2->next;  
        }  
        if(newhead==NULL){
            newhead=newnode;
        }else{
            temp=newhead;
            while(temp->next!=NULL){
                temp=temp->next;
            }
            temp->next=newnode;
        }
    }
    if(head2==NULL){
        temp=newhead;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=head1;
    }
    if(head1==NULL){
        temp=newhead;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=head2;
    }
    return newhead;
}