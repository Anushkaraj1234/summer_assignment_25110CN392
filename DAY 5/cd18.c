#include <stdio.h>
int main(){
    int sum=0,n,p,m,r,i;
    printf("Enter the number");
    scanf("%d",&n);
    m=n;
    while(n>0){
        r=n%10;
        p=1;
        for(i=1;i<=r;i++){
            p=p*i;
        }
        sum=sum+p;
        n=n/10;
    }
    if(m==sum){
        printf("STRONG NUMBER");
    }
    else{
        printf("NOT A STRONG NUMBER");
    }
    return 0;
}