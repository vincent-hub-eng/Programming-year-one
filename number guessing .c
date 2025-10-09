/*
name  Vincent mutua 
reg:ct100/g/26230/25
des:game for guessing number 
*/

#include <stdio.h>
#include <stdlib.h> 
#include <time.h>    

int main() {
    int secretNumber, guess, attempts = 0;

    srand(time(0));
    secretNumber = rand() % 11+ 1; 

    printf("Welcome to the Number Guessing Game!\n");

    
    while (1) {
        printf("Enter your guess (1-20): ");
        scanf("%d", &guess);
        attempts++;

        if (guess > secretNumber) {
            printf("Too high!\n");
        } 
        else if (guess < secretNumber) {
            printf("Too low!\n");
        } 
        else {
            printf("Congratulations! You guessed the number.\n");
            printf("Total attempts: %d\n", attempts);
            break; 
        }
    }

    return 0;
}
