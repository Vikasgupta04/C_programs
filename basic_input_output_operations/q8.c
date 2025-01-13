// Write a program to swap two numbers using third variable, without using third variable, within single statement using comma operator
#include <stdio.h>

int main()
{
    int a, b, temp;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    temp = a;
    a = b;
    b = temp;
    printf("After swapping (using third variable): a = %d, b = %d\n", a, b);

    // Without using a third variable
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("After swapping (without using third variable): a = %d, b = %d\n", a, b);

    // Using a single statement with comma operator
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    (a = a + b, b = a - b, a = a - b);
    printf("After swapping (using comma operator): a = %d, b = %d\n", a, b);

    return 0;
}
