#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
    int i,n,k;
    char *a;
    scanf("%d",&n);
    a = malloc(sizeof(char)*n);
    scanf("%s",a);
    scanf("%d",&k);
    for(i=0;i< a[i] != '\0';i++){
        if(a[i]>='a' && a[i]<='z'){
            a[i] = a[i] + k;
        }      
    }
    printf("%s",a);
}