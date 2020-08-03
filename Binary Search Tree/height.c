// https://www.hackerrank.com/challenges/tree-height-of-a-binary-tree/problem

int getHeight(struct node* root) {
    int l,r;
    if(root==NULL){
        return -1;
    }
    if(root->left==NULL && root->right==NULL){
        return 0;
    }
    l=getHeight(root->left);
    r=getHeight(root->right);
    if(l>r){
        return l+1;
    }
    return r+1;
}