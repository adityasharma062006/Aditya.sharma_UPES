// Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.

/*
Sample Test Cases:
Input 1:
-5
Output 1:
Negative

Input 2:
0
Output 2:
Zero

Input 3:
10
Output 3:
Positive

*/

#include<stdio.h>

int main()
{
    int num;
    printf("enter the number to check the number is postive or negative : ");
    scanf("%d", &num);
    if (num < 0)
    {
        printf("The given number is negative\n", num);
    }
    else if (num == 0)
    {
        printf("the given number is Zero\n", num);
    }
    else 
    {
        printf("the given number is positive\n", num);
    }
    return 0; 
}