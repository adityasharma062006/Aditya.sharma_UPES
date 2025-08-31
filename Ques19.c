// Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.

/*
Sample Test Cases:
Input 1:
3 3 3
Output 1:
Equilateral

Input 2:
3 3 4
Output 2:
Isosceles

Input 3:
2 3 4
Output 3:
Scalene

*/

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