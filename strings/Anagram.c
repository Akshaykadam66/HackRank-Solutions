#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    int n,i,j,l,k,c=0;
    char s[100000],temp[100000],*p;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%s",s);
        l=strlen(s);
        if(l%2!=0){
            printf("-1\n");
            continue;
        }
        j=0;
        for(k=l/2;k<l;k++){
            temp[j++]=s[k];
        } 
        for(j=0;j<l/2;j++){
            p=strchr(temp,s[j]);
            if(p){
                *p = '0';
            }else{
                c+=1;
            }
        }
        printf("%d\n",c);
        c=0;
        memset(temp,'\0',sizeof(int)*l);
    }
}