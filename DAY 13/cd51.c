#include <stdio.h>

int main()
{
    int n, a[100], l,s;

    printf("Enter size of array: ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    l = s = a[0];

    for(int i = 1; i < n; i++)
    {
        if(a[i] >l)
            l = a[i];

        if(a[i] < s)
            s = a[i];
    }

    printf("Largest = %d\n", l);
    printf("Smallest = %d", s);

    return 0;
}