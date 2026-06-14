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
    int l = a[0];
    int second = a[0];
    for(int i= 1;i<n;i++) {
        if(a[i] > l) {
            second= l;
            l = a[i];
        }
        else if(a[i] > second && a[i] != l) {
            second = a[i];
        }
    }

    printf("Second Largest Element = %d",second);
    return 0;
}