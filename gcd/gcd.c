/*Finds GCD of two integers*/
#include <stdio.h>

int gcd(int num1, int num2);

int main(void)
{
    int num1, num2;
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    printf("Greatest common divisor: %d\n", gcd(num1, num2));

}
int gcd(int num1, int num2)
{
    int remainder;
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
    return num1;
}