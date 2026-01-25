/* Guess the number challenge */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // randNum = rand() % (max - min + 1) + min;
    int randNum = rand() % 20 + 1; // rand from 1 - 20
    int guesses = 10;
    int userGuess;

    printf("Welcome to the Guessing my number game!\n");
    printf("I have chosen a number from 1 - 20, try to guess it.\n");

    while (guesses > 0) {
        printf("\n\nYou have %d guesses left.\n", guesses);
        printf("Enter your guess: ");
        scanf("%d", &userGuess);

        if (userGuess == randNum) {
            printf("Yay!! You got it!");
            break; //using return; instead skips Game Over line.
        } else {
            if (userGuess < randNum) {
                printf("Sorry, %d is wrong. My number is more than that", userGuess);                
            } else if (userGuess > randNum) {
                printf("Sorry, %d is wrong. My number is less than that", userGuess);
            }
        }
        guesses -= 1;
    }
    printf("\n\n\nGame Over.\n");
    return 0;
}