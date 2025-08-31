// Write a program to find the roots of a quadratic equation and categorize them.

/*
Sample Test Cases:
Input 1:
1 -3 2
Output 1:
Roots are real and different: 2, 1

Input 2:
1 -2 1
Output 2:
Roots are real and same: 1

Input 3:
1 2 5
Output 3:
Roots are complex

*/
#include<stdio.h>
#include<math.h>

int main()
{
    float a, b, c, D ,r1 ,r2;
    printf("enter value for a for [a]x^2 + [b]x + [c]: ");
    scanf("%f", &a);
    printf("enter value for b for [a]x^2 + [b]x + [c]: ");
    scanf("%f", &b);
    printf("enter value for c for [a]x^2 + [b]x + [c]: ");
    scanf("%f", &c);
    D= ((b*b)-(4*a*c));
    if(D > 0)
    {
        r1 = ((-b)+(pow(D, 0.5))) / (2*a);
        r2 = ((-b)-(pow(D, 0.5))) / (2*a);
        printf("Roots are real and different: %.0f, %.0f", r1, r2);
    }
    else if(D == 0)
    {
        r1 = r2 = -b / (2*a);
        printf("Roots are real and same: %.0f", r1);
    }
    else
    {
        printf("Roots are complex\n");
    }
    
}
    

