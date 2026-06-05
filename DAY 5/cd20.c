#include <stdio.h>
int main(){
    int n,i,m=0,c,j;
    printf("Enter the number");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        if(n%i==0){
            c=0;
            for(j=1;j<=i;j++){
            
                if(i%j==0){
                    c=c+1;
                }
            }
            if(c==2){
                m=i;
            
            }

        }
    }
    printf("THE LARGEST PRIME FACTOR IS %d",m);
    return 0;
}