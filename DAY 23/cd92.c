#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    int f[256] = {0};
    int max = 0;
    char ch;

    printf("Enter a string: ");
    fgets(s, sizeof(s), stdin);

    for(int i = 0; s[i] != '\0'; i++)
        f[(unsigned char)s[i]]++;

    for(int i = 0; i < 256; i++) {
        if(f[i] > max) {
            max = f[i];
            ch = i;
        }
    }

    printf("Maximum occurring character:- %c", ch);
    return 0;
}