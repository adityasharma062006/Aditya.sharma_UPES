#include <stdio.h>
int main()
{
    int s1, s2, s3, s4, s5;
    printf("enter a integer for s1: ");
    scanf("%d", &s1);
    printf("enter a integer for s2: ");
    scanf("%d", &s2);
    printf("enter a integer for s3: ");
    scanf("%d", &s3);
    printf("enter a integer for s4: ");
    scanf("%d", &s4);
    printf("enter a integer for s5: ");
    scanf("%d", &s5);
    int r = ((s1 + s2 + s3 + s4 + s5) / 500) * 100;
    printf("%d", r);
    if (r >= 95)
    {
        printf(" grade is A");
    }
    else if (r >= 80)
    {
        printf(" grade is B");
    }
    else if (r >= 70)
    {
        printf(" grade is C");
    }
    else if (r >= 60)
    {
        printf(" grade is D");
    }
    else
    {
        printf(" grade is f");
    }
    return 0;
}