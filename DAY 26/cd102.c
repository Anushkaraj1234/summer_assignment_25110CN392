#include <stdio.h>

int main() {
    char name[50];
    int a;

    printf("Enter your name: ");
    scanf("%s",name);

    printf("Enter your age: ");
    scanf("%d", &a);

    if (a>= 18)
        printf("%s is eligible to vote.\n", name);
    else
        printf("%s is not eligible to vote.\n", name);

    return 0;
}