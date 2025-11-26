#include <stdio.h>

typedef enum
{
    RED,
    YELLOW,
    GREEN
} TRAFIC;
void sig(TRAFIC t)
{
    switch (t)
    {
    case 0:
        printf("Stop");
        break;
    case 1:
        printf("wait");
        break;
    case 2:
        printf("Go");
        break;

    default:
        break;
    }
}
int main()
{
    TRAFIC t = 2;
    sig(t);

    return 0;
}