#include <stdio.h>
int main(){
    int n,c=0;
    printf("enter the number");
    scanf("%d" ,&n);
    while(n>0){
        n=n/10;
        c=c+1;
        
    }
    printf("the number of the digits is %d",c);
    return 0;
}