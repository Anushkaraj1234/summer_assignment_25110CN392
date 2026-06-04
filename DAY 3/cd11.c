#include <stdio.h>
int main(){
    int gcd,i,n1,n2,j;
    printf("Enter the two numbers");
    scanf("%d%d",&n1,&n2);
    if(n1>n2){
        for(i=1;i<=n1;i++){
            if(n1%i==0 && n2%i==0){
                gcd=i;
            
            }  
        }
    }
    else{
        for(i=1;i<=n2;i++){
            if(n1%i==0 && n2%i==0){
                gcd=i;
    
            }
        }
    }
    printf("THE GCD OF THE TWO NUMBERS IS %d",gcd);
    return 0;
    }
