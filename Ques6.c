//Q6: Write a program to swap two numbers using a third variable.

/*
Sample Test Cases:
Input 1:
3 5
Output 1:
After swap: 5 3

Input 2:
-1 1
Output 2:
After swap: 1 -1

*/
#include <stdio.h>

int main()
{
    int a,b;
    printf("enter a integer for a");
    scanf("%d", &a);
    printf("enter a integer for b");
    scanf("%d", &b);
    int c;
    c = a;
    a = b;
    b = c;
    printf("%d %d", a, b);

}