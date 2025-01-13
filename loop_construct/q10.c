// Write a program in C language to find harmonic series and its sum up to n.
#include <stdio.h>
int main()
{
    int n;
    float sum = 0.0;
    printf("Enter the range: ");
    scanf("%d", &n);
    printf("Harmonic Sequence is: ");
    for (int i = 1; i <= n; i++)
    {
        if (i == n)
        {
            printf("1/%d", i);
        }
        else
        {
            printf("1/%d + ", i);
        }
        sum += 1.0 / i;
    }
    printf("\nsum of harmonic series: %.6f\n", sum);

    return 0;
}
