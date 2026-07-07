#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    int f[256] = {0};

    printf("Enter a string: ");
    fgets(s, sizeof(s), stdin);

    for(int i = 0; s[i] != '\0'; i++)
        f[(unsigned char)s[i]]++;

    for(int i = 0; s[i] != '\0'; i++) {
        if(f[(unsigned char)s[i]] == 1) {
            printf("First non-repeating character: %c", s[i]);
            return 0;
        }
    }

    printf("No non-repeating character found.");
    return 0;
}