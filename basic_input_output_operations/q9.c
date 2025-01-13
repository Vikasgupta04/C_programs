// Write a program to input two numbers and find the greatest number using ternary operator.
#include <stdio.h>

int main()
{
    int a, b, greatest;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    greatest = (a > b) ? a : b;
    printf("The greatest number is: %d\n", greatest);
    return 0;
}
