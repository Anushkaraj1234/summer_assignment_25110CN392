#include <stdio.h>

int main() {
    int n,j,l= 0;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int a[n];
    printf("Enter array elements:\n");
    for(int i = 0; i< n; i++) {
        scanf("%d", &a[i]);
    }
    printf("Enter element to search: ");
    scanf("%d", &j);

    for(int i = 0;i < n;i++) {
        if(a[i] == j) {
            printf("Element found at position %d",i+1);
            l = 1;
            break;
        }
    }
    if(l == 0)
        printf("Element not found");
    return 0;
}