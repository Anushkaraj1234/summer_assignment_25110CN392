#include <stdio.h>
int main(){
    int m,n,i;
    int t1=0,t2=1,nextterm;
    printf("Enter the term which you have to find");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        m=t1;
        nextterm=t1+t2;
        t1=t2;
        t2=nextterm;
    }
printf("%d",m);
    return 0;
}
