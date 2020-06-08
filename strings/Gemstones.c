#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    int i,j,n,c=0,gemstones=0;
    scanf("%d",&n);
    char a[n][100],q;
    for(i=0;i<n;i++){
        scanf("%s",&a[i]);
    }
    for(i=0;i<strlen(a[0]);i++){
        for(j=0;j<n;j++){
          if(strchr(a[j],a[0][i])){
                c+=1;
          }
        }
        if(c==n){
            gemstones+=1;
        }
        c=0;
        q=a[0][i];
        for(j=0;j<strlen(a[0]);j++){
            if(a[0][j]==q){
                a[0][j] = '0';
            }
        }
    }
    printf("%d", gemstones);
}
