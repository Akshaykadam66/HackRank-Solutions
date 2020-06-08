// https://www.hackerrank.com/challenges/funny-string/problem?isFullScreen=true

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
    int n,i,j,k,m,v=0,sub1,sub2,x,c=0;
    scanf("%d",&n);
    int as[n][10000],rs[n][10000];
    char a[n][10000];
    for(i=0;i<n;i++){
        scanf("%s", a[i]);
    }
    // printf("%s\n",a[j]);
    for(j=0;j<n;j++){
        for(k=0;k<strlen(a[j]);k++){
            as[j][k]=a[j][k];
        }
        // printf("%d\n",as[j][0]);
        for(m=strlen(a[j])-1;m>=0;m--){
            rs[j][v]=as[j][m];
            v+=1;
        }
        v=0;
        // printf("%d\n",rs[j][0]);
        for(x=0;x<strlen(a[j])-1;x++){
            sub1=abs(as[j][x]-as[j][x+1]);
            sub2=abs(rs[j][x]-rs[j][x+1]);
            if(sub1==sub2){
                c+=1;
            }
        }
        // printf("%d\n",c);
        if(c==strlen(a[j])-1){
            printf("Funny\n");
        }else{
            printf("Not Funny\n");
        }
        c=0;
    }


}