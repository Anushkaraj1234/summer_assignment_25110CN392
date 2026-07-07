#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    int v[256] = {0};

    printf("Enter a string: ");
    fgets(s, sizeof(s), stdin);

    printf("String after removing duplicates: ");

    for(int i = 0; s[i] != '\0'; i++) {
        if(!v[(unsigned char)s[i]]) {
            printf("%c", s[i]);
            v[(unsigned char)s[i]] = 1;
        }
    }

    return 0;
}