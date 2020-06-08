#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
    int a[26],i,len,max=0;
    char s[15];
    for(i=0;i<26;i++){
        scanf("%d",a+i);
    }
    scanf("%s",s);
    len = strlen(s);
    for(i=0;i<len;i++){
        if(max<a[s[i]-97]){
            max = a[s[i]-97];
        } 
    }
    printf("%d",len*max);
}