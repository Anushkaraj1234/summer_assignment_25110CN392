#include <stdio.h>

int main()
{
    int n, a[100];
    int e= 0, o= 0;

    printf("Enter size of array: ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for(int i = 0; i < n; i++)
    {
        if(a[i] % 2 == 0)
            e++;
        else
            o++;
    }

    printf("Even Elements = %d\n", e);
    printf("Odd Elements = %d", o);

    return 0;
}