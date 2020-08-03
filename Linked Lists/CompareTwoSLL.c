// https://www.hackerrank.com/challenges/compare-two-linked-lists/problem

bool compare_lists(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2){
    int flag=0;
    while(head1!=NULL && head2!=NULL){
        if(head1->data==head2->data){
            head1=head1->next;
            head2=head2->next;
        }else{
            flag=1;
            break;
        }
    }
    if(head1==NULL && head2==NULL){
        if(flag==1){
            return 0;
        }else{
            return 1;
        }   
    }
    return 0;    
}
