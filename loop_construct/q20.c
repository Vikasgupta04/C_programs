//         1
//       2 3 2
//     3 4 5 4 3
//   4 5 6 7 6 5 4
// 5 6 7 8 9 8 7 6 5
//   4 5 6 7 6 5 4
//     3 4 5 4 3
//       2 3 2
//         1

#include <stdio.h>

int main()
{
    int n;
    printf("Enter number of rows - ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            printf("  ");
        }
        for (int j = i; j <= 2 * i - 1; j++)
        {
            printf("%d ", j);
        }
        for (int j = 2 * i - 2; j >= i; j--)
        {
            printf("%d ", j);
        }
        printf("\n");
    }
    for (int i = n - 1; i >= 1; i--)
    {
        for (int j = 1; j <= n - i; j++)
        {
            printf("  ");
        }
        for (int j = i; j <= 2 * i - 1; j++)
        {
            printf("%d ", j);
        }
        for (int j = 2 * i - 2; j >= i; j--)
        {
            printf("%d ", j);
        }
        printf("\n");
    }

    return 0;
}
