/* Write a program to calculate library fine based on late days as follow
First 5 days late: ₹2/day 
Next 5 days late: ₹4/day 
Next 20 days days late: ₹6/day 
More than 30 days: Membership Cancelled.

Sample Test Cases:
Input 1:
4
Output 1:
Fine ₹8

Input 2:
8
Output 2:
Fine ₹32

Input 3:
15
Output 3:
Fine ₹90

Input 4:
31
Output 4:
Membership Cancelled

*/
#include<stdio.h>
int main()
{
    int a,b;
    printf("enter a integer for number of days: ");
    scanf("%d", &a);
    
 if ((a>0)&&(a<=5))
    {
        b = (a * 2);
        printf("%d", b );
    }
    if ((a>5)&&(a<=10))
    {
        b = (a * 4);
        printf("%d", b );
    }
     if ((a>10)&&(a<=30))
    {
        b = (a * 6);
        printf("%d", b );
    }
    else if(a > 30)
    {
        printf("Membership Cancelled");
    }
    return 0;
}
