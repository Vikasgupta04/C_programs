#include <stdio.h>

int main()
{
    float temp, converted;
    char choice;

    printf("Enter 'F' to convert Fahrenheit to Celsius or 'C' for Celsius to Fahrenheit: ");
    scanf(" %c", &choice);

    if (choice == 'F' || choice == 'f')
    {
        printf("Enter temperature in Fahrenheit: ");
        scanf("%f", &temp);
        converted = (temp - 32) * 5 / 9;
        printf("Temperature in Celsius: %.2f\n", converted);
    }
    else if (choice == 'C' || choice == 'c')
    {
        printf("Enter temperature in Celsius: ");
        scanf("%f", &temp);
        converted = (temp * 9 / 5) + 32;
        printf("Temperature in Fahrenheit: %.2f\n", converted);
    }
    else
    {
        printf("Invalid choice! Please enter 'F' or 'C'.\n");
    }

    return 0;
}
