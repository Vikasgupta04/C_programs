// Write a program to Calculate Area and Perimeter of a Circle
#include <stdio.h>
int main()
{
    const float PI = 3.14159;
    float radius, perimeter, area;
    printf("Enter the radius of the circle - ");
    scanf("%f", &radius);
    area = PI * radius * radius;
    perimeter = 2 * PI * radius;
    printf("Perimeter - %.2f \nArea - %.2f", perimeter, area);
    return 0;
}