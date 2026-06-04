#include <stdio.h>
int main(){
    int c,m,i,r,start,end,n;
    printf("Enter the range ");
    scanf("%d%d",&start,&end);
    for(i=start;i<=end;i++){
        n=i;
        m=i;
        c=0;
        int h=i;
        while(h>0){
            h=h/10;
            c=c+1;
        }
        int sum=0;
        while(m>0){

            r=m%10;
            int p=1;
        
            for(int j=0;j<c;j++){
                p=p*r;
            }
            sum=sum+p;
            m=m/10;

        }
        if(sum==n){
            printf("%d\n",sum);
        }
    }
    return 0;
}
