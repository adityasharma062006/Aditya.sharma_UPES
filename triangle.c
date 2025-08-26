/*check if the triangle is valid or not. If the validity is established, do check if the 
triangle is isosceles, equilateral, right angle, or scalene. Take sides of the triangle 
as input from a user.*/

#include <stdio.h>

int main()
{
    int a, b, c;

    printf("enter the length of side a of triangle: ");
    scanf("%d", &a);
    printf("enter the length of side b of triangle: ");
    scanf("%d", &b);
    printf("enter the length of side c of triangle: ");
    scanf("%d", &c);
    if (a + b > c && b + c > a && a + c > b)
    {
        printf("The triangle is valid\n");
    
        if (a == b && b == c)
        {
            printf("The triangle is equilateral\n");
        }
        else if (a == b || b == c || a == c)
        {
            printf("The triangle is isosceles\n");
        }
        else if (a * a == b * b + c * c || b * b == a * a + c * c || c * c == b * b + a * a)
        {
            printf("The triangle is right angle triangle\n");
        }
        else if (a != b && b !=c && c != a )
        {
            printf(" The triangle is scalene\n");
        }
    }
    else 
        {
            printf(" The triangle is invalid\n");
        }
        return 0;
    }