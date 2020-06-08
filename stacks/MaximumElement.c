#include<stdio.h>
#include<string.h>
int main(){
    int n,i,j=-1,k,data,m,max=0;
    int a[100000];
    memset(a,00,sizeof(int)*100000);
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&k);
        if(k==1){
            scanf("%d",&data);
        }
        if(k==1){
            j+=1;
            a[j]=data;
        }else if(k==2){
            a[j]=00;
            j-=1;
        }else if(k==3){
            m=0,max=0;       
            while(a[m]!=00){
                
                if(a[m]>max){
                    max=a[m];
                }
                m+=1;
            }
            printf("%d\n",max);
        }
    }
}
