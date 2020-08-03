int min=-9999999,max=9999999;
	bool checkBST(Node* root) {
        return isbst(root,min,max);
		
	}
bool isbst(struct Node *root,int min,int max){
    if(root==NULL){
            return true;
        }
        if(root->data<min || root->data>max){
            return false;
        }
        if(!isbst(root->left,min,root->data-1) || !isbst(root->right,root->data+1,max)){
            return false;
        }
    return true;
}