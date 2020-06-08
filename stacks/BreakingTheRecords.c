#include<stdio.h>
#include<stdlib.h>
int main(){
    int *a,n,i,j,h,hc=0,lc=0,l;
    scanf("%d",&n);
    a=malloc(sizeof(int)*n);
    for(i=0;i<n;i++){
        scanf("%d", a+i);
    }
    h=a[0],l=a[0];
    for(i=1;i<n;i++){
        if(a[i]>h){
            hc+=1;
            h=a[i];
        }
        if(a[i]<l){
            lc+=1;
            l=a[i];
        }
    }
    printf("%d %d\n",hc,lc);
}
