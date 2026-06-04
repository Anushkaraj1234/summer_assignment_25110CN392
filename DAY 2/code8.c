#include <stdio.h>
int main(){
    int n,sum=0,r,m;
    printf("enter the number");
    scanf("%d" ,&n);
    m=n;
    while(n>0){
        r=n%10;
        sum=sum*10+r;
        n=n/10;   
    }
    if(m==sum){
        printf("palindrome number");
    }
    else{
        printf("not a palindrome number");
    }
    return 0;
}