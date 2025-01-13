// Write a currency program that tells you how many 500,200,100,50,20,10,5,2 and 1 Rs. notes will be needed for a given amount of money.
#include <stdio.h>

int main()
{
    int amount, notes;
    printf("Enter the amount: ");
    scanf("%d", &amount);

    notes = amount / 500;
    printf("500 Rs. notes: %d\n", notes);
    amount %= 500;

    notes = amount / 200;
    printf("200 Rs. notes: %d\n", notes);
    amount %= 200;

    notes = amount / 100;
    printf("100 Rs. notes: %d\n", notes);
    amount %= 100;

    notes = amount / 50;
    printf("50 Rs. notes: %d\n", notes);
    amount %= 50;

    notes = amount / 20;
    printf("20 Rs. notes: %d\n", notes);
    amount %= 20;

    notes = amount / 10;
    printf("10 Rs. notes: %d\n", notes);
    amount %= 10;

    notes = amount / 5;
    printf("5 Rs. notes: %d\n", notes);
    amount %= 5;

    notes = amount / 2;
    printf("2 Rs. notes: %d\n", notes);
    amount %= 2;

    notes = amount / 1;
    printf("1 Rs. notes: %d\n", notes);

    return 0;
}
