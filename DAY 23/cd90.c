#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    int f[256] = {0};

    printf("Enter a string: ");
    fgets(s, sizeof(s), stdin);

    for(int i = 0; s[i] != '\0'; i++) {
        if ( f[(unsigned char)s[i]] == 1) {
            printf("First repeating character: %c", s[i]);
            return 0;
        }
        f[(unsigned char)s[i]]++;
    }

    printf("No repeating character found.");
    return 0;
}