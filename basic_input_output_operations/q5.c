// Write a program to determine the roots of quadratic equation
#include <stdio.h>
#include <math.h>

int main()
{
    double a, b, c, d, r1, r2;

    printf("Enter coefficients a, b, and c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    d = b * b - 4 * a * c;

    if (d > 0)
    {
        r1 = (-b + sqrt(d)) / (2 * a);
        r2 = (-b - sqrt(d)) / (2 * a);
        printf("Roots are real and distinct: %.2lf and %.2lf\n", r1, r2);
    }
    else if (d == 0)
    {
        r1 = -b / (2 * a);
        printf("Roots are real and equal: %.2lf\n", r1);
    }
    else
    {
        double realPart = -b / (2 * a);
        double imagPart = sqrt(-d) / (2 * a);
        printf("Roots are complex: %.2lf + %.2lfi and %.2lf - %.2lfi\n", realPart, imagPart, realPart, imagPart);
    }
    return 0;
}
