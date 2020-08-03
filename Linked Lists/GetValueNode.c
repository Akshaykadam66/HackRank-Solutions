// https://www.hackerrank.com/challenges/get-the-value-of-the-node-at-a-specific-position-from-the-tail/problem

int getNode(SinglyLinkedListNode* head, int positionFromTail) {
struct SinglyLinkedListNode *temp=head;
int c=0;
while(head!=NULL){
    if(c>positionFromTail){
        temp=temp->next;
    }
    head=head->next;
    c+=1;
}
return temp->data;
}
