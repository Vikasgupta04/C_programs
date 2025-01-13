// Find exact power of 2 of a given number using bitwise operator
#include <stdio.h>
int main()
{
    int num, power = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num > 0 && (num & (num - 1)) == 0)
    {
        while (num > 1)
        {
            num >>= 1;
            power++;
        }
        printf("The number is 2^%d\n", power);
    }
    else
    {
        printf("The number is not a power of 2\n");
    }
    return 0;
}
