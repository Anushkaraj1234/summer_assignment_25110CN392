#include <stdio.h>

int main()
{
    int a[100], n, i, j, t, m;

    printf("Enter size of the array: ");
    scanf("%d", &n);

    printf("Enter elements of the array: ");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for(i = 0; i < n - 1; i++)
    {
        m= i;

        for(j = i + 1; j < n; j++)
        {
            if(a[j] < a[m])
                m = j;
        }

        t = a[i];
        a[i] = a[m];
        a[m] = t;
    }

    printf("SORTED ARRAY : ");
    for(i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}