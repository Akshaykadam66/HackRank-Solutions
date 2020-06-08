#include<stdio.h>
int main(){
    int i,n,d,k,j,c=0;
    scanf("%d %d",&n,&d);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-2;i++){
        for(j=i+1;j<n-1;j++){
            if(a[j]-a[i]==d){
                for(k=j+1;k<n;k++){
                    if(a[k]-a[j]==d){
                        c+=1;
                    }
                }
            }
        }
    }
    printf("%d",c);
}