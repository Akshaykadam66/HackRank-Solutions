#include<stdio.h>
#include<string.h>
int main(){
    int n,i,j,k,m,d=0,p;
    char s[1000000],*p2;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%s\n",s);
        m = strlen(s);
        k = m-1;
        m = m/2;
        printf("%d\n",m);
        if(m%2!=0){
            p2=s+m+1;
        }else{
            p2=s+m;
        }
        printf("%s\n",p2); 
        printf("k vale %d\n",k);
        for(j=0;j<m;j++){
            if(s[j]==s[k]){
                s[j]='0';
                s[k]='0';
                printf("%s\n",s);
            }
            else{
                if(!strchr(p2,s[j])){
                    d+=1;
                    s[j]='0';
                }
                for(p=0;p<m;p++){
                    if(s[p]!=s[k]){
                        d+=1;
                        s[k]='0';
                    }
                }
            }
            k-=1;
        }
        if(d==0){
            printf("-1\n");
        }else{
            printf("%d\n",d);
        }
    }
    printf("%s\n",s);
}