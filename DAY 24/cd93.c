#include <stdio.h>
#include <string.h>

int main() {
    char s1[100], s2[100], t[200];

    printf("Enter first string: ");
    scanf("%s", s1);

    printf("Enter second string: ");
    scanf("%s", s2);

    if(strlen(s1) != strlen(s2)) {
        printf("Not Rotation");
        return 0;
    }

    strcpy(t, s1);
    strcat(t, s1);

    if(strstr(t, s2))
        printf("Rotation");
    else
        printf("Not Rotation");

    return 0;
}
