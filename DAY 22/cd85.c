#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    int f= 1;

    printf("Enter a string: ");
    scanf("%s", s);

    int len = strlen(s);

    for (int i = 0; i < len / 2; i++) {
        if (s[i] != s[len-i-1]) {
            f= 0;
            break;
        }
    }

    if (f)
        printf("Palindrome");
    else
        printf("Not Palindrome");

    return 0;
}