#include <stdio.h>

int main() {
    char s[200];
    int w= 1;

    printf("Enter a sentence: ");
    fgets(s, sizeof(s), stdin);

    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] == ' ')
            w++;
    }

    printf("Words = %d", w);

    return 0;
}