#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
    int *a,last,k,n,i,j,q,*qq;
    scanf("%d %d %d",&n,&k,&q);
    a=malloc(sizeof(int)*n);
    qq=malloc(sizeof(int)*q);
    for(i=0;i<n;i++){
        scanf("%d",a+i);
    }
    for(i=0;i<q;i++){
        scanf("%d",qq+i);
    }
    for(j=0;j<k;j++){
        last=a[n-1];
        for(i=n-1;i>0;i--){
            a[i]=a[i-1];
        }
        a[0]=last;
    }
    for(i=0;i<q;i++){
        printf("%d\n",a[qq[i]]);
    }
}