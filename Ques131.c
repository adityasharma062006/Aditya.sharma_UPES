#include <stdio.h>

typedef enum
{
    SUNDAY,
    MONDAY,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY

} DAYS;

int main()
{
    char d[][10] = {
        "SUNDAY",
        "MONDAY",
        "TUESDAY",
        "WEDNESDAY",
        "THURSDAY",
        "FRIDAY",
        "SATURDAY"};
    for (int i = 0; i < 7; i++)
    {
        printf("%s = %d\n", d[i],i);
    }

    return 0;
}