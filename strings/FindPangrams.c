#include <stdio.h>
#include <ctype.h>
#include<string.h>
int main(){
    char a[1000];
    int c=0;
    scanf("%[^\n]",a);
    for(int i=0;i<strlen(a);i++){
        if(a[i]!='0' && a[i]!=32){
            c+=1;
        }
        else if(a[i]=='0'){
            continue;
        }    
        for(int k=i+1;k<strlen(a);k++){
            if(tolower(a[k]) == tolower(a[i])){
                a[k] = '0';
            }
        }
    }
    if(c==26){
        printf("pangram");
    }else{
        printf("not pangram");
    }
}
