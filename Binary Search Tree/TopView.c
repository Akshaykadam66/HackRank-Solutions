// https://www.hackerrank.com/challenges/tree-top-view/problem

void topView( struct node *root) {
    struct node *temp=root;
    while(temp->left!=NULL){
        temp=temp->left;
        printf("%d ",temp->data);
    }
    while(root!=NULL){
        printf("%d ",root->data);
        root=root->right;
    }    
}
