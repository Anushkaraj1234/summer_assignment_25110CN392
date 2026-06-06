#include <stdio.h>
int main(){
    int n,d,b=0,c=1;
    printf("Enter the number");
    scanf("%d",&n);
    while(n>0){
        d=n%10;
        b=b+d*c;
        c=c*2;
        n=n/10;

    }
    printf("DECIMAL NUMBER IS %d",b);
    return 0;
}