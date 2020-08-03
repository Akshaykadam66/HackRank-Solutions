// https://www.hackerrank.com/challenges/insert-a-node-at-the-tail-of-a-linked-list/problem

SinglyLinkedListNode* insertNodeAtTail(SinglyLinkedListNode* head, int data) {
struct SinglyLinkedListNode *temp=head,*newnode;
    newnode=malloc(sizeof(struct SinglyLinkedListNode));
    newnode->data=data;
    newnode->next=NULL;
    if(head==NULL){
        head=newnode;
    }else if(head!=NULL){
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=newnode;
        }
    return head;
}