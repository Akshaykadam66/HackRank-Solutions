// https://www.hackerrank.com/challenges/two-strings/problem?isFullScreen=true

#include<stdio.h>
#include<string.h>
int main(){
    int n,i,j,flag=0;
    char s1[100000],s2[100000];
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%s",s1);
        scanf("%s",s2);
        for(j=0;j<strlen(s1);j++){
            if(strchr(s2,s1[j])){
                printf("YES\n");
                flag=1;
                break;
            }
        }
        if(flag!=1){
            printf("NO\n");
        }
        flag=0; 
    }
}