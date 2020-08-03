struct node *q[100];
int f =-1, r=-1;
void qinsert(struct node *i)
{
        if(f && r == -1){
                r++;
                f++;
         }
        else{
                r++;
        }
        q[r]=i;
}
int isempty()
{
   if(f==-1 || f>r){
        return 1;
    }
  else{
          return 0;
  }
}
 struct node * qdelete(){
         f++;
         return q[f-1];
 }

void levelOrder( struct node *root) {
    struct node *temp;
   qinsert(root);
   while(isempty()==0)
   {
     temp=qdelete();
     printf("%d ",temp->data);
     if(temp->left!=NULL)
     {
             qinsert(temp->left);
     }
     if(temp->right!=NULL)
     {
             qinsert(temp->right);
     }
   }
}
