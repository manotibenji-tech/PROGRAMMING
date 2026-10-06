/*
Author:Benjamin Manoti
Reg Number:BCS-O5-0064/2026
Description:GUESSING GAME 
Date:4/O9/2026
Version:
*/


#include <stdio.h>

int main() {
    // Secret number between 1 and 20
    int secretNumber = 14; 
    int guess;
    int attempts = 0;

    printf("=== Number Guessing Game ===\n");
    printf("I have picked a secret number between 1 and 20. Try to guess it!\n\n");

    // Loop until the correct number is guessed
    while (1) {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        attempts++;

        if (guess > secretNumber) {
            printf("Too high!\n");
        } else if (guess < secretNumber) {
            printf("Too low!\n");
        } else {
            printf("Congratulations!\n");
            printf("You guessed the secret number in %d attempts!\n", attempts);
            break;
        }
    }

    return 0;
}