#include <stdio.h>
int main() {
    int a[100], n, i, j, sum;
    printf("Enter the n0. of elements:");

    scanf("%d",&n);

    for(i = 0; i < n; i++)
        scanf("%d",&a[i]);
    printf("Enter the target sum");

    scanf("%d",&sum);

    for(i = 0; i < n; i++) {
        for(j = i+1; j < n; j++) {
            if(a[i] + a[j] == sum)
                printf("%d %d\n", a[i], a[j]);
        }
    }

    return 0;
}