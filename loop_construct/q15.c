//     *
//    **
//   * *
//  *  *
// *****
#include <stdio.h>

int main()
{
    int n;
    printf("Enter the number of rows - ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j < n; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= i; j++)
        {
            if (j == 1 || j == i || i == n)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
