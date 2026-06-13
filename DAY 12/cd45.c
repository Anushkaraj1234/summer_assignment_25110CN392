#include <stdio.h>

int pal(int n)
{
    int r = 0,t=n;

    while(t > 0)
    {
        r=r*10 + t % 10;
        t/= 10;
    }

    return (r== n);
}

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if(pal(num))
        printf("Palindrome Number");
    else
        printf("Not a Palindrome Number");

    return 0;
}