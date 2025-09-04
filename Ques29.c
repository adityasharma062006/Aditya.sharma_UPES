// Write a program to calculate the factorial of a number.

/*
Sample Test Cases:
Input 1:
5
Output 1:
120

Input 2:
3
Output 2:
6

*/
#include <stdio.h>
int main()
{
    int fact=1, n;
    printf("Enter a number:");
    scanf("%d", &n);
    int i=n;
    while(i>0)
    {
        fact = fact*i;i--;
    }
    printf("\n factorial of %d is: %d", n, fact);
    return 0;
}
