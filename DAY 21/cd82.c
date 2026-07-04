#include <stdio.h>
#include <string.h>

int main() {
    char s[100], t;

    printf("Enter a string: ");
    fgets(s, sizeof(s), stdin);

    int len = strlen(s);

    if (s[len - 1] == '\n') {
        s[len - 1] = '\0';
        len--;
    }

    for (int i = 0; i < len / 2; i++) {
        t= s[i];
        s[i] = s[len - i - 1];
        s[len - i - 1] = t;
    }

    printf("Reversed String = %s", s);

    return 0;
}