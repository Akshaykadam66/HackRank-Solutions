#include<stdio.h>
#include<string.h>
int main(){
    int n,i,j,c=0,m;
    char a[10000],s[]="hackerrank";
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%s",a);
        for(j=0,m=0;j<strlen(a) && m<strlen(s);j++){    
            if(a[j]==s[m]){
                m+=1;
            }
        }
        if(m==strlen(s)){
            printf("YES\n");
        }else{
            printf("NO\n");
        }
     }
}
