// Write a program to input two numbers and display their sum, difference, product, and quotient.

#include <stdio.h>
int main()
{
    int a, b;
    printf("enter a integer ");
    scanf("%d", &a);
    printf("enter a integer ");
    scanf("%d", &b);
    int sum, diff, prod, quot;
    sum = a + b;
    diff = a - b;
    prod = a * b;
    quot = a / b;
    printf("the sum is %d\n", sum);
    printf("the difference is %d\n", diff);
    printf("the product is %d\n", prod);
    printf("the quotient is %d\n", quot);
    return 0;
}