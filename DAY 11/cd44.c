#include <stdio.h>

long long factorial(int n)
{
    long long p=1;
    int i;

    for(i = 1; i <= n; i++)
    {
        p= p*i;
    }

    return p;
}

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Factorial of the number = %lld", factorial(n));

    return 0;
}