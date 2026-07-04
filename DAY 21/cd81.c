#include <stdio.h>

int main() {
    char s[100];
    int i = 0;

    printf("Enter a string: ");
    fgets(s, sizeof(s), stdin);

    while (s[i] !='\0')
        i++;

    if (s[i-1] =='\n')
        i--;

    printf("Length of the string = %d", i);

    return 0;
}