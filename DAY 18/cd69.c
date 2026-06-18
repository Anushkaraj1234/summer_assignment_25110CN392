#include <stdio.h>

int main()
{
    int a[100], n,i,j,t;

    printf("Enter size of the array: ");
    scanf("%d", &n);

    printf("Enter elements: ");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for(i = 0; i < n - 1; i++)
    {
        for(j = 0; j < n - i - 1; j++)
        {
            if(a[j] > a[j + 1])
            {
                t= a[j];
                a[j] = a[j + 1];
                a[j + 1] = t;
            }
        }
    }

    printf("SORTED ARRAY: ");
    for(i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}