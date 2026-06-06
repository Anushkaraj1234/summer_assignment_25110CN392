#include <stdio.h>
int main(){
    int n,d,c=0;
    printf("Enter the number");
    scanf("%d",&n);
    while(n>0){
        d=n%10;
        if(d==1){
            c=c+1;
        }
        n=n/10;
    }
    printf("NUMBER OF SETS BIT IS %d",c);
    return 0;
}
    