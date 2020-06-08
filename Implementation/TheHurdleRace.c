#include<stdio.h>
#include<stdlib.h>
int main(){
    int *a,n,k,i,max=0;
    scanf("%d %d",&n,&k);
    a=malloc(sizeof(int)*n);
    for(i=0;i<n;i++){
        scanf("%d",a+i);
    }
    for(i=0;i<n;i++){
        if(a[i]>max){
            max=a[i];
        }
    }
    if(max>k){
        printf("%d",max-k);
    }else{
        printf("0");
    }
}