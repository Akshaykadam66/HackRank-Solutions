// https://www.hackerrank.com/challenges/detect-whether-a-linked-list-contains-a-cycle/problem

bool has_cycle(SinglyLinkedListNode* head) {
    struct SinglyLinkedListNode *temp=head;
    while(temp->next!=NULL){
        if(temp->data==000){
            return true;
        }else{
            temp->data=000;
            temp=temp->next;
        }
    }
    return false;
}