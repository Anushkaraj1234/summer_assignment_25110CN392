#include <stdio.h>

int main() {
    int n,l,c= 0;

    printf("Enter size of array:");
    scanf("%d", &n);
    int a[n];
    printf("Enter array elements\n");
    for(int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    printf("Enter the element ");
    scanf("%d", &l);

    for(int i = 0; i < n; i++) {
        if(a[i]==l)
            c++;
    }
    printf("Frequency of %d = %d", l, c);
    return 0;
}