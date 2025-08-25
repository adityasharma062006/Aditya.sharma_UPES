// Write a program to calculate the area and circumference of a circle given its radius.
// Use the value of π as 3.14.
// Float is used in this program to handle decimal values.

#include <stdio.h>

int main()
{
    float r,PI= 3.14, area, circumference;
    printf("enter the radius of circle: ");
    scanf("%f", &r);
    area = PI * r * r;
    circumference = 2 * PI * r;
    printf("the area of circle is %.2f\n", area);
    printf("the circumference of circle is %.2f\n", circumference);
    return 0;
}