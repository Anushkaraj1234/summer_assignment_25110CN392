#include <stdio.h>
int main(){
    int n,p,c,i;
    printf("Enter the number and the power");
    scanf("%d%d",&n,&p);
    c=1;
    for(i=1;i<=p;i++){
        c=c*n;
    }
    printf("RESULT IS %d",c);
    return 0;
}

