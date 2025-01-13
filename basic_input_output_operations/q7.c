// Write a program to Calculate Compound Interest
#include <stdio.h>
#include <math.h>

int main()
{
    double p, r, t, cI;
    printf("Enter principal, rate (percentage), and time (years) separated by spaces: ");
    scanf("%lf %lf %lf", &p, &r, &t);
    cI = p * pow((1 + r / 100), t) - p;
    printf("The compound interest is: %.2lf\n", cI);
    return 0;
}
