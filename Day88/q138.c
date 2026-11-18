#include <stdio.h>

enum Days
{
    SUNDAY = 1,
    MONDAY,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY
};

int main()
{
    enum Days day;

    char *names[] = {
        "SUNDAY",
        "MONDAY",
        "TUESDAY",
        "WEDNESDAY",
        "THURSDAY",
        "FRIDAY",
        "SATURDAY"
    };

    printf("Enum Names and Their Integer Values:\n\n");

    for(day = SUNDAY; day <= SATURDAY; day++)
    {
        printf("%s = %d\n", names[day - 1], day);
    }

    return 0;
}