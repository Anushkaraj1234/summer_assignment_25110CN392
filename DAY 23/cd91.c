#include <stdio.h>
#include <string.h>

int main() {
    char s1[100], s2[100];
    int c[256] = {0};

    printf("Enter first string: ");
    scanf("%s", s1);

    printf("Enter second string: ");
    scanf("%s", s2);

    if(strlen(s1) != strlen(s2)) {
        printf("Not Anagrams");
        return 0;
    }

    for(int i = 0; s1[i] != '\0'; i++) {
        c[(unsigned char)s1[i]]++;
        c[(unsigned char)s2[i]]--;
    }

    for(int i = 0; i < 256; i++) {
        if(c[i] != 0) {
            printf("Not Anagrams string");
            return 0;
        }
    }

    printf("Anagrams string");
    return 0;
}