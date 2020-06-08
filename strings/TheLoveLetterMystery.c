// https://www.hackerrank.com/challenges/the-love-letter-mystery/problem?isFullScreen=true

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
    int n,i,j,k,m,t=0,d;
    char s[10000];
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%s",s);
        k=strlen(s);
        m=k-1;
        for(j=0;j<k/2;j++){
            if(s[j]!=s[m]){
                t+=abs(s[j]-s[m]);
            }
            m-=1;
        }
        printf("%d\n",t);
        t=0;
    }
}