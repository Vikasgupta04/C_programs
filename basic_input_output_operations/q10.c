// Write a program to find odd / even number using ternary operator.
#include <stdio.h>

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    (num % 2 == 0) ? printf("Even\n") : printf("Odd\n");
    return 0;
}
