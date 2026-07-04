#include <stdio.h>

int main() {
    char s[100], ch;
    int c= 0;

    printf("Enter a string: ");
    fgets(s, sizeof(s), stdin);

    printf("Enter character: ");
    scanf(" %c", &ch);

    for (int i = 0;s[i]!='\0';i++) {
        if (s[i] == ch)
            c++;
    }

    printf("Frequency = %d", c);

    return 0;
}