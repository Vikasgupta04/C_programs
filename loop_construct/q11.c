// Write a program in C to print arithmetic progression and its sum.
#include <stdio.h>

int main()
{
    int a, d, n, an, sum = 0;
    printf("Enter the first term (a) of the A.P.: ");
    scanf("%d", &a);
    printf("Enter the common difference (d): ");
    scanf("%d", &d);
    printf("Enter the number of terms (n): ");
    scanf("%d", &n);
    an = a + (n - 1) * d;
    printf("Arithmetic Progression: ");
    for (int i = 0; i < n; i++)
    {
        int term = a + i * d;
        printf("%d ", term);
        sum += term;
    }
    printf("\nThe sum of the AP series is: %d\n", sum);
    printf("The last term (an) of the A.P. is: %d\n", an);

    return 0;
}
