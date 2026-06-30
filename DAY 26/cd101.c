#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int g, n, a = 0;

    srand(time(0));
    n = rand() % 100 + 1;

    printf("Guess a number between 1 and 100\n");

    do {
        printf("Enter your guess: ");
        scanf("%d", &g);
        a++;

        if (g> n)
            printf("Too High!\n");
        else if (g< n)
            printf("Too Low!\n");
        else
            printf("Congratulations! You guessed it in %d attempts.\n", a);

    } while (g!=n);

    return 0;
}