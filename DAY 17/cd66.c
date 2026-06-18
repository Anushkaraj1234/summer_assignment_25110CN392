#include <stdio.h>
int main() {
    int a[100], b[100], c[200];
    int n1,n2,i,j,k=0,f;
    printf("Enter the elements of both arrays");

    scanf("%d%d",&n1,&n2);
    printf("Enter the elements of the first array");

    for(i=0;i<n1;i++)
        scanf("%d",&a[i]);

    printf("Enter the elements of the second array");
    for(i=0;i<n2;i++)
        scanf("%d",&b[i]);

    for(i=0;i<n1;i++)
        c[k++] = a[i];

    for(i=0;i<n2;i++) {
        f = 0;
        for(j=0;j<k;j++) {
            if(b[i] == c[j])
                f= 1;
        }
        if(f== 0)
            c[k++] = b[i];
    }

    for(i=0;i<k;i++)
        printf("%d ", c[i]);

    return 0;
}