#include <stdio.h>
int main(){
    int lcm, gcd,i,n1,n2,j;
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
    
    lcm=(n1*n2)/gcd;
    printf("THE LCM OF BOTH NUMBERS IS %d",lcm);
    return 0;
}