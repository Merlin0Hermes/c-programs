#include <stdio.h>

int main(void)
{
    int number, octal = 0;
    int original;

    printf("Enter a number between 0 and 32767: ");
    scanf("%d", &number);
    original = number;

    octal = number % 8;
    number /= 8;

    octal = octal + (number % 8) * 10;
    number /= 8; 

    octal = octal + (number % 8) * 100;
    number /= 8; 

    octal = octal + (number % 8) * 1000;
    number /= 8; 

    octal = octal + (number % 8) * 10000;
    number /= 8; 

    printf("%d in octal is %.5d\n", original, octal);

}