#include <stdio.h>
typedef enum
{
    ADMIN,
    USER,
    GUEST
} role;
void pr(int n)
{
    switch (n)
    {
    case ADMIN:
        printf("ADMIN");
        break;
    case USER:
        printf("USER");
        break;
    case GUEST:
        printf("GUEST");
        break;

    default:
        break;
    }
}
int main()
{
    pr(ADMIN);

    return 0;
}