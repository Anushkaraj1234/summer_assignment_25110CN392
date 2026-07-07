#include <stdio.h>
#include <string.h>

int main() {
    char s[100];

    printf("Enter a string: ");
    scanf("%s", s);

    int i = 0;

    while(s[i] != '\0') {
        int c= 1;

        while(s[i] == s[i + 1]){
            c++;
            i++;
        }

        printf("%c%d", s[i],c);
        i++;
    }

    return 0;
}