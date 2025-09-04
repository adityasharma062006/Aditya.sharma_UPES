/* Write a program to calculate electricity bill based on units consumed with these rates: 
First 100 units at ₹5/unit 
Next 100 units at ₹7/unit 
Next 100 units at ₹10/unit 
Above at ₹12/unit


Sample Test Cases:
Input 1:
50
Output 1:
Bill: ₹250

Input 2:
150
Output 2:
Bill: ₹850

Input 3:
250
Output 3:
Bill: ₹1700

*/
#include<stdio.h>
int main()
{
    int a,b;
    printf("enter a integer for units consumed: ");
    scanf("%d", &a);
    
 if ((a>0)&&(a<=100))
    {
        b = (a * 5);
        printf("%d", b );
    }
    if ((a>100)&&(a<=200))
    {
        a = a - 100;
        b = ((a * 7)+500);
        printf("%d", b );
    }
     if ((a>200)&&(a<=300))
    {
        a = a - 200;
        b = ((a * 10) + 1200);
        printf("%d", b );
    }
    else if(a > 300)
    {
        a = a - 300;
        b = ((a * 12) + 2200);
        printf("%d", b );
    }
    return 0;
}