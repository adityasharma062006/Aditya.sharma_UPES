//Write a program to check if a number is prime.

/*
Sample Test Cases:
Input 1:
7
Output 1:
Prime

Input 2:
10
Output 2:
Not prime

*/

#include <stdio.h>
int main()
{
    int i, number,prime;
    printf("enter the number:");
    scanf("%d", &number);

for (i=2; i<=number; i++)
    {
       if (number % i== 0)
       {
        prime = 0;
       }

    }
    if (prime == 1)
     {
        printf("%d is prime",number);
     }
     else
     {
        printf("%d is not prime", number);
     }
    return 0;
}