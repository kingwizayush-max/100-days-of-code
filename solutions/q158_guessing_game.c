#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int secretNumber, guess, attempts = 0;
    
    // Seed random number generator
    srand(time(NULL));
    
    // Generate random number between 1 and 100
    secretNumber = rand() % 100 + 1;
    
    printf("Welcome to the Number Guessing Game!\n");
    printf("I'm thinking of a number between 1 and 100.\n\n");
    
    // Guessing loop
    while (1) {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        attempts++;
        
        if (guess == secretNumber) {
            printf("Congratulations! You guessed it in %d attempts!\n", attempts);
            break;
        } else if (guess < secretNumber) {
            printf("Too low! Try again.\n");
        } else {
            printf("Too high! Try again.\n");
        }
    }
    
    return 0;
}

