#include<stdio.h>
#include<string.h>
int main(){
    char a[100000];
    int i,c=0;
    scanf("%s",a);
    for(i=0;i<strlen(a);i++){
        if(a[i]>='A' && a[i]<='Z'){
            c+=1;
        }
    }
    printf("%d",c+1);
}