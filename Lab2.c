#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

int main() {

    srand(time(0));

    int guess;
    int num = (rand() % 10) + 1;
    bool solved = false;

    printf("Guess the number (between 1 and 10). You have 3 attempts.\n");

    for (int i = 0; i < 3; i++) {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        if (guess < num) {
            printf("Too low! Try again.\n");
        } else if (guess > num) {
            printf("Too high! Try again.\n");
        } else if (guess == num) {
            solved = true;
            break;
        }
    }

    if (solved) {
        printf("Congratulations! You guessed the number.\n");
    } else {
        printf("Sorry, you've used all your attempts. The number was: %d\n", num);
    }

    return 0;
}