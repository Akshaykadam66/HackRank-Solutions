#include<stdio.h>
#include<stdlib.h>
int main(){
    int n,k,i,j,*a,c=0;
    scanf("%d %d",&n,&k);
    a=malloc(sizeof(int)*n);
    for(i=0;i<n;i++){
        scanf("%d",a+i);
    }
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if((a[i]+a[j])%k==0){
                c+=1;
            }
        }
    }
    printf("%d",c);
}
