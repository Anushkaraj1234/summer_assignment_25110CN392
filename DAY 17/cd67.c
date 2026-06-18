#include <stdio.h>
int main() {
    int a[100], b[100], n1, n2,i,j;
    printf("Enter the elements of both arrays");

    scanf("%d%d",&n1,&n2);
    printf("Enter the elements of first array:");

    for(i=0;i<n1;i++)
        scanf("%d",&a[i]);
    printf("Enter the elements of second array:");
    for(i=0;i<n2;i++)
        scanf("%d",&b[i]);
    printf("INTERSECTION OF TWO ARRAYS");
    for(i=0;i<n1;i++) {
        for(j=0;j<n2;j++) {
            if(a[i]==b[j])
                printf("%d ",a[i]);
        }
    }

    return 0;
}