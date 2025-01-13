// Write a program to receive a five - digit no and display as like 24689 : 2 4 6 8 9
#include <stdio.h>

int main()
{
    int num;
    printf("Enter a five-digit number: ");
    scanf("%d", &num);
    if (num < 10000 || num > 99999)
    {
        printf("Please enter a valid five-digit number.\n");
        return 0;
    }

    printf("Digits of the number are:\n");
    printf("%d\n", num / 10000);
    printf("%d\n", (num / 1000) % 10);
    printf("%d\n", (num / 100) % 10);
    printf("%d\n", (num / 10) % 10);
    printf("%d\n", num % 10);

    return 0;
}
