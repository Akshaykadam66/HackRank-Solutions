#include<stdio.h>
#include<stdlib.h>
int main(){
    int a,b,c,n,d;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d %d %d",&a,&b,&c);
        if(abs(c-a)<abs(c-b)){
            printf("Cat A\n");
        }
        if(abs(c-a)>abs(c-b)){
            printf("Cat B\n");
        }
        if(abs(c-a)==abs(c-b)){
            printf("Mouse C\n");
        }
    }
}