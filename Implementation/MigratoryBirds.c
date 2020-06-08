#include<stdio.h>
int main(){
    int i,j,n,fq,f=0,d;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if(a[i]==a[j]){
                f+=1;             
            }
        }
        if(f>fq){
            fq=f;
            d=a[i];
        }
        if(f==fq && a[i]<d){
            d=a[i];
        }
        f=0;     
    }
    printf("%d",d);
}