#include <stdio.h>

int main()
{
    int a[100], n, i,k;
    int l, h, mid,f = 0;

    printf("Enter size of the array: ");
    scanf("%d", &n);

    printf("Enter sorted elements: ");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Enter element to search: ");
    scanf("%d", &k);

    l= 0;
    h= n - 1;

    while(l <= h)
    {
        mid = (l+h)/2;

        if(a[mid] == k)
        {
            f= 1;
            break;
        }
        else if(a[mid] <k)
            l= mid + 1;
        else
            h= mid-1;
    }

    if(f)
        printf("Element found at position %d", mid + 1);
    else
        printf("Element not found");

    return 0;
}

