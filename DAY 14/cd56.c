#include <stdio.h>

int main() {
    int n;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int a[n];
    printf("Enter array elements:\n");
    for(int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    printf("Duplicate elements are:\n");

    for(int i = 0; i < n; i++) {
        for(int j = i + 1;j < n;j++) {
            if(a[i] == a[j]) {
                printf("%d ", a[i]);
                break;
            }
        }
    }
    return 0;
}