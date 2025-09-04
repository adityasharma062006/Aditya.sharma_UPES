// Write a program to print the sum of the first n odd numbers.

/*
Sample Test Cases:
Input 1:
3
Output 1:
9

Input 2:
5
Output 2:
25

*/
 #include <stdio.h>

int main() {
    int i = 1,n,sum;
    printf("enter the number:");
    scanf("%d", &n);

    for (int i = 0; i <= n; i++) 
    if(i % 2 != 0)
    {
        sum = (sum + 1);
        i = (i + 1);
        printf("the sum of the numbers is %d", sum);
    }
    printf("\n");
    return 0;
}