#include <stdio.h>

int main() {
    int a[10][10],b[10][10],d[10][10];
    int i, j, r, c;

    printf("Enter rows and columns of matrix: ");
    scanf("%d %d", &r, &c);

    printf("Enter first matrix:\n");
    for(i = 0; i < r; i++)
        for(j=0;j<c; j++)
            scanf("%d", &a[i][j]);

    printf("Enter second matrix:\n");
    for(i = 0; i < r; i++)
        for(j = 0; j < c; j++)
            scanf("%d", &b[i][j]);

    for(i = 0; i < r; i++)
        for(j = 0; j < c; j++)
            d[i][j] = a[i][j] + b[i][j];

    printf("Addition of matrices:\n");
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++)
            printf("%d ", d[i][j]);
        printf("\n");
    }

    return 0;
}