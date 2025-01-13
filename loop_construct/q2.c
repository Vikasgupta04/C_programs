// Write a program to check whether the number is prime or not.
#include <stdio.h>
#include <math.h>

int main()
{
    int num, i, isPrime = 1;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num <= 1)
    {
        printf("%d is not a prime number.\n", num);
    }
    else
    {
        for (i = 2; i <= sqrt(num); ++i)
        {
            if (num % i == 0)
            {
                isPrime = 0;
                break;
            }
        }
        if (isPrime)
        {
            printf("%d is a prime number.\n", num);
        }
        else
        {
            printf("%d is not a prime number.\n", num);
        }
    }

    return 0;
}
