#include <stdio.h>

enum Color
{
    RED = 10,
    GREEN = 20,
    BLUE = 30
};

int main()
{
    enum Color c1, c2, c3;

    c1 = RED;
    c2 = GREEN;
    c3 = BLUE;

    printf("RED = %d\n", c1);
    printf("GREEN = %d\n", c2);
    printf("BLUE = %d\n", c3);

    return 0;
}