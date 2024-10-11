#include <stdio.h>

int main(void)
{
    int number, reverse = 0;

    printf("Enter a two digit number: ");
    scanf("%3d", &number);

    reverse = reverse * 10 + (number % 10);

    reverse = reverse * 10 + ((number / 10) % 10);

    reverse = reverse * 10 + ((number / 100) % 10);

    printf("Reverse number: %d\n", reverse);

    return 0;

}