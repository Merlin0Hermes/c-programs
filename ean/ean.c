#include <stdio.h>

int main(void)
{
    int single_digit, first_five, last_six;
    int first_sum, second_sum, total, check_digit;
    int i1, i2, i3, i4, i5;
    int j1, j2, j3, j4, j5, j6;

    printf("Enter the first 12 digits of a EAN: ");
    scanf("%1d%5d%6d", &single_digit, &first_five, &last_six);

    i1 = first_five % 10;
    i2 = (first_five / 10) % 10;
    i3 = (first_five / 100) % 10;
    i4 = (first_five / 1000) % 10;
    i5 = first_five / 10000;

    j1 = last_six % 10;
    j2 = (last_six / 10) % 10;
    j3 = (last_six / 100) % 10;
    j4 = (last_six / 1000) % 10;
    j5 = (last_six / 10000) % 10;
    j6 = last_six / 100000;


    first_sum = i1 + i3 + j5 + j3 + i5 + j1;
    second_sum = single_digit + i2 + i4 + j6 + j2 + j4;
    total = 3 * first_sum + second_sum;

    printf("%d %d\n", first_sum, second_sum);
    check_digit = 9 - ((total - 1) % 10);

    printf("Check digit: %d\n", check_digit);

    return 0;
}