#include <stdio.h>
int main(){
    int i,n,sum=0;
    printf("enter the number");
    scanf("%d" ,&n);
    for( i=1;i<=n;i++){
        sum=sum+i;
    }
printf("the sum of the first %d is %d",n,sum);
    
}