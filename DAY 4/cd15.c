#include <stdio.h>
int main(){
    int m,l, n,c,r,sum=0 ;
    printf("enter the number");
    scanf("%d",&n);
    c=0;
    m=n;
    l=n;
    while(n>0){
        n=n/10;
        c=c+1;
    }
    while(m>0){
        r=m%10;
        int p=1;
        for(int i=0;i<c;i++){
            p=p*r;
        }
    sum=sum+p;
    m=m/10;
    }
    if(sum==l){
        printf("ARMSTRONG NUMBER");
    }
    else{
        printf("NOT A ARMSTRONG NUMBER");
    }
    return 0;
}