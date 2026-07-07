#include <stdio.h>
#include <string.h>

int main() {
    char s[200], l[100];
    int i = 0, j = 0, m= 0;
    char word[100];

    printf("Enter a sentence: ");
    fgets(s, sizeof(s), stdin);

    while(1) {
        if(s[i] != ' ' && s[i] != '\0' && s[i] != '\n') {
            word[j++] = s[i];
        } else {
            word[j] = '\0';

            if(j > m) {
                m= j;
                strcpy(l, word);
            }

            j = 0;

            if(s[i] == '\0')
                break;
        }
        i++;
    }

    printf("Longest word: %s", l);

    return 0;
}