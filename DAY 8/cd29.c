#include <stdio.h>

int main() {
    int i, j, n;
    printf("Height of the pyramid ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        for(j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
