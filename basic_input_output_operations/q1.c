// Write a program to input and add two numbers
#include <stdio.h>
int main()
{
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    printf("Sum of %d and %d is %d\n", num1, num2, num1 + num2);
    return 0;
}