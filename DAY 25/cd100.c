#include <stdio.h>
#include <string.h>

int main() {
    char w[20][50], t[50];
    int n, i, j;

    printf("Enter number of words: ");
    scanf("%d", &n);

    printf("Enter words:\n");

    for(i = 0; i < n; i++)
        scanf("%s", w[i]);

    for(i = 0; i < n - 1; i++) {
        for(j = i + 1; j < n; j++) {
            if(strlen(w[i]) > strlen(w[j])) {
                strcpy(t, w[i]);
                strcpy(w[i], w[j]);
                strcpy(w[j], t);
            }
        }
    }

    printf("Words sorted by length:\n");

    for(i = 0; i < n; i++)
        printf("%s\n", w[i]);

    return 0;
}