#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    
    srand(time(0));

    char name[50];
    int heads = 0, tails = 0;

    // Ask for the user's name
    printf("Enter your name: ");
    scanf("%s", name);

    // Greet the user
    printf("Hello, %s! Let's start the coin tossing game.\n\n", name);

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

    return 0;
}
