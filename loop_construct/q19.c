// A B C D E F G G F E D C B A
//   A B C D E F F E D C B A
//     A B C D E E D C B A
//       A B C D D C B A
//         A B C C B A
//           A B B A
//             A A
//              A

#include <stdio.h>

int main()
{
    int n;
    printf("Enter number of rows - ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf("  ");
        }

        char ch = 'A';
        for (int j = i; j < n; j++)
        {
            printf("%c ", ch++);
        }

        ch -= 1;
        for (int j = 0; j < n - i; j++)
        {
            printf("%c ", ch--);
        }
        printf("\n");
    }

    return 0;
}
