#include <stdio.h>

int gcd(int num1, int num2);

int main(void)
{
    int num, denom, divisor;
    
    printf("Enter a fraction: ");
    scanf("%d/%d", &num, &denom);

    divisor = gcd(num, denom);

    printf("In lowest terms: %d/%d\n", num / divisor, denom / divisor);
    
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