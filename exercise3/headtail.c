#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Initialize the random number generator
    srand(time(0));

    int heads = 0, tails = 0;

    printf("Tossing a coin...\n");

    for (int round = 1; round <= 3; round++) {
        int toss = rand() % 2; // Generate a random number: 0 (Heads) or 1 (Tails)
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
