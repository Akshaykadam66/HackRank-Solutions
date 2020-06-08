// https://www.hackerrank.com/challenges/separate-the-numbers/problem?isFullScreen=true
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
    int q,i,val,j;
    int c=0,len,k,x=0;
    char a[32],temp1[32],temp2[32],temp3[32],v;
    scanf("%d", &q);
    for(i=0;i<q;i++){
        scanf("%s",a);
        len = strlen(a);
        v = a[0];
        for(j=0;j<len-1;j++){
            val = a[j] - '0';
            if(val+1 == a[j+1]-'0'){
                c+=1;
            }
            else{
                break;
            }
            
        }
        if(c == len-1){
            printf("YES %c\n",v);
            continue;
        }
        c=0;
        for(j=0;j<len;j+=4){   
            // strncpy(temp1,a,2);
            for(k=j;k<j+2;k++){
                temp1[x]=a[k];
                x+=1;
            }
            for(k=j+2;k<j+4;k++){
                temp2[x]=a[k];
                x+=1;
            }
            if(atoi(temp1)+1 == atoi(temp2)){
                c+=1;
            }
            x=0;
        }
        if(c==len/4){
            printf("YES %c\n",v);
        }
    }    
}