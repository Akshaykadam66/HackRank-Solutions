#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
    int n,i,k,c=0,j;
    int num=0,lc=0,uc=0,sc=0;
    char *a;
    scanf("%d", &n);
    a = malloc(sizeof(char)*n);
    scanf("%s",a);
    k = strlen(a);
    if(k<6){
        j = 6 - k;
        // printf("%d",j);
    }
    for(i=0;i<k;i++){
        if(strchr("0123456789",a[i])){
            num+=1;
        }
        if(strchr("abcdefghijklmnopqrstuvwxyz",a[i])){
            lc+=1;
        }
        if(strchr("ABCDEFGHIJKLMNOPQRSTUVWXYZ",a[i])){
            uc+=1;
        }
        if(strchr("!@#$%^&*()-+",a[i])){
            sc+=1;
        }
    }
    if(num==0){
        c+=1;
    }
    if(lc==0){
        c+=1;
    }
    if(uc==0){
        c+=1;
    }
    if(sc==0){
        c+=1;
    }
    if(k+c >= 6){
        printf("%d", c);
    }
    else{
        printf("%d",j);
    }
   
}