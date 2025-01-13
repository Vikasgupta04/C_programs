// Write a program to find out the value of x raised to the power y, where x and y are positive integers
#include <stdio.h>

int main()
{
    int x, y, result = 1;

    printf("Enter the base number (x): ");
    scanf("%d", &x);
    printf("Enter the exponent number (y): ");
    scanf("%d", &y);
    for (int i = 1; i <= y; ++i)
    {
        result *= x;
    }
    printf("%d raised to the power %d is: %d\n", x, y, result);

    return 0;
}
