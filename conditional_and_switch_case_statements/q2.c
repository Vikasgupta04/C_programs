// Write a program to calculate the monthly telephone bills as per the following rule.
#include <stdio.h>

int main()
{
    int calls;
    double bill;
    printf("Enter the number of calls: ");
    scanf("%d", &calls);

    if (calls <= 50)
    {
        bill = 100;
    }
    else if (calls <= 100)
    {
        bill = 100 + 0.80 * (calls - 50);
    }
    else if (calls <= 200)
    {
        bill = 100 + 0.80 * 50 + 0.60 * (calls - 100);
    }
    else
    {
        bill = 100 + 0.80 * 50 + 0.60 * 100 + 0.40 * (calls - 200);
    }

    printf("The total telephone bill is: Rs. %.2lf\n", bill);
    return 0;
}
