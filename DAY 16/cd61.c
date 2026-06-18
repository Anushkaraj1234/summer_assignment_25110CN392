#include <stdio.h>
int main() {
    int n, i, sum = 0, t= 0;
    int a[100];
    printf("Enter the no. of elements ");
    scanf("%d",&n);
    for(i = 0; i < n-1; i++) {
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
    t= n * (n + 1) / 2;
    printf("Missing number = %d", t-sum);
    return 0;
}