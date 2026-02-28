#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    printf("----------- Number Guessing Game -----------\n");

    srand(time(0));
    int r = rand() % 11;   // random number between 0 and 10
    int guess = 1, user_guess;

    printf("Guess the number between 0 and 10: ");
    scanf("%d", &user_guess);

    while (user_guess != r)
    {
        guess++;

        if (user_guess < r)
        {
            printf("Higher number please: ");
        }
        else
        {
            printf("Lower number please: ");
        }
        scanf("%d", &user_guess);
    }

    printf("\nYou guessed the number in %d attempts!\n", guess);
    printf("Correct number was: %d\n", r);

    return 0;
}