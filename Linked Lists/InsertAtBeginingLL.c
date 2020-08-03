// https://www.hackerrank.com/challenges/insert-a-node-at-the-head-of-a-linked-list/problem

SinglyLinkedListNode* insertNodeAtHead(SinglyLinkedListNode* llist, int data) {
struct SinglyLinkedListNode *newnode;
    newnode=malloc(sizeof(struct SinglyLinkedListNode));
    newnode->data=data;
    newnode->next=NULL;
    if(llist==NULL){
        llist=newnode;
    }else if(llist!=NULL){
        newnode->next=llist;
        llist=newnode;
        }
    return llist;
}