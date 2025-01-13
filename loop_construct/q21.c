// 1 1 1 1 1 1 1
// 1 2 2 2 2 2 1
// 1 2 3 3 3 2 1
// 1 2 3 4 3 2 1
// 1 2 3 3 3 2 1
// 1 2 2 2 2 2 1
// 1 1 1 1 1 1 1

#include <stdio.h>

void printPattern(int n)
{
    int size = 2 * n - 1;
    for (int i = 1; i <= size; i++)
    {
        for (int j = 1; j <= size; j++)
        {
            int x = (i < size - i + 1) ? i : size - i + 1;
            x = (x < j) ? x : j;
            x = (x < size - j + 1) ? x : size - j + 1;
            printf("%d ", x);
        }
        printf("\n");
    }
}

int main()
{
    int t;
    printf("Enter the number of test cases - ");
    scanf("%d", &t);
    while (t--)
    {
        int n;
        printf("Enter the number of rows for test case %d - ", t - t + 1);
        scanf("%d", &n);
        printPattern(n);
        printf("\n");
    }

    return 0;
}
