#include <stdio.h>
int main(){
    int sum=0,n,i;
    printf("Enter the number");
    scanf("%d",&n);
    for(i=1;i<n;i++){
        if(n%i==0){
            sum=sum+i;
        }
    }
    if(sum==n){
        printf("PERFECT NUMBER");
    }
    else{
        printf("NOT A PERFECT NUMBER");
    }
    return 0;
}