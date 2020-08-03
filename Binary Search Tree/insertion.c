// https://www.hackerrank.com/challenges/binary-search-tree-insertion/problem?isFullScreen=true

struct node* insert( struct node* root, int data ) {
    struct node *temp=root,*newnode,*parent;
    newnode=malloc(sizeof(struct node));
    newnode->data=data;
    newnode->left=newnode->right=NULL;
    if(root==NULL){
        root=newnode;
        return root;
    }else{
        while(temp!=NULL){
            parent=temp;
            if(temp->data>data){
                temp=temp->left;
            }else{
                temp=temp->right;
            }
        }
        if(parent->data>data){
            parent->left=newnode;
        }else{
            parent->right=newnode;
        }
    }
    return root;
}
