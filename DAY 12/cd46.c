#include <stdio.h>

int arm(int n)
{
    int sum = 0,r,t = n;

    while(t > 0)
    {
        r = t % 10;
        sum += r * r * r;
        t /= 10;
    }

    return (sum == n);
}

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if(arm(num))
        printf("Armstrong Number");
    else
        printf("Not an Armstrong Number");

    return 0;
}