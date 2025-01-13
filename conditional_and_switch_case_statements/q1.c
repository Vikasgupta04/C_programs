// Write a program to input the annual taxable income and compute the tax according to the given condition
#include <stdio.h>

int main()
{
    double income, tax;
    printf("Enter the annual taxable income: ");
    scanf("%lf", &income);
    if (income <= 100000)
    {
        tax = 0;
    }
    else if (income <= 150000)
    {
        tax = 0.1 * (income - 100000);
    }
    else if (income <= 250000)
    {
        tax = 5000 + 0.2 * (income - 150000);
    }
    else
    {
        tax = 25000 + 0.3 * (income - 250000);
    }
    printf("The calculated tax is: Rs. %.2lf\n", tax);
    return 0;
}
