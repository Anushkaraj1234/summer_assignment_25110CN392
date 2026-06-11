#include <stdio.h>
int prime(int n){

    int c, i;
    c=0;
    for(i=1;i<=n;i++){
        if(n%i==0){
            c=c+1;
        }

    }
    return c;
}


int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d",&n);

    if(prime(n)==2)
        printf("Prime Number");
    else
        printf("Not Prime Number");

    return 0;
}