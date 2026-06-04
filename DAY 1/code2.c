#include <stdio.h>
int main(){
    int i,n,p;
    printf("enter the number");
    scanf("%d" ,&n);
    for( i=1;i<=10;i++){
        p=n*i;
        printf("%d\n",p);
    }
    
    return 0;

    
}