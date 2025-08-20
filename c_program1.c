#include <stdio.h>
int main()
{
    int a, b, c;
    printf("enter a integer ");
    scanf("%d", &a);
    printf("enter a integer ");
    scanf("%d", &b);
    printf("enter a integer ");
    scanf("%d", &c);
    int d = (b * b) - (4 * a * c);
    if (d > 0)
    {
        printf("roots are real and distinct");
    }
    else if (d == 0)
    {
        printf("roots are real and equal");
    }
    else
    {
        printf("roots are imaginary");
    }
    return 0;
}