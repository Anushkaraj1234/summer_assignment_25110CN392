#include <stdio.h>

int main() {
    char s[100];
    int vowels = 0, consonants = 0;

    printf("Enter a string: ");
    fgets(s, sizeof(s), stdin);

    for (int i = 0; s[i] != '\0'; i++) {
        char ch = s[i];

        if (ch >= 'A' && ch <= 'Z')
            ch += 32;

        if (ch >= 'a' && ch <= 'z') {
            if (ch == 'a'|| ch == 'e'||ch == 'i'||ch =='o'|| ch =='u')
                vowels++;
            else
                consonants++;
        }
    }

    printf("Vowels = %d\n", vowels);
    printf("Consonants = %d", consonants);

    return 0;
}