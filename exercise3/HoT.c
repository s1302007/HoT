#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    
    srand(time(0));

    char name[50];
    int heads = 0, tails = 0;

    // Ask for the user's name
    printf("Who are you: ");
    scanf("%s", name);

    // Greet the user
    printf("Hello, %s!\n", name);

    printf("Tossing a coin...\n");

    for (int round = 1; round <= 3; round++) {
        int toss = rand() % 2;
        if (toss == 0) {
            printf("Round %d: Heads\n", round);
            heads++;
        } else {
            printf("Round %d: Tails\n", round);
            tails++;
        }
    }

    printf("Heads: %d, Tails: %d\n", heads, tails);

    // Print victory or loss message
    if (heads > tails) {
        printf("%s Won!\n", name);
    } else {
        printf("%s Lost!\n", name);
    }

    return 0;
}
