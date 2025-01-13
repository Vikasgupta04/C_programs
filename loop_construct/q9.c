// Number Guessing Game
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int target, guess, guessCount = 0;
    srand(time(0));
    target = rand() % 100 + 1;
    printf("Welcome to the Number Guessing Game!\n");
    printf("I have generated a random number between 1 and 100.\n");
    printf("Try to guess the number!\n");

    do
    {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        guessCount++;

        if (guess > target)
        {
            printf("Lower number please.\n");
        }
        else if (guess < target)
        {
            printf("Higher number please.\n");
        }
        else
        {
            printf("Congratulations! You've guessed the correct number %d in %d guesses.\n", target, guessCount);
        }
    } while (guess != target); 

    return 0;
}
