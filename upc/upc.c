#include <stdio.h>

int main(void)
{
    int single_digit, first_five, last_five;
    int first_sum, second_sum, total;
    int i1, i2, i3, i4, i5;
    int j1, j2, j3, j4, j5;

    printf("Enter the first 11 digits of a UPC: ");
    scanf("%1d%5d%5d", &single_digit, &first_five, &last_five);

    i1 = first_five % 10;
    i2 = (first_five / 10) % 10;
    i3 = (first_five / 100) % 10;
    i4 = (first_five / 1000) % 10;
    i5 = (first_five / 10000) % 10;

    j1 = last_five % 10;
    j2 = (last_five / 10) % 10;
    j3 = (last_five / 100) % 10;
    j4 = (last_five / 1000) % 10;
    j5 = (last_five / 10000) % 10;

    
}