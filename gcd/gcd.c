/*Finds GCD of two integers*/
#include <stdio.h>

int main(void)
{
    int num1, num2, remainder;
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    while (1)
    {
        if (num2 == 0)
        {
            break;
        }
        remainder = num1 % num2;
        num1 = num2;
        num2 = remainder;

    }
    printf("Greatest common divisor: %d\n", num1);

}