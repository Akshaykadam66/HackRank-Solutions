#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
    int i,j,d=0,m,n,c1=0,c2=0,lens1;
    char s1[10000],s2[10000],key;
    scanf("%s",s1);
    scanf("%s",s2);
    lens1 = strlen(s1);
    for(i=0;i<lens1;i++){
        key = s1[i];
        for(m=0;m<lens1;m++){
            if(key==s1[m]){
                c1+=1;
                s1[m]='0';
            }
        }    
        for(n=0;strlen(s2);n++){
            if(key==s2[n]){
                c2+=1;
                s2[n]='0';
            }
        }
        d+=abs(c1-c2);
        c1=0;
        c2=0;
    }
    printf("%d",d);
}

