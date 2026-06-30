// Write a program to Create number guessing game. 

// Approach Used - Take a secret number input, then let the player guess until correct, giving hints each time
// Difficulty Level - Medium
// Concept Used - Use of functions, loops, and if-else conditions

#include <stdio.h>

void numberGuessingGame(int secret);               // Function Declaration

int main() 
{
    int secret;

    printf("Enter a secret number (1 to 100): ");
    scanf("%d", &secret);

    numberGuessingGame(secret);                    // Calling function

    return 0;
}

void numberGuessingGame(int secret)                // Function Definition
{
    int guess, attempts = 0;

    printf("\n--- Number Guessing Game ---\n");

    do {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        attempts++;

        if (guess > secret) 
        {
            printf("Too high! Try again.\n");
        } 
        else if (guess < secret) 
        {
            printf("Too low! Try again.\n");
        } 
        else 
        {
            printf("🎉 Correct! You guessed the number in %d attempts.\n", attempts);
        }
    } while (guess != secret);
}
