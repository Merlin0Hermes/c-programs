#include <stdio.h>

int main(void)
{
    int number, original, digits;

    printf("Enter a number: ");
    scanf("%d", &number);
    original = number;

    if (original < 0)
    {
        number *= -1;

    }

    if (number < 10)
    {
        digits = 1;

    }
    else if (number < 100)
    {
        digits = 2;
    }
    else if (number < 1000)
    {
        digits = 3;
    }
    else if (number < 10000)
    {
        digits = 4;
    }

    printf("Your number %d has %d digits.\n", original, digits);
    return 0;
}