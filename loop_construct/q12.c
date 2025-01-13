// Square Root
#include <stdio.h>

int mySqrt(int x)
{
    int i = 1;
    while (i * i <= x)
    {
        i++;
    }
    return i - 1;
}

int main()
{
    int x;
    printf("Enter a non-negative integer: ");
    scanf("%d", &x);

    printf("Square root of %d is: %d\n", x, mySqrt(x));
    return 0;
}
