// https://www.hackerrank.com/challenges/binary-search-tree-lowest-common-ancestor/problem?isFullScreen=false

struct node *lca( struct node *root, int v1, int v2 ){
    struct node *temp=root;
    while(temp!=NULL){
        if(temp->data==v1 || temp->data==v2){
            return temp;
        }else if(temp->data>v1 && temp->data>v2){
          temp=temp->left;
          continue;
        }else if(temp->data<v1 && temp->data<v2){
            temp=temp->right;
            continue;
        }else if(temp->data>v1 || temp->data<v1 && temp->data>v2 || temp->data<v2){
            return temp;
        }
    }
    return temp;
}
