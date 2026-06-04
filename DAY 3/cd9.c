#include <stdio.h>
int main(){
    int c=0,i,n;
    printf("Enter the number");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        if(n%i==0){
            c=c+1;
        }
    }
    if(c==2){
        printf("PRIME NUMBER");

    }
    else{
        printf("NOT A PRIME NUMBER");
    }
    return 0;
}