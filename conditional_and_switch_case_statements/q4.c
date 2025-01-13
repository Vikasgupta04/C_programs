// Write a program that estimated the price of rings for an online shop that sells rings with custom engravings. The online shop has the following price structure: Gold plated rings have a base cost of Rs. 500, and you charge 70.30 per engraved unit. Solid gold rings have a base cost of Rs. 1000, and you charge 10.40 per engraved unit. Silver plated rings have a base cost of Rs. 300, and you charge 5.10 per engraved unit. Find the total cost as per the ring purchase by customer.
#include <stdio.h>

int main()
{
    int materialType, numEngravings;
    double totalCost;
    printf("Select the type of ring:\n");
    printf("1. Gold plated\n");
    printf("2. Solid gold\n");
    printf("3. Silver plated\n");
    printf("Enter the material type (1/2/3): ");
    scanf("%d", &materialType);
    printf("Enter the number of engravings: ");
    scanf("%d", &numEngravings);

    if (materialType == 1)
    {
        totalCost = 500 + 70.30 * numEngravings;
    }
    else if (materialType == 2)
    {
        totalCost = 1000 + 10.40 * numEngravings;
    }
    else if (materialType == 3)
    {
        totalCost = 300 + 5.10 * numEngravings;
    }
    else
    {
        printf("Invalid material type!\n");
        return 1;
    }

    printf("The total cost of the ring is: Rs. %.2lf\n", totalCost);

    return 0;
}
