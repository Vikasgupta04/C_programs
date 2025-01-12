// Write a program to Calculate Simple Interest
#include <stdio.h>

int main()
{
    double p, r, t, sI;
    printf("Enter principal, rate of interest, and time (separated by spaces): ");
    scanf("%lf %lf %lf", &p, &r, &t);
    sI = (p * r * t) / 100;
    printf("The simple interest is: %.2lf\n", sI);
    return 0;
}
