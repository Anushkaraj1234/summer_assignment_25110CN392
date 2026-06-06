#include <stdio.h>
int main(){
    int n,d,b=0,c=1;
    printf("Enter the number");
    scanf("%d",&n);
    while(n>0){
        d=n%2;
        n=n/2;
        b=b+c*d;
        c=c*10;

    }
    printf("BINARY NUMBER IS %d",b);
    return 0;

}