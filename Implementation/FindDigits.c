#include<stdio.h>
int main(){
    int i,j,n,t,d,c=0,temp;
    scanf("%d",&t);
    for(i=0;i<t;i++){
        scanf("%d",&n);
        temp=n;
        while(n>0){
            d=n%10;
            if(temp%d==0){
                c+=1;
            }
            n=n/10;
        }
        printf("%d\n",c);
        c=0;
    } 
}