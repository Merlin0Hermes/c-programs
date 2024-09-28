#include <stdio.h>

int main(void)
{
    float amount, taxed_amount;

    printf("Enter an amount: ");
    scanf("%f", &amount);

    taxed_amount = amount * 1.05f;

    printf("With tax added: $%.2f\n", taxed_amount);
}