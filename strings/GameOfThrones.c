#include<stdio.h>
#include<string.h>
int main(){
    int i,j,l,c=0,odd=0;
    char a,s[1000000];
    scanf("%s",s);
    l=strlen(s);
    for(i=0;i<l;i++){
        if(s[i]=='0'){
            continue;
        }
        a=s[i];
        for(j=i;j<l;j++){
            if(a==s[j]){
                c+=1;
                s[j]='0';
            }
        }
        if(c%2!=0){
            odd+=1;
        }
        c=0;
    }
    if(odd==0 || odd==1){
        printf("YES\n");
    }
    if(odd>1){
        printf("NO\n");
    }
}