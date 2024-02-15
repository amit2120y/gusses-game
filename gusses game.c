#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int number, guess, attempts = 0;

    // Seed the random number generator
    srand(time(0));

    // Generate a random number between 1 and 100
    number = rand() % 100 + 1;

    printf("Welcome to the Guessing Game!\n");
    printf("Try to guess the number between 1 and 100.\n");

    do {
        // Get user input
        printf("Enter your guess: ");
        scanf("%d", &guess);

        // Increment the number of attempts
        attempts++;

        // Check if the guess is correct, too high, or too low
        if (guess == number) {
            printf("Congratulations! You guessed the number in %d attempts.\n", attempts);
        } else if (guess < number) {
            printf("Too low! Try again.\n");
        } else {
            printf("Too high! Try again.\n");
        }

    } while (guess != number);

    return 0;
}
